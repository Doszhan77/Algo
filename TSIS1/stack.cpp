#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int a[x];
    stack<int> s;
    for( int i = 0; i < x; i++ )
    {
        cin >> a[i];
    }

    for( int i = 0; i < x; i++ )
    {
        s.push(a[i]);
    }

    for( int i = 0; i < x; i++ )
    {
        cout << s.top() << " " ;
        s.pop();
    }
}