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
        int n,v ; cin>>n>>v;
        int totalfuel =0, currfuel = 0, price= 0;
        for(int i=1; i<=n; i++){
            currfuel = min(v-totalfuel, n-i-totalfuel);
            price += currfuel/i;
            if(currfuel + i ==n) break;
            totalfuel+= currfuel;
            totalfuel--;
        }
        cout<<price<<endl;
    }
    

    return 0;
}