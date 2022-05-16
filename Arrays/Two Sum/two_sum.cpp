
#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {

		set <int> lookup;
		vector <int> output;
		int second_num;
		for (int i=0;i<nums.size();i++)
		{
			second_num= target - nums[i];
			cout<<nums[i]<<"+"<<second_num<<endl;
			if (lookup.count(second_num))
			{	
				vector<int>::iterator it = find(nums.begin(), nums.end(), second_num);
				int index = std::distance(nums.begin(), it);

				if (index==0)
				{	output.push_back(index);
					output.push_back(i);
					
				}
				else
				{
				output.push_back(i);
				output.push_back(index);
				}


				return output;
			}

			else
			{
				lookup.insert(nums[i]);
			}

		}
      return output;  
    }


int main ()
{

	int num_of_elements,temp,target;
	vector <int> arr,output;

	cin>>num_of_elements;
	for (int i=0;i<num_of_elements;i++)
	{	cin>>temp;
		arr.push_back(temp);
	}

	cin>>target;

	output= twoSum(arr,target);

	for (int i=0;i<output.size();i++)
		cout<<output[i]<<endl;



	// for (int i=0;i<num_of_elements;i++)
	// {	cout<<arr[i]<<endl;
	// }

	return 0;
}