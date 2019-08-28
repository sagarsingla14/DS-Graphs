#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		ll arr[26]={0};
		for(ll i=0;i<str.length();i++){
			arr[str[i]-'a']++;
		}
		ll check=0;
		for(ll i=0;i<26;i++){
			if(arr[i]>1){
				check=1;
			}
		}
		if(check==1){
			cout<<"No"<<endl;
		}
		else{
			ll flag=0;
			for(ll i=0;i<26;i++){
				if(arr[i]==1 && flag==0){
					flag=1;
				}
				if(arr[i]==0 && flag==1){
					flag=2;
				}
				if(arr[i]==1 && flag==2){
					flag=3;
				}
			}
			if(flag==3){
				cout<<"No"<<endl;
			}
			else{
				cout<<"Yes"<<endl;
			}
		}
	}
	return 0;
}
