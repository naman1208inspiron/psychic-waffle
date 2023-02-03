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
        int n,m; cin>>n>>m;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        int cnt=0;
        int ptr1= m, ptr2= m+1;
        int s1=0, s2=0;
        while(ptr1 >0){
            s1+= v[ptr1];
            if(s1 > 0) {
                s1-=v[ptr1];
                v[ptr1] = -v[ptr1]; cnt++;
                s1+= v[ptr1];
            }
            ptr1--;
        }
        while(ptr2 <= n){
            s2+= v[ptr2];
            if(s2 < 0){
                s2-= v[ptr2];
                v[ptr2] = -v[ptr2]; cnt++;
                s2+= v[ptr2];
            }
            ptr2++;
        }
        cout<<cnt<<endl;
    }
    

    return 0;
}