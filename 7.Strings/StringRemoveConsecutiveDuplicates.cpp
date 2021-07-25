#include<iostream>
#include<cstring>

using namespace std;

// Removes consecuting duplicates from the string.
// ccoooding ---> coding.

void RemoveDuplicates(char a[])
{
    int l = strlen(a);
    if(l ==1 || l==0){
        return;
    }

    int prev = 0;
    for(int current = 0; current<l; current++)
    {
        if(a[current] != a[prev]){
            prev++;
            a[prev] = a[current];
        }
    }
    a[prev+1] = '\0';
    return;
}

int main()
{
    char a[1000];
    cin.getline(a,1000);
    RemoveDuplicates(a);
    cout<<a<<endl;


    return 0;
}