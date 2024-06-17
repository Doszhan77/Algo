#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int a[x];
    deque <int> d;
    for( int i = 0; i < x; i++ )
    {
        cin >> a[i];
    }

    for( int i = 0; i < x; i++ )
    {
        d.push_back(a[i]);
    }
    
    for(int i = 0; i < d.size(); i++ )
    {
        cout << d[i] << " ";
    }

    cout << endl;
    int n;
    int m;
    cin >> n >> m;
    int b, c;

    for( int i = 0; i < m; i++ )
    {
        b = d.back();
        b++;
        d.push_back(b);
    }
    
    for( int i = 0; i < n; i++ )
    {
        c = d.front();
        c--;
        d.push_front(c);
    }

    for( int i = 0; i < d.size(); i++ )
    {
        cout << d[i] << " ";
    }
    
}