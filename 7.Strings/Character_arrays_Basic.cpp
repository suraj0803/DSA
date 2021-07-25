#include<iostream>

using namespace std;

int main()
{
    char arr[] = {'a','b','c','\0'};
    cout<<arr<<endl;

    //Input 
    //char s[10];
    //cin>>s;
    //cout<<s;

    // One more method
    char s1[] = {'h','e','l','l','o'};// doesn't terminate with null.
    char s2[] = "hello";

    cout << s1 <<" "<<sizeof(s1)<<endl;
    cout<< s2 << " "<<sizeof(s2)<<endl;

    return 0;
}