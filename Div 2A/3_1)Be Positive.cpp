#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        double n, pos= 0, neg= 0, cin>>n; 
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]> 0) pos++;
            else if(v[i] < 0) neg++;
        }
        if(pos >= ceil(n/2)) cout<<1<<endl;
        else if(neg >= ceil(n/2) cout<<-1<<endl;)

    }
    

    return 0;
}