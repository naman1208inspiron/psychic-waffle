#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin>>s;
    int maxi= 1, curr=1;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            curr++;
            maxi= max(maxi, curr);
        } 
        else {
            curr=1;
        }
    }
    cout<<maxi<<endl;

    return 0;
}