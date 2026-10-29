#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m;

    m["Mobile"]=100;
    m["Laptop"]=50;
    m["Computer"]=20;
    m["Watch"]=75;

    m.insert({"Tablet",60});  //little slower
    m.emplace("Camera",30);  //little faster

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}