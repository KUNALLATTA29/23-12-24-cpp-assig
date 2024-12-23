
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,5,4,9,3,5,4,7};
    vector<float> ans;
    int size = arr.size();
    

    for(int i=0;i<size;i++){
        ans.push_back(arr[i]%5);
    }
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}
