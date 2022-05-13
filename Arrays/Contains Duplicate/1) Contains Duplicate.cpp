//217. Contains Duplicate from Sean Prasad


#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> Freq;

 // Working Solution 1 

//Runtime: 150 ms, faster than 26.68% of C++ online submissions for Contains Duplicate.
//Memory Usage: 53.4 MB, less than 21.33% of C++ online submissions for Contains Duplicate.

	 int missingNumber(vector<int>& nums) {

        unordered_map <int,int> Freq;
        int size=nums.size();
        
        for (int i=0;i<=size;i++)
        {
            Freq[i]++;
        }

        for (int i=0;i<=size;i++)
        {
            Freq[nums[i]]++;
        }

       unordered_map<int, int>:: iterator itr = Freq.begin();

	  	for (itr = Freq.begin();itr!=Freq.end();itr++)
	  	{		cout<<itr->first<<itr->second<<endl;
	  			  if (itr->second==1)
	  			  	return itr->first;
	  	}
        return 0;    
    }





int main ()
{	
	vector<int> nums;
	 int num,num2;
	// cout<<"Enter number of Elements"<<endl;
	 cin>>num;
	 for (int i=0;i<num;i++)
	 {	cin>>num2;
	 	nums.push_back(num2);
	 }

	cout<<containsDuplicate(nums);


}