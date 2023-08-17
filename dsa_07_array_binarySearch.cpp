//Binary search
//it requires that the element are sorted or not then check from inbetween
/*Binary search can be used as a building block for more complex algorithms used in machine learning, such as algorithms for training neural networks or finding the optimal hyperparameters for a model.
It can be used for searching in computer graphics such as algorithms for ray tracing or texture mapping.
It can be used for searching a database.
time complexity= O(log n base 2)*/
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
int start=0;
int end=n;
while (start<=end){
    int mid=(start+end)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        end=mid-1;
    }
    else if (arr[mid]<key) {
        start=mid+1;

    }

}
return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<binarySearch(arr, n, key)<<endl;
    return 0;
}