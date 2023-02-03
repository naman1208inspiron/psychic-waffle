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
        int n; cin>>n; 
        cout<<pow(n, 2) + pow(n-1, 2)<<endl;
    }
    

    return 0;
}