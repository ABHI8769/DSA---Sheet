#include <bits/stdc++.h>
using namespace std;

//HASH MAP Approach (HMA)
//Time complexity :- O(n1+n2+n3)
//Space complexity :- O(n1+n2+n3)
/*
int comman_of_three_HMA(int a[], int b[], int c[], int n1, int n2, int n3){

    unordered_map<int ,int> m1, m2, m3;
    for(int i=0; i<n1; i++) m1[a[i]]++;
    for(int i=0; i<n2; i++) m2[a[i]]++;
    for(int i=0; i<n3; i++) m3[a[i]]++;

    vector <int> v;
    for(int i=0; i<n1; i++){
        if(m1[a[i]] and m2[a[i]] and m3[a[i]]){
            v.push_back(a[i]);
            m1[a[i]]=0;
        }
    }
}
*/

//Optimized Approach
//Time complexity :- O(n1+n2+n3)
//Space complexity :- O(1)

class Solution
{
    public:    
       public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            
            vector<int> result;
            
            while(i<n1 && j<n2 && k<n3){
            if(a[i]==b[j] && b[j]==c[k]){
                    result.push_back(a[i]);
                    i++;
                    j++;k++;
                }
                else if(a[i]<b[j])
                    i++;
                
                else if(b[j]<c[k]) 
                j++;
                else 
                k++;
                
                int xx=a[i-1]; 
                while(a[i]==xx) 
                i++;
                
                int yy=b[j-1];
                while(b[j]==yy) 
                j++;
                
                int zz=c[k-1];
                while(c[k]==zz) 
                k++;
            }
            if(result.size()==0) 
            return {-1};
            else{
                return result;
            }
        }
};

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1 , n2, n3;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        int a[n1];
        int b[n2];
        int c[n3];
            for(int i=0; i<n1;i++){
                cin>>a[i];
            }
            for(int j=0; j<n2;j++){
                cin>>b[j];
            }
            for(int k=0; k<n3;k++){
                cin>>c[k];
            }

            Solution ob;

            vector<int> res = ob.commonElements (a,b,c,n1,n2,n3);
            if(res.size() == 0){
                cout<<-1;
            }
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
    }

    
}