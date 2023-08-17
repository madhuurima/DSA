//SELECTION SORT: find the minimum no. from unsorted array and swap it with element at begining
//doesnot work well with large datasets,  time complexity = O(n^2)
#include<iostream>
using namespace std;

int main(){
    int n;
     cin>>n;
     int arr[n];
     for (int i=0; i<n; i++){
        cin>>arr[i];
     }
    
    int minIndex, temp;
     

    for (int i = 0; i<n-1; i++){
        minIndex=i;
        for (int j=i+1; j<n; j++){
             if (arr[j] < arr[minIndex]){
             minIndex=j;

            }
        }
        temp= arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }

    for (int i=0; i<n; i++){
     cout<<arr[i]<<" ";
    }
    return 0;

}