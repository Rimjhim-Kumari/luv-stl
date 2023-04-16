//time complexity of unordered map is less so when we don't want anything in ordered manner then we will use unordered map.
/*Given N strings and Q queries. IN each query you are given a string print frequency of that string
N <= 10^6
|S| <= 100
Q <= 10 ^ 6 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for(int i = 0; i<n; ++i){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        //string input lene ka time complexity q*s ho gya.
        cout<<m[s]<<endl; //o(1)
    }
    
}

void print (unordered_map<int, string> &m){
    cout<<m.size() << endl;
    for(auto &pr:m){
        cout<< pr.first << " " << pr.second << endl;
    }
}