#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c=0,d;
	cout<<"enter the number of element in array"<<endl;
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	cout<<"element to be search"<<endl;
	cin>>b;
	for(int j=0;j<a;j++){
		if(b==arr[j]){
			c++;
			d=j;
		}
	}
	if(c==1)
	cout<<"element is at - "<<d<<endl;
	else
	cout<<"element is not found"<<endl;
	return 0;
}
