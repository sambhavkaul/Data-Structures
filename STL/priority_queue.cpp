#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue <int> p1;
    
    //Inserting the elements in the Queue usually used to replicate Max Heap 
    //O(log(n)) time complexity for insertion
    p1.push(30);  // inserts 30 to pq1 , now top = 30
    p1.push(40);  // inserts 40 to pq1 , now top = 40 ( maximum element)
    p1.push(90);  // inserts 90 to pq1 , now top = 90  
    p1.push(60);  // inserts 60 to pq1 , top still is 90	
    
    //Removes the topmost element from the priority_queue
    p1.pop();

    //Returns the number of element present in the priority _queue
    p1.size();

    //Returns the Max element present in the Priority_Queue
    p1.top();

    //Returns Boolean true if the priority_queue is empty else Boolean false is returned
    p1.empty();

    
    return 0;
}