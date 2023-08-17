#include <bits/stdc++.h>
using namespace std;

 
int main()
{
        int n;
        cin>>n;
        int k;
        cin>>k;
        int add;
        int ans;
    
        int a[n];
        for (int i=0; i<n; i++){
            cin>>a[i];
        }

        for (int i=0; i<k; i++){
            add= a[i];
        }
        add=ans;

        for (int i=1; i<n; i++){
            ans =add - a[i-1]+a[i+k-1];
            ans= min(add,ans);
        }
        cout<<ans<<endl;


 
    return 0;
}