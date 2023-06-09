#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    
    for(int x:A){
        if(Val<x){
            Val = -1;
        }
        else if(Val==x){
            Val = x;
        }
        else{
            int largest = max(Val,x);
            Val = largest;
        }
    
    }
}
