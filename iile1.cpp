// map and unordered map have same functions
// 1) inbuilt implementation
// 2) time complexity
// 3) valid keys datatype
#include<bits/stdc++.h>
using namespace std;
void print (unordered_map<int, string> &m){
    cout<<m.size() << endl;
    for(auto &pr:m){
        cout<< pr.first << " " << pr.second << endl;
    }
}
int main(){
    unordered_map <int, string> m;
    m[1] = "abc"; //value inserting time compexity : O(1) n access time complexity is alse O(1)
    m[5] = "cdc";
    m[3]= "acd";
    m[6] = "a";
    m[2] = "cde";
   auto it = m.find(7);  //O(1)
   if(it != m.end())
   m.erase(it);  //log(1)
   m.clear();
   print(m);
}

//in unordered map we can insert pair
// unordered_map<pair<int,int>, string>m;
// vector compare kr skte, set , pair , unordered_map me keys ki trh use nhi kr skte
// jaha v comparison possible hai jaise vector1 < vector 2 insb ko map me key ki trh use kr skte.
// this will give you error
// map<pair<int,int>, string>m;
