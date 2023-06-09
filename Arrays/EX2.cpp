#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    
    //all negative integers
    bool allNeg = true;
    int largest = INT_MIN;
    
    for(int x : A){     // x in A
        if(x>0){
            allNeg = false;
        }
        largest = max(x,largest);
    }
    
    //Special Case
    if(allNeg){
        return largest;
    }
    
    int current_sum = 0;
    int ans = 0;
    for(int x:A){
        current_sum = current_sum+x;
        if(current_sum<0){
            current_sum=0;
        }
        ans = max(ans,current_sum);
    }
    return ans;
    
}
