// Problem- https://www.codechef.com/problems/ECAPR206
// Algo- Sliding Window

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        // combining array again to make it kind of circular
        int arr[n+n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            arr[i+n] = arr[i];
        }

        int maxSum = 0;
        int currSum = 0;
        for(int i=0; i<k; i++){
            currSum += arr[i];
        }
        maxSum = currSum;

        for(int j=k; j<n+n; j++){
            currSum += arr[j];
            currSum -= arr[j-k];

            maxSum = max(maxSum, currSum);
        }
        cout << maxSum << endl;
    }
}