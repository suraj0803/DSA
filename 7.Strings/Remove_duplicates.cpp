#include<iostream>
#include<cstring>
#include<functional>
#include<algorithm>
#define count 256

using namespace std;

char *Remove_duplicates(char *str){
    int hash[count] = {0};
    int index;
    int curr_index = 0, final_index=0;

    char temp;

    while(str[curr_index]){// scan till null
        if(hash[temp]==0){
            hash[temp] = 1;
            str[final_index++] = str[curr_index];
        }
        curr_index++;
    }
    str[final_index] = NULL;
    return str;
}

int main()
{
    char str[] = "abbbaaacfg";

    cout<<Remove_duplicates(str);

    return 0;
}