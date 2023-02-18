#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t=1;
    while(t--){
        int n; cin>>n;
        int i=5, count = 0;
        while(n/i >= 1){
            count += n/i;
            i*=5;
        }
        cout<<count<<endl;
    }
    

    return 0;
}