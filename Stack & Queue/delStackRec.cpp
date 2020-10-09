#include <bits/stdc++.h>
using namespace std;

void Delete(stack<int> &s, int pos)
{
    if (pos == 1)
    {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();
    Delete(s, pos - 1);
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(8);
    s.push(5);
    s.push(4);
    s.push(0);
    int mid = (s.size() / 2) + 1;
    Delete(s, mid);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}