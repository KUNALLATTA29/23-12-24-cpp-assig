#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,3,1,6,4,9,12};
    
    map<int,bool>maps;
    
    for(auto it:arr){
        if(it%3==0){
            maps[it]=true;
        }else{
            maps[it]=false;
        }
    }
    cout << boolalpha;
    for(auto it:maps){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    return 0;
}
