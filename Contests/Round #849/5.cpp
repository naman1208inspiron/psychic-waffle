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
        int n, sum = 0 , ans; cin>>n;
        bool neg = false;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum += v[i];
            if(v[i] < 0) neg= true;
        }
        if(!neg) ans= sum;
        vector<int> consSum;
        for(int i=0; i<n-1; i++){
            consSum.push_back(v[i]+ v[i+1]);
        }


    }
    

    return 0;
}