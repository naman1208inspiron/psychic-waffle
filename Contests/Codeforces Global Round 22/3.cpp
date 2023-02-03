#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;


void solve(){
    int n; cin>>n; 
    vector<int> v(n);
    int even= 0, odd= 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i] % 2== 0) even++;
        else odd ++;
    }
    if(odd ==even ) cout<<"NO";
    else cout<<"YEs";
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t; 
    while(t--) solve();

    return 0;
}   

"//inorder traversal of binary tree?"




