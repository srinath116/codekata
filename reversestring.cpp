#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	cout<<reverse(s.begin(),s.end())<<endl;
	return 0;
}