#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

bool isOne(vector<int> &v, int i, int maxi){
    while(i < maxi){
        if(v[i]==1 && v[i+1]== 0) return false;
        i++;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m, s; cin>>m>>s;
        vector<int> v(51, 0);
        int maxi= 0;
        for(int i=0;i<m; i++){
            int x; cin>>x;
            maxi= max(maxi, x);
            v[x]= 1;
        }
        for(int i=1; i<=50; i++){
            if(v[i] == 0){
                s-= i;
                v[i]=1 ;
                if(s==0){
                    if(isOne(v, i, maxi)) cout<<"YES";
                    else cout<<"NO";
                    break;
                }
                else if(s < 0){
                    cout<<"NO";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}