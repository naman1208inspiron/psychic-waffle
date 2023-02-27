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
 
bool search(vii & v, int x){
    int lo = 0, hi = v.size()-1;
    while(lo <= hi){
        int m = lo + (hi - lo)/2;
        if(v[m].F== x){
            if(v[m].S == 1) continue;
            v[m].S = 1;
            return true;
        }
        else if(v[m].F > x) hi = m -1;
        else lo = m+1;
 
    }
    return false;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int t=1;
    while(t--){
        int n,m,k, cnt=0; cin>>n>>m>>k;
        vii apartment(n); vi free(m);
        for(int i=0; i<n; i++){
            cin>>apartment[i].F;
            apartment[i].S = 0;
        }
        for(int i=0; i<m; i++){
            cin>>free[i];
        }
        sort(all(apartment));
        for(auto it: apartment) cout<<it.F<<" ";
        cout<<endl;
        for(int it: free){
            if(search(apartment, it) || search(apartment, it-k) || search(apartment, it+k)){
                cnt++;
            }
        }
        cout<<cnt;
 
    }
    
 
    return 0;
}