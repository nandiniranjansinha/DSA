#include<iostream>
using namespace std;

int Largest_sum_subarray(int arr[], int n){
    int largest_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int subarray_sum = 0;
            for(int k=i;k<=j;k++){
                subarray_sum += arr[k];
            }
            cout<<endl;
        
        largest_sum = max(largest_sum,subarray_sum);
    }
    }
    return largest_sum;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(n);
    cout<< Largest_sum_subarray(arr,n);
    return 0;
}