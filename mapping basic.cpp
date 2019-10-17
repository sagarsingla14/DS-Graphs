#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll arr[n]={0};
	map<ll,ll> mp;
	map<ll,ll>::iterator itr;
	cout<<"enter the elements in array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	for(itr=mp.begin();itr!=mp.end();++itr){
		cout<<itr->first<<"  "<<"-"<<"  "<<itr->second<<endl;
	}
	return 0;
}

