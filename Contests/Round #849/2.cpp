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
        bool found = false;
        int n; cin>>n; 
        string s; cin>>s;
        int x= 0, y=0;
        for(char it: s){
            if(it =='U'){ y+=1;}
            else if(it =='R') x+=1;
            else if(it =='L') x-=1; dffffffffff dfsdf dsf d
            else if(it =='D') y-=1;

            if(x==1 && y==1){
                found = true;
                break;
            }
        }
        if(found) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    

    return 0;
}

if(v[krr[i]].size() == 0 && (((1<<krr[i])&l1) == 0)) b = 0;