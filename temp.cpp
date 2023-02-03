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
        int n, s, r; cin>>n>>s>>r;
        cout<<s-r<<" ";
        for(i=0; i<n-2; i++) cout<< r/n-2<<" ";
        cout<<r - ((n-2) * (r/n-2));
        cout<<endl;
    }
    

    return 0;
}