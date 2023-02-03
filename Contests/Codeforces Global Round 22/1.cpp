#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ll;

void doDamage(vector<ll > &a, vector<ll > &b){
    ll  asize= a.size(), bsize= b.size();
    sort(a.begin(), a.end(), greater<ll >());
    for(ll  i=0; i<bsize; i++){
        b[i]*=2;
        a[i]*=2;
    }
}

void solve(){
    ll  n; cin>>n; 
    vector<ll > fire, forst, type(n);
    for(ll  i=0; i<n; i++){
        cin>>type[i];
    }
    ll  fireMin= INT_MAX, forstMin= INT_MAX;
    for(ll  i=0; i<n; i++){
        ll  b; cin>>b;
        if(type[i]==0){
            fireMin = min(fireMin, b);
            fire.push_back(b);
        }
        else {
            forst.push_back(b);
            forstMin = min(forstMin, b);
        }
    }
    ll  firesize= fire.size(), forstsize= forst.size();
    if(firesize > forstsize){
        doDamage(fire, forst);
    }
    else {
        doDamage(forst, fire)
    }
    ll  tdamage=0;
    for(ll  it: fire) tdamage+= it;
    for(ll  it: forst) tdamage+= it;

    if(firesize == forstsize) tdamage -= min(forstMin, fireMin);
    cout<<tdamage<<endl;
    
}

int  main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   ll  t; cin>>t;
   while (t--)
   {
    solve();
   } 

    return 0;
}
