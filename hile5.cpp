#include<bits/stdc++.h>
using namespace std;
int main()
{
    // auto a= 1; // a ka value automatically 1 assume krega. automaticaally ye dynamically a ka data type assume kr leta hai.
    // cout << a<<endl;
    // // a ka 
vector <int>v = {1,2,3,4,5};
    for(int i=0; i< v.size(); i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    // vector<int> :: iterator it = v.begin(); we can remove this statement and (auto it) will automatically assume data type of vector.
    //ye apne aap dekh lega vector.int ka iterator hai
    for(auto it = v.begin(); it!= v.end(); ++it){
        cout<<(*it)<<endl;
    }


}