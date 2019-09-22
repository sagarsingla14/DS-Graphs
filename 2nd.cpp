#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll int

using namespace std;

int result(string str, vector<ll> v, ){
    vector<pair<ll,ll> > vecpair;
    
    for(ll i=0;i<v.size();i++){
        ll idx = 0;
        while( (str[idx]-'0') != v[i]){
            idx++;
        }
        vecpair.push_back(make_pair(idx,v[i]));
    }
    ll sze = vecpair.size();
    sort(vecpair.begin(),vecpair.end());
    ll ans = abs(vecpair[vecpair.size()-1].first - vecpair[0].first);
    ll num = vecpair[0].second;
    ll mini = vecpair[0].first;
    swap(vecpair[0], vecpair[vecpair.size()-1]);
    vecpair.pop_back();
    ll n = str.size();
    while(mini<str.size()){
        mini++;
        while(str[mini]-'0' != num  &&  mini<str.size()){
            mini++;
        }
        if(mini>=str.size()){
            return ans;
		}
        else{
            vecpair.push_back(make_pair(mini,num));
            sort(vecpair.begin(),vecpair.end());
            ans = min(ans,vecpair[vecpair.size()-1].first - vecpair[0].first);
            mini = vecpair[0].first;
            num = vecpair[0].second;
            swap(vecpair[0], vecpair[vecpair.size()-1]);
            vecpair.pop_back();
        }
    }
    return ans;
}

int main() {
    ll n;
    string str;
    map<ll,ll> mp;
    vector <ll> vec;
    int ans = INT_MAX;
    
    cin>>n>>str;
    
    for(ll i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    map <ll, ll> :: iterator itr;
    
    for(itr = mp.begin();itr != mp.end();itr++){
    	ll temp = itr->second;
        if(temp % 2 != 0){
            vec.push_back(itr->first);
        }
    }
    ll sze = vec.size();
    if(sze == 1){
        cout<<"0"<<endl;
        return 0;
    }
    if(sze == 0){
        cout<<"-1"<<endl;
        return 0;
    }
    
    ans = result(str,vec);
    
    cout<<ans<<endl;

    return 0;
}
