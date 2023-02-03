#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

bool valid(vector<int>& v){
    
    for(int i=0; i<v.size()-1; i++){
        if(v[i] > v[i+1]) return false;
    }
    return true;
}

void solve(){
    int n, k; 
    cin>>n>>k;
    vector<int> v(n), psum(k);
    for(int i=0; i<k; i++){
        cin>>psum[i];
    }
    int ind= n-k+1;
    int first;
    for(int i=1; i<k && ind< n; i++){
        v[ind]= psum[i]-psum[i-1];
        cout<<v[ind]<<endl;
        if(i==1) first= v[ind];
        ind++;
    }
    for(int i=1; i<n-k+1; i++){
        v[i]= first;
    }
    v[0]= psum[0]-((n-k)*first);
    
    if(valid(v)) cout<<"yes";
    else cout<<"no";
    cout<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin>>t;
    while(t--) solve();

    return 0;
}