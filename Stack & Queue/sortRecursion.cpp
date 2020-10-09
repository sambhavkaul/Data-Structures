#include <bits/stdc++.h>
using namespace std;

void Insert(stack<int> &s, int temp)
{
    if (s.empty() || s.top() <= temp)
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    Insert(s, temp);
    s.push(val);
}

void Sort(stack<int> &s)
{
    if (s.size() == 1)
    {
        return;
    }
    int temp = s.top();
    s.pop();
    Sort(s);
    Insert(s, temp);
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(8);
    Sort(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}