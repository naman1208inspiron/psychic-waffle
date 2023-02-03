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
        int n, d;
        cin>>n>>d;
        vector<int> v[n];
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int ans= 2; 
        for(int i=1; i<n; i++){
            if(v[i]-v[i-1] == d) ans++;
            else if(v[i]- v[i-1] > d) ans+= 2;
        }
        cout<<ans;
    }
    

    return 0;
}