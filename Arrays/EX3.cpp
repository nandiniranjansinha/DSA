#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    // Applying Binary Search to find the lower bound
    int s = 0; 
    int e = A.size() - 1;
    int ans = -1;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(A[mid]<=Val){
            ans = A[mid];
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
