#include<iostream>
#include<cstring>
using namespace std;

// Read a sentence or paragraph and check whether it is a palindrome or not.
bool isPalindrome(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;
    while(i<j)
    {
        if(a[i] == a[j]){
            i++;
            j--;
        }
        else
            return false;
    }
    return true;

}
int main()
{
    char a[1000];
    cin.getline(a,1000);
    if(isPalindrome(a))
    {
        cout<<"Palindromic String.";
    }
    else
    {
        cout<<"Not a Palindromic String.";
    }
    return 0;
}
