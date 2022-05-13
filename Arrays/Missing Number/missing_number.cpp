#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int missingNumber(vector<int>& nums) {

    
    for(i = 0;i<nums.size();i++)
    {
        if( i == nums[i])
        {
            continue;
        }
        return i;
    }
    return i;
}
};


int main ()
{   int N = 10e4 + 10;
    vector <int> arr;
    int num,temp;
    cin>>num;


    for (int i=0;i<num;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    // for (int i=0;i<num;i++)
    // {
    //     cout<<arr[i];
    // }

    cout<<missingNumber(arr);

    return 0;
}