#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
    int n , count=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i = 0 ; i < n ; i++) {
        if(s[i] == s[i+1]) {
            count++;
        }
    }

    cout<<count;
    
    return 0;
}