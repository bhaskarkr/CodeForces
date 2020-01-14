#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='A'){
                i++;
                int k=0;
                while( i<s.length() && s[i]=='P'){
                    k++;
                    i++;
                }
                if(k>ans){
                    ans=k;
                }
                i--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}