#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,u;
	cin>>n>>u;
	long long arr[n]={0};
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long double result=0,ans=0;
	for(long long i=0; i<n-2;i++)
	{
		for(long long j=i+1;j<n-1;j++)
		{
			for(long long k=j+1;k<n;k++)
			{
				if(arr[k]-arr[i]<=u && arr[k]-arr[j]<=u && arr[k]-arr[i]>=arr[k]-arr[j])
				{
					ans=(double(arr[k]-arr[j])/double(arr[k]-arr[i]));
					result=max(ans,result);
				}
			}
		}
	}
	if(result==0)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<result<<endl;
	}
	return 0;
}
