#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	v.push_back(20);
	int sum=0;
	for(int i=0;i<v.size();i++)
	{
		sum=sum+v[i];
	}
	cout<<sum<<endl;
}
