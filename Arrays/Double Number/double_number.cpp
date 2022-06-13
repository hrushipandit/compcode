#include<bits/stdc++.h>
using namespace std;



    int findDuplicate(vector<int>& nums) {

    	int fast,slow;
    	fast=nums[0];
    	slow=nums[0];

    	do
    	{
    		slow=nums[slow];
    		fast=nums[nums[fast]];
    	}while (fast!=slow);

    	fast=nums[0];

    	while (fast!=slow)
    	{
    		slow=nums[slow];
    		fast=nums[fast];
    	}

    	return fast;

    }

int main ()

{
	int temp,size;

	cin>>size;
	vector <int> input ;

	for (int i=0;i<size;i++)
	{
		cin>>temp;
		input.push_back(temp);
	}

	cout<<findDuplicate(input);

}