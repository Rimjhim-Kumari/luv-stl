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
    // int a[10];
    // vector<int>v; size=0
    vector<int>v;
    int n;
    cin>>n; //no of vector we want to enter from user. //no of element in the vector.
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVec(v);
    v.pop_back();
    printVec(v);
}
//  The capacity of a vector is the total number of elements it can hold. 