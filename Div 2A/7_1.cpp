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
        int a,b,n; cin>>a>>b>>n;
        if(n%3==0) cout<<a;
        else if(n%3==1) cout<<b;
        else cout<<a^b;
        cout<<endl;
    }
    

    return 0;
}