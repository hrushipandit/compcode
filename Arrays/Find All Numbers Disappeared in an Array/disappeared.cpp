#include<bits/stdc++.h>
using namespace std;


vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector <int> MN;
        int j=0;
        for (int i=1;i<=nums.size();i++)
        {	//cout<<"i value is : "<<i<<"  nums[j] is : "<<nums[j]<<endl;
        	if (nums[j]!=i)
        	{
        		MN.push_back(i);
        	}
        	else
        	{	int temp=nums[j];
        		while (nums[j]==temp)
        		{
        			j++;
        		}
        		//cout<<"incrementing j"<<endl;
        	}
        	//cout<<"incrementing i"<<endl;
        }

        
        return MN;
    }

int main()
{	
		vector<int> nums,output;
	 int num,num2;
	// cout<<"Enter number of Elements"<<endl;
	 cin>>num;
	 for (int i=0;i<num;i++)
	 {	cin>>num2;
	 	nums.push_back(num2);
	 }

	// for (int i=0;i<num;i++)
	// 	cout<<nums[i];

	output=findDisappearedNumbers(nums);
	for (int i=0;i<output.size();i++)
	{
		cout<<output[i]<<endl;
	}
	return 0;
}