#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {

	unordered_set <int> set1;
	int size= nums.size();
	int greatest=0;

	vector <int> output;
	
	for (int i=0;i<size;i++)
        
    {
    	set1.insert(nums[i]);
    	if (nums[i]>greatest)
    		greatest=nums[i];

    }

    for (int i=1;i<greatest;i++)
    {
    	if (set1.find(i)==set1.end())
    	{
    		output.push_back(i);
    	}
    }

    return output;
}


int main()

{

	int size,temp;
	cin>>size;
	vector <int> arr,output;

	for (int i=0;i<size;i++)
	{	cin>>temp;
		arr.push_back(temp);
	}

/*	for (int i=0;i<size;i++)
	{	cout<<arr[i]<<endl;


	}*/

	output=findDisappearedNumbers(arr);

	for (int i=0;i<output.size();i++)
		cout<<output[i]<<endl;

	return 0;

}