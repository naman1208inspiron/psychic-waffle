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
    unordered_map<char, int> mp;
    for(char it: s){
        mp[it]++;
    }
    int ones= min({mp['o'], mp['n'], mp['e']});
    mp['o']-= ones; mp['n']-= ones; mp['e']-= ones;
    int zeros= min({mp['z'], mp['e'], mp['r'], mp['o']});
    cout<<ones<<" "<<zeros<<endl;
    string ans="";
    while(ones--) cout<<"1 ";
    while(zeros--)cout<<"0 ";
    cout<<endl;
    
    return 0;
}