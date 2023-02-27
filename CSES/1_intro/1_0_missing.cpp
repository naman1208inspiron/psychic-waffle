#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n; cin>>n; 
    cout<<n<<" ";
    while(n!= 1){
        if(n%2==0) n/= 2;
        else{
            n*=3;
            n+=1;
        }
        cout<<n<<" ";
    }
    // cout<<1<<endl;

    return 0;
}