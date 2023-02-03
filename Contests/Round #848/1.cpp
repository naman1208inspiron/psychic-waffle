#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t, sum=0; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i= 0; i<n; i++){
            cin>>v[i];
            sum+= v[i];
        }
        vector<int> consSum;
        for(int i=0; i<n-1; i++){
            consSum.push_back(v[i]+ v[i+1]);
        }
        sort(consSum.begin(), consSum.end());
        sum -= (consSum[0]*2);
        cout<<sum<<endl;
    }
    

    return 0;
}