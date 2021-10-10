#include<bits/stdc++.h>

using namespace std;

int main(){
    //Declaring the vector V.
    vector<int> v;
    
    //Inserting elements to vector V.
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //Size of the vector V.
    cout << v.size();
    
    //Find the element at some index i.
    v.at(2); // Trying to find the element at index 2.

    //Remeove the element from the last.
    v.pop_back();

    //Remove all the elements from the vector.
    v.clear();

}