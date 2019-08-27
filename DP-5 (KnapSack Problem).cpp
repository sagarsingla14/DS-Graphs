#include <bits/stdc++.h>
using namespace std;
int ks(int n,int wc,int v[],int w[]){
	int arr[n+1][wc+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=wc;j++){
			if(i==0 || j==0){
				arr[i][j]=0;
			}
			else if(w[i-1]>wc){
				arr[i][j]=arr[i-1][j];
			}
			else{
				arr[i][j]=max((v[i-1]+arr[i-1][j-w[i-1]]),arr[i-1][j]);
			}
		}
	}
	return arr[n][wc];
}
int main(){
	int n,wc;
	cin>>n>>wc;
	int v[n]={0},w[n]={0};
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	int value=ks(n,wc,v,w);
	cout<<value<<endl;
}
