#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    cout<<"IN FUNCTION "<<sizeof(arr)<<endl;
    arr[0] = 100;
    // here size of array is the size of address

    // pointer variable is the address and size of pointer var is 4 bytes

    // so 4/4 gives 1

    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr, n);
    cout<<"IN MAIN "<<sizeof(arr)<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    
    // int value is 4
    // pointer value is 4
    return 0;
}