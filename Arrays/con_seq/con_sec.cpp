#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {


	unordered_set <int> set1 (nums.begin(),nums.end());
	int res=0;
	for (int i=0;i<nums.size();i++)
	{	int temp = nums[i]-1;
		if (set1.find(temp) == set1.end())
		{	int count=0;
			temp=nums[i];
			while(set1.find(temp) != set1.end())
			{	
				set1.erase(temp);
				count++;
				temp++;

			}

		res=max(res,count);

		}
	

	}

	return res;
}
int main ()
{	int size;
	vector <int> input;
	int temp;
	cin>>size;
	
	for (int i=0;i<size;i++)
	{	cin>>temp;
		input.push_back(temp);
	}

	// for (int i=0;i<size;i++)
	// {
	// 	cout<<input[i]<<endl;
	// }

	cout<<longestConsecutive(input);

}