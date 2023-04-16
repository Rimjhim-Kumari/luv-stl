//v.begin se 1st element of the vector point hoga.
//v.end se vector ke next to the last positin point krga (next to last)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v = {1,2,3,4,5};
    for(int i=0; i< v.size(); i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;
    // cout<<endl;
    // vector<int> :: iterator it = v.begin();
    // for(it = v.begin(); it!= v.end(); ++it){
    //     cout<<(*it)<<endl;
    // }
    vector<pair<int,int>> v_p = { {1,2}, {2,3}, {3,4}};
    vector<pair<int,int> > :: iterator it ;
    for(it = v_p.begin(); it!= v_p.end(); ++it){
        cout<< (*it).first << " " << (*it).second << endl; //*it ek pair hai uska first ya uska second
    }
    // it ek iterator hai jo ki pair ko point kr rha.
    //pair ka iteractor ho gya so normal int wale ke sath kaam nhi kerga

}
// it++  next iterator pe move krta hai. //maps and set me use krenge since they are not in continuous location and vectors are of continuous nature.
// it + 1 next locaation pe move krta hai.