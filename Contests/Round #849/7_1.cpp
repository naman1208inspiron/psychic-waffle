#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>>t;
    while(t--){
        ll n, c; cin>>n>>c;
        vector<ll>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            v[i] += i+1;
        }
        sort(v.begin(), v.end());
        int ptr = 0;
        while(c - v[ptr] >= 0){
            c-= v[ptr];
            ptr++;
        }
        cout<<ptr<<endl;
    }
    

    return 0;
}