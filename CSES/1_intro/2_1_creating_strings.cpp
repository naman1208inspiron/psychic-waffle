#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define endl '\n'
#define pb push_back
#define F first
#define S second
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define all(x) x.begin(),x.end()
#define sz size()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t=1;
    while(t--){
        string s; cin>>s;
        vc<string>v;
        sort(all(s));
        do
        {
            v.push_back(s);
        } while (next_permutation(all(s)));

        cout<<v.size()<<endl;
        for(auto it: v) cout<<it<<endl;
    }
    

    return 0;
}