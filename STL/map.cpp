#include <bits/stdc++.h>

using namespace std;

int main(){

    //Declaring the map  --> map<key_type , value_type> map_name;
    map<int, string> m1;

   
     
    //Inserting the elements to the map
    m1[1] = "Hello";    //Insert key = 1 with value = "Hello"
    m1[2] = 'World';    //Insert key = 2 with value = "World"
    m1[3] = "!";        //Insert key = 3 with value = "!"
 
    //creates a map map2 which have entries copied from map1.begin() to map1.end()
    map<char,int> m2 (m1.begin(), m1.end());

 
    //Find the element at some index i.
    cout << m2.at(1) ;  // prints value associated with key 1 ,i.e Hello
    cout << m1.at(2) ;  // prints value associated with key 2 ,i.e World
    cout << m1[3] ; // prints value associated with key 3 , i.e ashish
    
    //Returns boolean true is map is empty else it returns boolean false
    m1.empty();
    
    //Returns number of elements in the map
    m1.size();

    //Removes the element from the map pointed by the iterator
    m1.erase(1);

    //Removes all the elements from the map
    m1.clear();

    return 0;

}