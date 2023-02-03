#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int findPos(int elem, vector<int>&a){
    int i = 0;
    while (i < a.size())
    {
        if (a[i] == elem) {
            return i+1;
        }
        i++;
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>>t;
    while(t--){
        int n, m, d; cin>>n>>m>>d;
        vector<int> p(n), a(m);
        for (int i = 0; i < n; i++) cin>>p[i];
        for (int i = 0; i < m; i++) cin>>a[i];
        
        int ans = INT_MAX;

        for(int i=0; i<m-1; i++){
            int posa= findPos(a[i], p), posaplus1= findPos(a[i+1], p);
            if(posa < posaplus1 && posaplus1 <= posa + d){
                int d1= INT_MAX, d2= INT_MAX, d3 = INT_MAX;

                if(posa + d < n)  d1 = abs(posa + d + 1 - posaplus1);
                if(posaplus1 - d - 1 >= 1) d2 = abs(posaplus1 - d - 1 - posa) ;
                if(n-1 >= d+1) d3= abs(d+1 - abs(posa - posaplus1));
                ans = min(ans, min({abs(posaplus1 - posa) , d1, d2, d3}));
            }
            
        }
        if(ans == INT_MAX) ans = 0;
        cout<<ans<<endl;
        
        
    }
    

    return 0;
}