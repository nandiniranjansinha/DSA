#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x) {
    int n = arr.size();
    int s = 0; // starting point of the array
    int e = n - 1; // end point of the array
    int diff = INT_MAX;
    int LeftIndex = 0;
    int RightIndex = 0;

    while (s < e) {
        int cs = arr[s] + arr[e]; // cs means current sum

        if (abs(cs - x) < diff) {
            LeftIndex = s;
            RightIndex = e;
            diff = abs(cs - x);
        }

        if (cs > x) {
            e--;
        } else {
            s++;
        }
    }
    return { arr[LeftIndex], arr[RightIndex] };
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5 };
    int x = 7;

    pair<int, int> result = closestSum(arr, x);
    cout << "Closest pair: " << result.first << " " << result.second << endl;

    return 0;
}
