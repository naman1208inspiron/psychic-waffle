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
        int n; cin>>n;
        string s; cin>>s;
        int ans= 0;
        set<char>st,ss;
        int i;
       for(i=0; i<n; ){
    
           if(st.find(s[i]) == st.end()){
            st.insert(s[i]);
            i++;
           }
           else break;
       }
       for(i;i<n; i++) ss.insert(s[i]);
       cout<<st.size() + ss.size()<<endl;

    }
    

    return 0;
}