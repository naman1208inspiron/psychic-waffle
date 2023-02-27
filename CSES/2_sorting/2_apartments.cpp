#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define endl '\n'
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define all(x) x.begin(),x.end()
#define sz size()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t=1;
    while(t--){
        int n,m,k, cnt=0; cin>>n>>m>>k;
        vi a(n); vi f(m);
        for(auto &x : a) cin>>x;
        for(auto &x : f) cin>>x;

        sort(all(a));
        sort(all(f));
        for(int i=0, j=0; i<n && j<m;){
            if(abs(a[i] - f[j]) <= k) i++, j++, cnt++;
            else if(a[i] > f[j]+k) j++;
            else i++;
        }
        cout<<cnt;

    }
    

    return 0;
}