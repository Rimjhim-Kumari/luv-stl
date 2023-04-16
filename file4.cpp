#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>v){
    cout<< "size: " <<v.size()<< endl;
    for( int i=0; i<v.size(); ++i){
        cout<< v[i] << " ";
    }
    cout<<endl;
}
int main(){
    vector<int> v(5,4); // 5 size ka vactor bna sbme 4 store hai
    v.push_back(7);
    printVec(v);
}