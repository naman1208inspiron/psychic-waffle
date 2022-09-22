#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int i=0; i<n; i++){
            int b; cin>>b;
            for(int i=0; i<b; i++){
                int move= 0;
                char c; cin>>c; 
                if(c=='D')move++;
                else move--;
            }
            v[i]+= move;
            if(v[i]>= 10) v[i]%=10;
            else if(v[i]<0) v[i]+=10;
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}