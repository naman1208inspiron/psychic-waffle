#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t= 1;
    // cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        int ans =0;
        if(v[2] - v[1] < d) ans+= v[1] + d - v[2];
        if(v[1]- v[0] < d) ans+= v[0] - v[1] + d ;
        cout<<ans;
    }
    

    return 0;
}