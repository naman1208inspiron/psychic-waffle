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
        int n; cin>>n; 
        vi v(n); 
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(all(v));
        int cnt = 1;
        for(int i=0; i<n-1; i++){
            if(v[i] != v[i+1]) cnt++;
        }
        cout<<cnt;
    }
    

    return 0;
}