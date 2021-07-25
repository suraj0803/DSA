#include<iostream>
#include<cstring>
#define COUNT 256

using namespace std;

// Sort it and check maximum count

char *removeDuplicates(char *str)
{
    int hash[COUNT] = {0};
    int curr_index=0, findIndex=0;
    char temp;
    while(str[curr_index]){
        temp = str[curr_index];
        if(hash[temp]==0){
            hash[temp]=1;
            str[findIndex++] = str[curr_index];
        }
        curr_index++;
    }
    str[findIndex]='\0';
    return str;
}

int main()
{
    char str[] = "ravindrababu ravula";
    cout<<"After removal of duplicates the string is : "<<removeDuplicates(str);

    return 0;
}