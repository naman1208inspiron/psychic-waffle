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
        char c; cin>>c; 
        string s= "codeforces";
        if(s.find(c) != string::npos) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    

    return 0;
}