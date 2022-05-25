#include <bits/stdc++.h>
using namespace std;


int trap(vector<int>& height) {
	int size = height.size();
	vector<int> left (size,0);
	vector<int> right (size,0);
	int output=0;

	//filling left array
	left[0]=height[0];
	right[size-1]=height[size-1];

	for (int i=1;i<size;i++)
	{
		left[i]=max(left[i-1],height[i]);
		right[size-i-1]=max(right[size-i],height[size-i-1]);
	}

	for (int i=0;i<size;i++)
	{
		output+=min(left[i],right[i]) - height [i] ;

	}
	return output;

}

int main ()
{
	int size,temp;
	vector <int> arr;

	cin>>size;
	for (int i=0;i<size;i++)
	{
		cin>>temp;
		arr.push_back(temp);

	}

	// for (int i=0;i<size;i++)
	// {
	// 	cout<<arr[i]<<endl;
	// }

	cout<<trap(arr);

	return 0;
}