#include <bits/stdc++.h> 
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int unique=0;
	int a[100000]={0};
	int x;
	int max=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		a[x]++;
		if(x>max)
			max=x;
	}
	for (int i = 0; i < max; ++i)
	{
		if(a[i] > 1)
		{	unique=1;
			break;
		}

	}
	if(unique==1)
	{

	
	sort(a,a+max);
	for(int i=0;i<max;++i)
	{
		if(a[i]>1)
			cout<<i<<" ";
	}
}
else
cout<<"unique"<<endl;

	return 0;
}