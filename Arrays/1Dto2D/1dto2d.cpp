#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int row, int col) {
       vector <vector <int>> output; 

	vector <int> v1;
	int i=0;

	for(int i=0;i<original.size();i++)
	{	
		v1.push_back(original[i]);
		if ((i+1)%(col)==0)
		{

			output.push_back(v1);
			v1.clear();
		}
	}
	return output;
    }


int main ()
{	
	int size,temp,m,n;
	vector <int> arr;
	vector <vector <int>> vec1;
	cin>>size;	
	for (int i=0;i<size;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}

	cin>>m;
	cin>>n;
	vec1=construct2DArray(arr,m,n);

for (int i = 0; i < m; i++) {
        for (
            auto it = vec1[i].begin();
            it != vec1[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }






	return 0;
}