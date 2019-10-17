#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll t,a,b,c;
	cin>>t;
	for(ll i=0;i<t;i++){
		cin>>a>>b>>c;
	    if(a>b && a>c){
	    	if(b>c)
	    	cout<<b<<endl;
	    	else
	    	cout<<c<<endl;
		}
		 else if(b>a && b>c){
	    	if(a>c)
	    	cout<<a<<endl;
	    	else
	    	cout<<c<<endl;
		}
		 else{
		 	if(a>b)
		 	cout<<a<<endl;
		 	else
		 	cout<<b<<endl;
		 }
	}
}
