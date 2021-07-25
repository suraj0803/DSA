#include<iostream>
#include<cstring>

using namespace std;
// 1.reverse the individual words
//2. Reverse the whole string.

void reverse(char *left, char *right){
    char temp;
    while(left<right){
        temp = *left;
        *left++ = *right;
        *right-- = temp;
    }
}

void reverseWords(char *str)
{
    char *WordBegin, *temp;
    WordBegin = '\0';
    temp = str;
    //reverse the individual words
    while(*temp){
        if((WordBegin==NULL)&&(*temp!=' '))
           WordBegin=temp;
        if(WordBegin && ((*(temp+1) == ' ') || (*(temp + 1) == NULL))){
            reverse(WordBegin,temp);
            WordBegin = NULL;
        }
        temp++;
    }
    // reverse the whole string from start to end
    reverse(str,temp-1);
}

int main()
{
	char str[100];
	cout<<"Enter string : ";
	cin>>str;
	reverseWords(str);
	cout<<str;
	return 0;
}