
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,3,1,6,4,9,12};
    
    vector<int> ans;
    ans.push_back(arr[0]);
    
   for(int i=1;i<arr.size();i++){
       int a = arr[i]+(arr[i-1]*arr[i-1]);
       int k = a*a;
       ans.push_back(k);
   }
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}
