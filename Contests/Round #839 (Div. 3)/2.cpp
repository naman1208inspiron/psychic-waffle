#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;
typedef long double ld;

ll N = 1e9+7;
ll even(ll n){
    return n * (n+1);
}

// ll factorial (ll n){
//     if(n==1) return n; 
//     return n * factorial(n-1);
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n; 
        ll ans= even(n-1)%N;
        // cout<<ans<<endl;
        for(int i=1; i<=n; i++){
            ans = (ans*i) %N;
        }
        cout<<ans<<endl;
    }
    

    return 0;
}