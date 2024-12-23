
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[7] = {2,3,1,6,4,9,12};
    int ans[7];
    int size = sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0;i<size;i++){
        int k = arr[i]*10;
        ans[i] = k;
    }
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}
