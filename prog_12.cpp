
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,5,4,9,3,5,4,7};
    int size = arr.size();
    

    for(int i=0;i<size;i++){
        arr[i]+=(i*i);
    }
   
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}
