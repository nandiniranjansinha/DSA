#include<iostream>
using namespace std;

void printPairs(int arr[],int n){
    for(int i=0;i<n;i++){
        int x = arr[i];
        for(int j=i+1;j<n;j++){
            int y = arr[j];
           /* if(x==y){
                continue;
            }*/
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int n =sizeof(arr)/sizeof(int);
    
    printPairs(arr,n);
}