#include <bits/stdc++.h> 
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int x;
	int max=0;
	int arr[100000]={0};
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		arr[x]=arr[x]+1;
		if(max<=x)
			max=x;
	}
	// for (int i = 0; i <= max; ++i)
	// cout<<arr[i]<<"\t";

	for (int i = 0; i <= max; ++i)
	{
		if(arr[i]==1)
		{
			cout<<i<<endl;
			break;
		}
	}
//	cout<<unique<<endl;

	return 0;
}