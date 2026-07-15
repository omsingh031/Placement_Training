#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    
    getline(cin,s);
    int size=s.size();
    string ans="";
    for (int i=0;i<size;i++){
        
        if (s[i]!=' '){
            ans=ans+s[i];
        }

    }
    cout<<ans;

}