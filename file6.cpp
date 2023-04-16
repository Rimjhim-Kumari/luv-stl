#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>&v){  //function me v copy nhi bnegi actual vector pass hoga. v vector ka refrence pass hua. 
    cout<< "size: " <<v.size()<< endl;
    for( int i=0; i<v.size(); ++i){
        cout<< v[i] << " ";
    }
    v.push_back(2);
    cout<<endl;
}
int main(){
    vector<int> v; // 5 size ka vactor bna sbme 4 store hai
    v.push_back(7);
     v.push_back(6);
     //vector v2 v ka copy bna
     vector<int> &v2 = v;  //o(n) one by one copy kr rha.
     v2.push_back(5);
    printVec(v);
    printVec(v); //same copy bn rha so koi effect nhi hua.
    printVec(v2);
}