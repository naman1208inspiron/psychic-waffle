#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m; unordered_set<int> st;
    cin>>n; vector<int> a(n);
    for(int i=0; i<n; i++) 
        cin>>a[i];
        st.insert(a[i]);
    cin>>m; vector<int>b(m);
    for(int i=0; i<m; i++) 
        cin>>b[i];
        st.insert(a[i]);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(st.find(a[i]+ b[j])== st.end()){
                cout<<a[i]<<" "<<b[j]<<endl;
                break;
            }
        }
    }

    return 0;
}