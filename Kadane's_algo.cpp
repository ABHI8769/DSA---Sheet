#include <bits/stdc++.h>
using namespace std;

 long long maxSubarraySum(int a[], int n){
        int maxsum = INT_MIN;
        int currsum = 0;
        for(int i =0;i<n;i++){
            currsum = currsum + a[i];
            maxsum = max(maxsum,currsum);
            if(currsum <0){
                currsum = 0;
            }
        }
        return maxsum;
        
    }