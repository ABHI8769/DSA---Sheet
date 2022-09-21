#include <bits/stdc++.h>
using namespace std;

//Brute Force approach 
//TC - O(n^2)
//SC - O(1)

bool if_Sum_zero(int arr[], int n){
    int f=0;
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=0;j<n;j++){
            sum += arr[j];
            if(sum == 0){
                f=1;
                break;
            }
        }
        if(f==1){
        break;
        }
    }
    if(f==1){
        return true;
    }
    else{
        return false;
    }    
}

//Optimal aprroach
//TC - O(n)
//SC - O(n)

bool subArrayExists(int a[], int n)
    {
        a[n+1];
        int f=0;
        int s=0;
        unordered_map <int,int> m;
        for(int i=0;i<n;i++){
            s=s+a[i];
            if(s==0 or m[s] or a[i]==0){
                f=1;
                break;
            }
            else{
                m[s] = 1;
            }
            
        }
        if(f==1){
            return true;
        }
        else{
            return false;
        }
    }
