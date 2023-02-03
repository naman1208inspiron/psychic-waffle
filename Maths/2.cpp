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
        int l,r; cin>>l>>r;
        int x, y= r;
        while(y >= l){
            for(int i=1; i<y; i++){
                if(y%i ==0 && i!=y && l<=i<=r){
                    cout<<i<<" "<<y;
                    return 0;
                }
            }
            y--;
        }
    }
    

    return 0;
}