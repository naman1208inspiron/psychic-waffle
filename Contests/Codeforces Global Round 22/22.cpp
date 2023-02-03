#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

char to_lower(char c){
    if(c>='A' && c<='Z'){
        c+= 'a'-'A';
    }
    return c;
}

string firstOcc(string s){
    string ans= "", word="";
    int start= 0, firstIndex= 0;
    unordered_map<string , int>mp;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' ' && word.size()>0){
            if(mp.count(word)){
                firstIndex = mp[word];
                break;
            }
            mp[word] = start;
            start = i+1;
            word = "";
        }
        else word+= to_lower(s[i]);
    }
    while(s[firstIndex]!=' '){
        ans+= s[firstIndex];
        firstIndex++;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s= "PayPal is a good company and Paypal is a finance company";
    cout<<firstOcc(s);

    

    return 0;
}