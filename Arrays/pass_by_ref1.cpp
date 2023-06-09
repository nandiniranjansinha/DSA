#include<iostream>
using namespace std;

void printArray(int arr[]){
    cout<<"IN FUNCTION "<<sizeof(arr)<<endl; // 4 (ptr size is 4 it can be 8 as well)
 
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);  // 24/4

    cout<<"IN MAIN "<<sizeof(arr)<<endl;
    printArray(arr);
    return 0;
}
