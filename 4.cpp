#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        vector<string> v;
        for(int i=0; i<n; i++) cin>>v[i];
        vector<int> ans(n, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                for(int k=0; k<n; k++){
                    if(v[j]+v[k]== v[i]){
                        ans[i]=1;
                        break;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<ans[i];
        }
        cout<<endl;
    }

}