#include <bits/stdc++.h>
#define ll long long
#define a 1008
#define b 8001
using namespace std;

static ll dp[a][b];

int main(){
		ll n,k;
		cin>>n>>k;
		map <ll,ll> hm;
		for(ll i=0;i<n;i++){
			ll x;
			cin>>x;
			hm[x]++;
		}
		cout<<1<<endl;
	
		for(ll i=0;i<a;i++){
			for(ll j=0;j<b;j++){
				dp[i][j] = 0;
			}
		}
		for(ll i=0;i<a;i++){
			for(ll j=0;j<b;j++){
				if(i==0 || j==0){
					dp[i][j]=0;
				}
				else if(i==1){
					dp[i][j]=dp[i][j-1]+hm[j];
				}
				else{
					dp[i][j] = dp[i][j-1] + (dp[i-1][j-1]*hm[j]);
				}
			}
		}
		
		ll ans=0;
		for(ll i=0;i<=k && i<=1007;i++){
			ans+=dp[i][8000];
		}
		cout<<ans+1<<endl;
		
		for(ll i=0;i<1008;i++){
			cout<<"i -> "<<i<<" "<<dp[i][8000]<<endl;
		}
	return 0;
}
