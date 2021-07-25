#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

void print(std::pair<int,int> &obj){
    cout<<obj.first<<" "<<obj.second<<endl;
}

int main()
{
    pair<int,int> ob(10,20);
    print(ob);

    return 0;

}