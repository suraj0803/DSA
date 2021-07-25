#include<iostream>
#include<string>

using namespace std;

int main()
{
    // String Initialization
    string s0;
    string s1("Hello");
    string s2 = "Hello world!";

    // Copy Constructor
    string s3(s2); // string s3 is same as Hello world!
    string s4 = s2;


    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;

    if(s0.empty()){
        cout<<"s0 is empty sring."<<endl;
    }

    // Apppend 
    s0.append("I am good at C++.");
    cout<<s0<<endl;

    s0 += "and python.";
    cout<<s0<<endl;

    // Remove 
    cout<<s0.length()<<endl;//28
    s0.clear();
    cout<<s0.length()<<endl;//0

    // Compare the strings.
    s0 = "Apple";
    s1 = "Mang0";
    cout<<s0.compare(s1)<<endl;// returns an integer ==0 equal, >0, <0

    // Overloaded operator
    if(s1 > s0){
        cout<<"Mango is lexiographically greater than apple."<<endl;
    }

    cout<<s1[0]<<endl;

    // We can find substrings.
   string s = "I want to have apple juice.";
    int idx = s.find("apple");
    cout<<idx<<endl;

    // Remove a word from a string.
    string word = "apple";
    int len = word.length();
    cout<<s<<endl;
    s.erase(idx,len);
    cout<<s<<endl;

    // Iterate over all the characters in the strings.
    for(int i=0; i<s.length(); i++){
        cout<<s[i]<<":";
    }
    cout<<endl;

    // Iterators
    for(auto it = s1.begin(); it != s1.end(); it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    // Each for loop
    for(auto c:s1){
        cout<<c<<",";
    }

    return 0;
}