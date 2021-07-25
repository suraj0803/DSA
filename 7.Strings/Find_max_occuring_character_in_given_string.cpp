#include<iostream>
#include<cstring>
#define COUNT 256

using namespace std;

// Sort it and check maximum count

int getMaxOccuringChar(char *str)
{
    int temp[COUNT] = {0};// temp array to store count
    int len = strlen(str), max = -1, index;
    char result;
    for(index=0; index<len; index++)
        temp[str[index]]++;
    for(index=0; index<len; index++)//scan the entire array and check the maximum count.
    {
        if(max<temp[str[index]]){
            max=temp[str[index]];
            result = str[index];
        }
        return result;
    }
}

int main()
{
    char str[] = "ravindrababu ravula";
    cout<<"Maximum Counting error : "<<getMaxOccuringChar(str);

    return 0;
}