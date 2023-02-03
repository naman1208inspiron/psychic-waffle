#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    string s; cin>>s;
    int sf=0, fs= 0;
    for(int i=0; i<n-1; i++){
        if(s[i]=='S' && s[i+1]== 'F') sf++;
        else if(s[i]=='F' && s[i+1]=='S') fs ++;
    }
    cout<<sf>fs<<endl;

    return 0;
}