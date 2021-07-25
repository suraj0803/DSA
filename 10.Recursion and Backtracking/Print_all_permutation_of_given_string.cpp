#include<iostream>
#include<cstring>

using namespace std;

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(char *str, int start, int end){
    int index;
    if(start==end)
       cout<<str<<endl;
    else{
        for(index=start; index<=end; index++)
        {   // we take two characters in a string and swap them
            swap(&str[start],&str[index]);
            //Take all the permuatation of remaining character.
            permutation(str,start+1,end);
            // Again we are going to set back the character in their place
            swap(&str[start],&str[index]);// Backtracking

        }
    }
}

int main()
{
    char str[] = "ABC";
    int n = sizeof(str)/sizeof(str[0]);
    permutation(str,0,n-1);

    return 0;

}