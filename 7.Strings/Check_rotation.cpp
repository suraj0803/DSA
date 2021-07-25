#include<iostream>
#include<cstring>

using namespace std;

// Program to check whether given strings are rotation to each other with concatenation.

int checkRotations(char *str1, char *str2)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char *temp;
    void *ptr;

    if(len1 != len2)
       return 0;
    
    temp = (char *)malloc(sizeof(char)*(len1*2+1));
    temp[0] = '\0';

    strcat(temp,str1);
    strcat(temp,str2);
    ptr = strstr(temp,str2);
    free(temp);
    return ptr?1:0;
}

int main()
{
	char str1[100], str2[100];
	cout<<"Enter string1 : ";
	cin>>str1;
	cout<<"Enter string2 : ";
	cin>>str2;
	if (checkRotations(str1, str2))
		cout<<"Strings are rotations of each other.";
	else
		cout<<"Strings are not rotations to each other";
	return 0;
}