#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n; cin>>n; 
    ll sum= (n* (n+1) )/2;
    for(ll i=0; i<n-1; i++){
        ll x; cin>>x;
        sum-=x;
    }
    cout<<sum<<endl;

    return 0;
}