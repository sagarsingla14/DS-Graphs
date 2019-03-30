#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
ll t;
vector <ll> graph[1000];
int insert(ll u,ll v){
	graph[u].push_back(v);
}
vector <ll> visited(10,0);  ////////////// problem is heeree
void dfs(ll cur){
	visited[cur]=1;
	for(ll z=0;z<graph[cur].size();z++){
		if(visited[graph[cur][z]]!=1){
			dfs(graph[cur][z]);
		}
	}
}
ll mothervertex=0;
void findMotherVertex(){
	for(ll i=0;i<t;i++){
		if(visited[i]!=1){
			dfs(i);
			mothervertex=i;
		}
	}
}
int CMV(){
	ll flag=0;
	for(ll i=0;i<t;i++){
		visited[i]=0;
	}
	dfs(mothervertex);
	for(ll i=0;i<t;i++){
		if(visited[i]!=1){
			flag=1;
			break;
		}
	}
	if(flag==1){
		return -1;
	}
	else{
		return mothervertex;
	}
}
int main(){
	ll n;
	cin>>t>>n;	
	while(n--){
		ll u,v;
		cin>>u>>v;
		insert(u,v);
	}
	findMotherVertex();
	ll vertex=CMV();
	if(vertex==-1){
		cout<<"-1"<<endl;
	}
	else{
		cout<<vertex<<endl;
	}
	return 0;
}
