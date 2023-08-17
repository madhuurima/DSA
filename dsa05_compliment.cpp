#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int decimal_binary(int n){
    int ans=0;
    for (int i=0; n>0; i++){
    ans+= pow(2,i) * (!(n%2));
    n=n/2;
}

    return ans;
}

int main(){
unsigned int n;
cin>>n;
cout<<decimal_binary(n);
return 0;
}