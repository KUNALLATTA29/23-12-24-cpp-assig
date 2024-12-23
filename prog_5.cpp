
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,3,1,6,4,9,12};
    
    vector<int> ans;
    int sum;
   for(int i=0;i<arr.size();i++){
       if(i%2==0){
           sum+=arr[i];
       }
   }
   ans.push_back(sum);
   
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}
