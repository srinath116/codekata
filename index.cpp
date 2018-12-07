#include <bits/stdc++.h> 
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==i)
			{
				flag=1;
				cout<<arr[i]<<" ";
			}
	}
	if (flag==0)
	{
		cout<<"-1"<<endl;
		/* code */
	}
	return 0;
}