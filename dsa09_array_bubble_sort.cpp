//BUBBLE SORT : checks the next no. consecutively and place them in correct position
//sorting is done from the, last element getting at right position
//no. of total iteration is n-1 and the swapping is done by (n-counter-1), at each step the no of values being 
//compared is reduced by 1 and comparision is reduced by 2. TIME COMPLEXITY= O(n^2), Best case O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int counter=1;
    while (counter<(n-1)){
        for (int i=0; i<(n-(counter-1)); i++){
            
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
        counter++;
    }

    
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}