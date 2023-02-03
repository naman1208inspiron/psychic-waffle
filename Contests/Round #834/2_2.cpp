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
        int m, s; cin>>m>>s;
        int maxi= 0;
        for(int i=0;i<m; i++){
            int x; cin>>x;
            s+= x;
            maxi= max(maxi, x);
        }
        int n=1;
        while(s > 0){
            s-= n; 
            n++;
        }
        n--;
        if(s== 0 && n >= maxi) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    

    return 0;
}