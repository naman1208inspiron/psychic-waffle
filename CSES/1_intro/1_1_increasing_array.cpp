#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t=1; 
    while(t--){
        ll n; cin>>n;
        ll prev= 0, ans=0;
        while(n--){
            ll x; cin>>x;
            if(x < prev) ans+= prev-x;
            else prev = x;
        }
        cout<<ans;
    }
    

    return 0;
}