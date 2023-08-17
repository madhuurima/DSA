//max no of elements in arithmatic subarrays
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

int prevDiff= a[1]-a[0];
int current = 2;
int j=2;
int ans=2;

while (j<n){
    if (prevDiff== a[j]-a[j-1]){
        current++;
    }

    else{
        prevDiff= a[j]-a[j-1];
        current = 2;
    }

    ans= max(ans, current);

    j++;


}

    cout<< ans<<endl;

       /* int j=n-1;
        int differ[j];

        for (int j=0; j<n-1; j++){
                differ[j]= a[j+1]-a[j];
        }

        for (int j=0; j<n-1; j++){
                if (differ[j]==differ[j+1]){
                    count++;
                }
                    if (maxcount<count){
                        maxcount=count;
                    }

                }



               for (int j=0; j<n-1; j++){
                cout<<differ[j]<<" ";
                
        }
        cout<<endl;


        cout<<maxcount;


*/
    
    

    return 0;
}