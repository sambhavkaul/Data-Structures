#include<bits/stdc++.h>

using namespace std;

int main(){
    //Declaring the list l.
    //Also known as Doubly Linked List.
    list<int> l;
    
    //Inserting elements to list l.
    l.push_back(1);
    l.push_back(2);

    l.push_front(3);
    l.push_front(4);

    //Size of the list l.
    cout << l.size();
    
    //Remove the element from the last and first.
    l.pop_back();
    l.pop_front();

    //Remove all the elements from the list.
    l.clear();

}