#include <bits/stdc++.h>
using namespace std;

int kth_min(int a[], int n, int k){

    priority_queue<int , vector<int> , greater<int>> p;

    for(int i=0; i<n; i++){
        p.push(a[i]);
    }

    int ans , i=1;

    while(!p.empty()){
        if(i==k){
            ans = p.top();
            break;
        }
        i++;
        p.pop();
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    

    for(int i =0; i<n; i++ ){
        cin>>a[i];
    }

    int k;
    cin>>k;

    kth_min(a,n,k);

    return 0;
}