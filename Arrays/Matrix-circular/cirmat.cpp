#include<bits/stdc++.h>

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
		unordered_set <int> visited;
		int i=0,j=0;
		bool flag =0;
		// 0 = increasing , 1 = decreasing
		int row = matrix.size();
		int col= matrix[0].size();
		vector <int> output; 


		while (visited.find(matrix[i][j])==visited.end())
		{

			while (j<col && visited.find(matrix[i][j])==visited.end())
			{	cout<<matrix[i][j]<<endl;
				output.push_back(matrix[i][j]);
				visited.insert(matrix[i][j]);
				j++;	
			}


			j--;
			i++;

			while (i<row && visited.find(matrix[i][j])==visited.end())
			{	cout<<matrix[i][j]<<endl;
				output.push_back(matrix[i][j]);
				visited.insert(matrix[i][j]);
				i++;
			}


			i--;
			j--;

			while (j>=0 && visited.find(matrix[i][j])==visited.end())
			{	cout<<matrix[i][j]<<endl;
				output.push_back(matrix[i][j]);
				visited.insert(matrix[i][j]);
				j--;
			}	

			j++;

			i--;

			while (i>=0 && visited.find(matrix[i][j])==visited.end())
			{	cout<<matrix[i][j]<<endl;
				output.push_back(matrix[i][j]);
				visited.insert(matrix[i][j]);
				i--;
				
			}
			i++;
			j++;
	

		}
		return output;


    }


int main ()

{
	vector <vector <int>> arr;
	int row,col,temp_var;
	cin>>row;
	cin>>col;
	//inputing values
	for (int i=0;i<row;i++)
	{
		vector <int> temp;
		for (int j=0;j<col;j++)
		{
			cin>>temp_var;
			temp.push_back(temp_var);
		}
		arr.push_back(temp);
	}

	vector <int> output;
	output = spiralOrder(arr);

	for (int i=0;i<output.size();i++)
	{

			cout<<output[i]<<" ";
	}

	return 0;
}