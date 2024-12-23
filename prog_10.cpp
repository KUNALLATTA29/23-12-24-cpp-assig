
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[8] = {2,5,4,9,3,5,4,7};
    int ans[8];
    int size = sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0;i<size;i++){
        
        if(i==size-1){
            ans[i]=arr[0]+arr[i];
        }else{
            ans[i]=arr[i]+arr[i+1];
        }
    }
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}
