#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

void solve(){
    string a, b; cin>>a>>b;
    int alen= a.size(), blen= b.size();
    if(a[alen-1]=='S' && b[blen-1]=='S'){
        if(alen > blen) cout<<"<";
        else if(alen < blen) cout<<">";
        else cout<<"=";
    }
    else if(a[alen-1]=='L' && b[blen-1]=='L'){
        if(alen > blen) cout<<">";
        else if(alen < blen) cout<<"<";
        else cout<<"=";
    }
    else if(a[alen-1]=='M' && b[blen-1]=='M') cout<<"=";
    else if(a[alen-1]=='L') cout<<">";
    else if(b[blen-1]=='L') cout<<"<";
    else if(a[alen-1]=='M') cout<<">";
    else if(b[blen-1]=='M') cout<<"<";
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