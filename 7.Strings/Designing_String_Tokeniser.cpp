#include<iostream>
#include<cstring>

using namespace std;

char *mystrtok(char *str, char delim)
{
    // String nad single char act as delimiter.
    static char *input = NULL;
    if(str != NULL){
        // we are making the first call
        input = str;
    }

    // Check here base case after the final token has been extracted.
    if(input==NULL){
        return NULL;
    }

    // start extracting tokens and store them in a different array.
    char *output = new char[strlen(input+1)];

    int i=0;
    for(;input[i]!='\0'; i++){
        if(input[i]!=delim){
            output[i] = input[i];
        }
        else{
            output[i] = '\0';
            input = input + i + 1;
            return output;

        }
    }
        // Corner case. Let say after last word there would be no space.
        output[i] = '\0';
        input = NULL;
        return output;
}

int main(){

    char s[100] = "Today is a rainy day.";

    char *ptr = mystrtok(s, ' ');
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }

    return 0;
}