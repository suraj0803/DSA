// Find non repeating character in a running stream of characters.
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<char> q;
    int freq[27] = {0};

    // running stream until a '.' occurs
    char ch;
    while(ch != '.'){
        // logic will go here
        // insert in the queue and f table
        q.push(ch);
        freq[ch - 'a']++;

        //query
        while(!q.empty()){
            int idx = q.front() - 'a';// 'a'-'a' = 0 , 'b'-'a' = 1, 'c'-'a' = 2
            if(freq[idx]>1){
                q.pop();
            }
            else{
                cout<<q.front()<<endl;
                break;
            }

        }
        // q is empty
        if(q.empty()){
            cout<<"-1"<<endl;
        }
        cin>>ch;
    }

    return 0;
}