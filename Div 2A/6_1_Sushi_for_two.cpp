#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n; cin>>n; 
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin>>v[i];
        ll l=0, r=0, ans=0, count=0;
        while(r!= n){
            if(r-l == count) ans= max(ans, count*2);
            if(v[l]== v[r]) r++;
            else{
                count= r-l;
                l=r;
            }
        }
        if(r-l == count) ans= max(ans, count*2);
        cout<<ans<<endl;
    }
    

    return 0;
}