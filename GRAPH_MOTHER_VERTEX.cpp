#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;
vector <ll> graph[1000];
ll n,e,temp;

int insert(ll u,ll v){
	graph[u].push_back(v);
}

vector <ll> visited(1000,0);
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
	for(ll i=0;i<n;i++){
		if(visited[i]!=1){
			dfs(i);
			mothervertex=i;
		}
	}
}

int CMV(){
	ll flag=0;
	for(ll i=0;i<n;i++){
		visited[i]=0;
	}
	dfs(mothervertex);
	for(ll i=0;i<n;i++){
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
	cin>>n>>e;	 
	temp=e;
	while(temp--){
		ll u,v;
		cin>>u>>v;
		insert(u,v);
	}
	temp=n;
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
