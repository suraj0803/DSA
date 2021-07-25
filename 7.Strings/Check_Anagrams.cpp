#include<iostream>
#include<cstring>
#define TOTAL_CHARS 256

using namespace std;

int isAnagram(char *str1, char *str2){
    // Created two hash tables 
    int count1[TOTAL_CHARS] = {0};
    int count2[TOTAL_CHARS] = {0};

    int index;

    if(strlen(str1)!=strlen(str2))
       return -1;
    
    for(index=0; str1[index]; index++){
        count1[str1[index]]++;
        count2[str2[index]]++;
    }
    for(index=0; index<TOTAL_CHARS; index++){
        if(count1[index] != count2[index])
           return -1;
    }
    return 0;
}

int main()
{
	char str1[] = "parse";
	char str2[] = "prase";
	if( isAnagram(str1, str2))
		cout<<"The two strings are anagram of each other";
	else
		cout<<"The two strings are not anagram of each other";
	return 0;
}

