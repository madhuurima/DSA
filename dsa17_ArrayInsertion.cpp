#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a[10];
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];

    }

    int element;
    cout<<"Enter the element you want to enter: "<<endl;
    cin>>element;

    int pos;
    cout<<"\nEnter the position for the element "<<endl;
    cin>>pos;

    for (int i=n; i>=element; i--){
        a[i+1]=a[i];

    }

    a[pos]=element;

    for (int i=1; i<=n+1; i++){
        cout<<a[i]<<" ";

    }
    
    return 0;
}

