#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    int a[n];
    cin>>n;
    int i=0;
    for( i; i<n; i++){
        cin>>a[i];
    }
    int l=0;
    int r=n-1;

    if(a[l]<0 && a[r]>0){
       l++;
       r--;
    }
    else if(a[l]>0 && a[r]<0){
        swap(a[l],a[r]);
        l++;
        r--;
    }
    else if(a[l]>0 && a[r]<0){
        swap(a[l],a[r]);
        l++;
        r--;
    }
    else{
        r--;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}