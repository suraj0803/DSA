#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    unordered_map<string,int> m; // ordering of element is changed. the elements are not in sorted order.

        // Insert
    m.insert(make_pair("Mango",100));
    // Another way to insert
    pair<string,int> p;
    p.first = "Apple";
    p.second = 120;
    m.insert(p);

    // another way
    m["Banana"] = 20;

    // 2. Search for an element
    string fruit;
    cin>>fruit;

    // update price 
    m[fruit] += 20;

    auto it = m.find(fruit);
    if(it!=m.end()){
        cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<<"Fruit is no present.";
    }
    //3. erase
    m.erase(fruit);

    // Another way to find a particular map
    // it stores unique keys only once.
    if(m.count(fruit)){// 1 means present and 0 means not present
       cout<<"Price is : "<<m[fruit]<<endl;
    }
    else{
        cout<<"Could not find a fruit.";
    }

    m["litchi"] = 200;
    m["Papaya"] = 60;

    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<","<<it->second<<endl;
    }

    // for each loop
    for(auto p:m){
        cout<<p.first<<":"<<p.second<<endl;
    }
}
