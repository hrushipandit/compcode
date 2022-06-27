#include<bits/stdc++.h>
using namespace std;

// 5  1  9  11
// 2  4  8  10
// 13 3  6  7
// 15 14 12 16

void rotate(vector<vector<int>>& matrix) {

    int row=matrix.size();
    int col=matrix[0].size();
   
    reverse (matrix.begin(),matrix.end());

    for (int i=0;i<row;i++)
    {
        for (int j=i;j<col;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }


    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    }


int main ()
{
    vector <vector<int>> input;

    int row,col,temp1;

    cin>>row;
    cin>>col;

    for (int i=0;i<row;i++)
    {   vector <int> temp;
        for (int j=0;j<col;j++)
        {
            cin>>temp1;
            temp.push_back(temp1);
        }
        input.push_back(temp);
    }

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }

    rotate(input);

    return 0;
    
}