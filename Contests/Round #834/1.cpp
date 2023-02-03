#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

string find(string s, string base, int ps, int pbase){
    while(ps < s.size()){
        if(pbase == 6) pbase= 0;
        if(s[ps]== base[pbase]){
            ps++; pbase++;
        }
        else return "NO";
    }
    return "YES";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s; cin>>s;
        string base= "YesYes";
        if(s[0]=='Y') cout<<find(s, base, 0, 0);
        else if(s[0]=='e') cout<<find(s, base, 0, 1);
        else if(s[0]=='s') cout<<find(s, base, 0, 2);
        else cout<<"NO";
        cout<<endl;
    }
    

    return 0;
}