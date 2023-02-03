#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(x&1) oddcnt++; else evencnt++;
            if(i&1 != x&1) wrong++;

        }
        if(oddcnt != (n/2) || evencnt!= (n+1)/2) cout<<-1;
        else cout<<wrong/2;
    }
    

    return 0;
}