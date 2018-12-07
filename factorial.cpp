//cpp code for finding factorial upto 20
#include <bits/stdc++.h> 
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
	cin>>n;
	int i=1;
	if(n==0)
	cout<<"1"<<endl;
	else
	{
	long long int fact=1;
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	cout<<fact<<endl;
	}
		return 0;
}
