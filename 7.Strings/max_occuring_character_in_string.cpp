#include<iostream>
#include<cstring>
#include<functional>
#include<algorithm>
#define count 256

using namespace std;

char maximun_occuring_char(char *str){
    int temp[count] = {0};
    int len = strlen(str);
    int i, max = -1;
    char result;
    
    for(int index = 0; index<len; index++)
        temp[str[index]]++;
    
    for(int index=0; index<len; index++){
        if(max<temp[str[index]]){
            max = temp[str[index]];
            result = str[index];
        }
    }
    return result;
}

int main(){
    char str[] = "RAVINDRABABU";

    cout<<maximun_occuring_char(str);

    return 0;
}