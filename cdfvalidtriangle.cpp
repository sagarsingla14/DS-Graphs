#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a,b,c;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a>0 && b>0 && c>0 && a+b+c==180 )
		{
			cout<<"YES"<<endl;
		}
		else 
		cout<<"NO"<<endl;
	}
}
