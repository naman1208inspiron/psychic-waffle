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
        int n; cin>>n;
        string s; cin>>s;
        int l= 0, r= n-1;
        while(s[l] != s[r] || l!=r){
            l++; r--;
        }
        cout<<r-l+1<<endl;
    }
    

    return 0;
}