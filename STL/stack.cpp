#include <bits/stdc++.h>

using namespace std;

int main(){
    //Declares the empty stack.
    stack <int> s;

    //Inserts elements in the stack
    s.push(1);      // pushes 1 in the stack  , now top =1
    s.push(2);      // pushes 2 in the stack  , now top =2
    s.push(3);      // pushes 3 in the stack  , now top =3
    s.push(4);      // pushes 4 in the stack  , now top =4

    //Return the number of elements present in the stack
    s.size();
    
    //Outputs the top element of the stack i.e. 4
    s.top();

    //Removes the element from the top
    s.pop();
}