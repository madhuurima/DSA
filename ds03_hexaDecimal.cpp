#include <bits/stdc++.h>
#include<iostream>
using namespace std;

/*int Hexadecimal(string hexnum){
    int base =1;
    int len= hexnum.size();
    int decimal=0;
    for (int i = len-1; i>=0; i--){
    
    if (hexnum[i]>='0' && hexnum[i]<='9'){
        decimal+= base*(hexnum[i]-'0');
    }
    else if (hexnum[i]>='A' && hexnum[i]<='F'){
        decimal+= base*(hexnum[i]-'A'+10);
    }

    base *= 16;
    }

    return decimal;
}*/

void decimalTOBinary(int n){
    int binarray[30];
    int i=0;
    while(n>0){
        binarray[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        cout<<binarray[j];
    }

}



int main()
{
    int n;
    cin>>n;
    decimalTOBinary(n);
    /*string hexnum;
    cin>>hexnum;
    cout<<Hexadecimal(hexnum)<<endl;*/
    return 0;
}