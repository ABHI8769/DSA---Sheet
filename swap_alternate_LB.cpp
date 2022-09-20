#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swap_alternate(int arr[], int size){
    for( int i=0; i<size; i+=2){
        if(arr[i+1]<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};
    swap_alternate(even,8);
    print_array(even,8);

    cout<<endl;
    
    swap_alternate(odd,5);
    print_array(odd,5);

    return 0;
}