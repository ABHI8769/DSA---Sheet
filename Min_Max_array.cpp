#include <bits/stdc++.h>
using namespace std;

int min_max_array(int n , int a[]){
    //arr[N] = [1,2,3,4]
    int max , min;
    if(n==1){
        max = a[0];
        min = a[1];
    }
    else{
        if(a[0]>a[1]){
            max = a[0];
            min  = a[1];
        }
        else{
            max = a[1];
            min  = a[0];
        }
        for(int i = 2; i<n; i++){
            if(a[i]>max){
                max = a[i];
            }
            if(a[i]<min){
                min = a[i];
            }
        }
    }
    int sum = min+max;

    return sum;
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    min_max_array(n,a);

    return 0;
}