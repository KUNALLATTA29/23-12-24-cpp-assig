
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,3,1,6,4,9,12};
    
    vector<int> ans;
    
   for(int i=0;i<arr.size();i++){
       int k = arr[i]-i;
       ans.push_back(k);
   }
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}
