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
        int n, k; cin>>n>>k;
        int lo= 1, hi= n;
        for(int i=1; i<=n; i++){
            if(i&1) cout<<hi--;
            else cout<<lo++;
        }
        cout<<endl;
    }
    

    return 0;
}