
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[8] = {20,55,45,90,36,50,24,70};
    int ans[8];
    int size = sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0;i<size;i++){
        
        if(arr[i]>50){
            ans[i]=50;
        }else{
            ans[i]=arr[i];
        }
    }
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}
