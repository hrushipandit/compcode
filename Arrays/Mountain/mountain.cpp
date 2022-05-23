#include<bits/stdc++.h>
using namespace std;


int longestMountain(vector<int>& arr) {
 	 int left=0;
     int right=0;
     int size=0;
 	 int output=0;

 	for (int i=1;i<arr.size()-1;i++)
 	{
 		if (arr[i]>arr[i-1]&&arr[i]>arr[i+1])
 		{	
 			cout<<"Peak is"<<arr[i]<<"at location "<<i<<endl;
 			int j=i;
 			int z=i;
 			left=0;
 			right=0;

 			while ( j>=1 && arr[j]>arr[j-1])
 			{	cout<<arr[j]<<" at location "<<j<<" is more than "<<arr[j-1]<<endl;
 				left++;
 				j--;        
 				cout<<"left is: "<<left<<endl;
 			}

 			while (z<arr.size()-1 && arr[z]>arr[z+1] )
 			{	cout<<arr[z+1]<<" is less than "<<arr[z]<<endl;
 				right++;
 				z++;			
 				cout<<"right is: "<<right<<endl;
 			}

 			 while (arr[j]==arr[j+1] && j>=0)
 			 {
 			 	j--;
 			 }

 			 while (arr[z]==arr[z-1] && z<arr.size())
 			 {
 			 	z++;
 			 }

 			size=left+right;

 			if (output<size+1)
 			{   cout<<"changing output"<<endl;
 				output=size+1;
 			}
 		}
 	}
 	return output;
}

int main ()
{

	int size_array,temp;
	vector <int> array;
	cin>>size_array;

	for (int i=0;i<size_array;i++)
	{
		cin>>temp;
		array.push_back(temp);
	}

	// for (int i=0;i<size_array;i++)
	// {
	// 	cout<<array[i]<<endl;
	// }


	cout<<longestMountain(array);

	return 0;
}