#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll o=0, e=0;
        while(n--){
            int x; cin>>x;
            if(x&1) o++; 
            else e++;
        }
        ll m; cin>>m;
        ll oo=0, ee=0;
        while(m--){
            int x; cin>>x;
            if(x&1)  oo++;
            else ee++;
        }
        cout<<o*oo + e*ee<<endl;
    }
    

    return 0;
}