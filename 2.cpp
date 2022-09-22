#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

char get(int n){
    return 'a'+ n -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int i= n; string res="";
        while(i--){
            string num=""; char c;
            if(s[i]=='0'){
                i-=2;
                num+= s.substr(i, 2);
                // num+= s[i];
                // num+= s[i+1];
                // num= num+ s[i]+ s[i+1];
                // num+= (s[i]+s[i+1]);
                c= get(stoi(num));
                
                res= c+res;     
            }
            else{
                num = s[i];
                c= get(num - '0');
                // c= get(stoi(num));
                res= c+ res;
            }
            // cout<<c<<" ";
            // cout<<res<<" ";
            // i--;
        }
        cout<<res<<endl;
    }

    return 0;
}