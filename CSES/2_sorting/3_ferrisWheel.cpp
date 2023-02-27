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
        int n, x, cnt = 0; cin>>n>>x;
        vector<int> v(n);
        for(int &x : v) cin>>x;
        sort(all(v));
        int lo= 0, hi = v.sz -1;
        while(lo < hi){
            if(v[lo] + v[hi] <= x){ lo++; hi--;}
            else { hi--;}
            cnt++;
        }
        if(lo == hi) cnt++;
        cout<<cnt;
    }
    

    return 0;
}