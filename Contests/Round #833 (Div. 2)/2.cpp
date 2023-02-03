#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

bool isDiverse(string s){
    unordered_map<char,int> mp;
    for(auto it: s) mp[it]++;
    for(auto it: mp){
        if(it.second > mp.size()) return false;
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
        int n; cin>>n;
        string s; cin>>n;
        int count= 0;
        for(int i=0; i<n; i++){
            string temp= "";
            for(int j=i; j<n; j++){
                temp+=s[j];
                if(isDiverse(temp)) count ++;
            }
        }
        cout<<count<<endl;
    }
    

    return 0;
}