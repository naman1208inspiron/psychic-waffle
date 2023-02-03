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
        int n; cin>>n; 
        if(n==3) cout<<"NO";
        else if(n&1){
            int x= n/2;
            for(int i=1; i<=x; i++){
                cout<<x-1<<" "<<"-"<<x<<" "';
            }
            cout<<x-1;
        }
        else{
            cout<<"YES";
            for(int i=1; i<=n/2; i++){
                cout<<2<<" "<<-2<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}