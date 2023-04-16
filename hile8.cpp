#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, string>m;
    m["yebra"] = "abc";
    m["apple"] = "cdc";
    m["zeb"] = "acd";
    m.insert({"sonal", "afg"});
    // map<string, string> :: iterator it;
    for(auto pr: m) {//for auto pair in map.// pr variable 
    // cout<<(it->first) <<" "<<(*it).second <<endl;// there is no need of pairing iterators in map we can directly use 
     cout << pr.first << " " <<pr.second <<endl;
}
}