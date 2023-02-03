#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

void solve(){
    int n; cin>>n; 
    if(n==3) cout<<-1;
    vector<int>v(n);
    for(int i=0; i<n; i++)v[i]= i+1;
    if(n%2==0){
        for(int i=0; i<n; i+=2) swap(v[i], v[i+1]);
    }
    else{
        for(int i=0; i<n-3; i+=2) swap(v[i], v[i+1]);
        reverse(v.begin()+n-3, v.end());
    }
    
    for(int it: v) cout<<it<<" ";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}