#include<iostream>
#include<cstring>
#include "hashtable.h"

using namespace std;

int main()
{
    Hashtable<int> price_menu;

    price_menu.insert("Burger",120);
    price_menu.insert("Pepsi",35);
    price_menu.insert("Noodles",90);
    price_menu.insert("Maggi",70);
    price_menu.insert("Momos",100);

    price_menu.print();

    int *price = price_menu.search("Noodles");
    if(price==NULL){
        cout<<"Not found";
    }
    else{
        cout<<"Price is "<<*price<<endl;
    }

    return 0;
}