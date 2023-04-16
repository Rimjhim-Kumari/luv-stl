#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v = {1,2,3,4,5};
    for(int i=0; i< v.size(); i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;

    //range based loop isme value copy ho rhi actual value use krne ke liye refrence ka use krenge
    for(int &value: v){ //index use nhi krna prega access krne ke liye directly access kr skte/ value directly vector me aajayegi
        // cout<<value << " ";
        value++;
    }
     for(int value: v){
         cout<<value<< " "; //no change in value due to  value ++ since it is copy 
     }
    cout<<endl;
}