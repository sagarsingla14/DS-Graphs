#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
ll temp;
ll n;
vector <int> graph[10000];
int insert(int u,int v){
	graph[u].push_back(v);
}

void printGraph(){
	for(ll i=0;i<10;i++){
		ll flag=0;
		cout<<i<<" ";
		for(ll j=0;j<graph[i].size();j++){
			cout<<"->"<<graph[i][j]<<" ";
			flag=1;
		}
		if(flag==1){
			cout<<endl;
		}
	}
}
int main(){
	cin>>n;
	cin>>temp;
	while(temp--){
		int u,v;
		cin>>u>>v;
		insert(u,v);
	}
	printGraph();
	return 0;
}
