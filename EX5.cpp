#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k) {
    int n = a.size();
    k = k % n;

    vector<int> output;
    for (int i = n - k; i < n; i++) {
        output.push_back(a[i]);
    }
    
    // N-K DENOTES THE 1ST ELEMENT AFTER ROTATIONS
    // BASICALLY THE ARRAY IS DIVIDED INTO TWO PARTS
    // THE NUMBER OF ROTATIONS SUPPOSE 3 MAKES LAST 3 ELEMENTS A GROUP AND REMAINING THE OTHER GROUP

    for (int i = 0; i < n - k; i++) {
        output.push_back(a[i]);
    }

    return output;
}

/*Other option is to use reverse function

reverse(a.begin(),a.begin+n-k);
reverse(a.begin()+n-k,a.end());
reverse(a.begin(),a.end());
return a;

*/