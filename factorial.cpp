#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	ll t,n;
	cin >>t;
	for (int i=0;i<t;i++){
		cin >>n;
		ll fact=1;
		for(ll j=n;j>0;j--){
			fact=fact*j;
		}
		cout <<fact<<endl;
	}
	return 0;
	
}
