#include<bits/stdc++.h>
using namespace std;

// [1,2,3,4]
// [5,0,7,8]
// [0,10,11,12]
// [13,14,15,0]

void setZeroes(vector<vector<int>>& matrix) {

	
    int rows = matrix.size();
    int column= matrix[0].size();
    int f_row_zeros=1;

    //checking for first row

    for (int i=0;i<column;i++)
    {   
        if (matrix[0][i]==0)
        {   //cout<<i<<endl;
            f_row_zeros=0;
        }
    }

    //checking for first column
    for (int i=0;i<rows;i++)
    {
        if (matrix[i][0]==0)
        {  cout<<"shouldnt work"<<endl;
            matrix[0][0]=0;

        }
    }

    //checking for all others

    for (int i=1;i<rows;i++)
    {
        for (int j=1;j<column;j++)
        {
            if (matrix[i][j]==0)
            {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }

        }
    }





    //backward changing

    for (int i=rows-1;i>=1;i--)
    {
        for (int j=column-1;j>=1;j--)
        {
            if (matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
    }


    //first column change

    if (matrix[0][0]==0)
    {
        for (int i=0;i<rows;i++)
        {
            matrix[i][0]=0;
        }
    }


    //first row changing

    if (f_row_zeros==0)
    {
        for (int i=0;i<column;i++)
        {
            matrix[0][i]=0;
        }
    }


        //printing
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<column;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }



}

int main ()
{


int rows,column,temp1;
cin>>rows;
cin>>column;
vector <vector <int>> arr;

for (int i=0;i<rows;i++)
{   vector <int> temp;
    for (int j=0;j<column;j++)
    {   cin>>temp1;
        temp.push_back(temp1);
    }
    arr.push_back(temp);
}

    // for(int i = 0; i < rows * column; i++)
    // {
         
    //     // Find row and column index
    //     int row = i / column;
    //     int col = i % column;
    //     cout << arr[row][col] << " ";
    // }

    setZeroes(arr);
    return 0;

}