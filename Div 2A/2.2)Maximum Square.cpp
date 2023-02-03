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
        int n; cin>>n; 
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        int ans= INT_MIN;
        for(int i=0; i<n; i++){
            int temp= min(a[i], n-i);
            ans = max(ans, temp);
        }
        cout<<ans<<endl;
    }
    

    return 0;
}