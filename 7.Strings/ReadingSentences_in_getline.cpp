#include<iostream>

using namespace std;

// Read a paragraph or sentence.

// use a loop to read the characters till you get a new line.
void readLine(char a[], int maxLen, char delim = '\n')
{
    int i = 0;
    char ch = cin.get();
    while(ch != delim)
    {
        a[i] = ch;
        i++;
        if(i == maxLen-1){
            break;
        }
        ch = cin.get();
    }
    // Once out of the loop
    a[i] = '\0';
    return;

}

int main()
{
    char a[1000];
    //readLine(a,1000,'$');
    // C++ has a inbuilt function we can use instead of this readLine method.
    cin.getline(a,1000,'$');
    cout<<a<<endl;

    return 0;

}