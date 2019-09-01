// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<iostream>
using namespace std;
int main()
{
int q;
cin>>q;
while(q--)
{
	int l,r,flag=0;
	cin>>l>>r;
	for(int j=l;j<=r;j++)
	{
	for(int i=2;i<j;i++)
	{
		int n=i;
		for(int k=2;n<j;k++)
		n*=i;
		if(j==n)
		{
		cout<<j<<endl;
		flag=0;
		goto r;
		}
		else
	  flag=1;
	}
	}
	if(flag==1)
	cout<<"0"<<endl;
	r: ;
}

return 0;
}
