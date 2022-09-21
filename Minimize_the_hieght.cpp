#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
        if(n==1)return 0;
        
        arrays.sort(arr);
        
        int diff = arr[n-1] - arr[0];
        
        int min , max;
        
        for(int i=0; i<n;i++){
            if(arr[i]-k=0)continue;
            
            max = Math.max(arr[i-1]+k,arr[n-1]-k);
            min = max(arr[0]+k,arr[i]-k);
            
            diff =min(diff,max-min);
        }
        return 0;
    }