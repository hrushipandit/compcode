#include<bits/stdc++.h>
using namespace std;

int main ()
{
	char s[1000];
	cin.getline(s,1000);
	int space_cnt=0;

	for (int i=0;s[i]!='\0';i++)
	{
		if (s[i]==' ')
		{
			space_cnt++;
		}
	}

	cout<<--space_cnt<<endl;
	int size=0;
	for (int i=0;s[i]!='\0';i++)
	{
		size++;
	}
	cout<<size<<endl;

	int more_space = space_cnt*3;
	cout<<more_space<<endl;
	int total_space = more_space + size;
	cout<<total_space<<endl;
	 for (int j=size;j>=0;j--)
	 {
	 	if (s[j]!=' ')
	 		s[total_space]=s[j];
	 	else
	 	{
	 		//s.replace(total_space,1,'0');
	 		s[total_space] = '0';
	 		total_space--;
	 		//s.replace(total_space,1,'2');
	 		s[total_space] = '2';
	 		total_space--;
	 		//s.replace(total_space,1,'%');
	 		s[total_space] = '%';
	 	}
	 	total_space--;
	 }

	 for (int i=0;s[i]!='\0';i++)
	{
		cout<<s[i];
	}
}