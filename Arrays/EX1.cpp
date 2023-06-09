#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    
    int largest = arr[0];
    
    for(int x:arr){
        if(x>largest){
            largest=x;
        }
    }
    return largest;
     
}


