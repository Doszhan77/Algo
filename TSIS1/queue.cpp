#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int a[x];
    queue<int> q;
    
    for( int i = 0; i < x; i++ )
    {
        cin >> a[i];
    }

    for( int i = 0; i < x; i++ )
    {
        q.push(a[i]);
    }

    for( int i = 0; i < x; i++ )
    {
        cout << q.front() << " " ;
        q.pop();
    }

    cout << endl;
    
    if(q.empty())
    {
        cout << "Q is empty";
    }
}