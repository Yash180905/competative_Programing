#include <bits/stdc++.h>
using namespace std;
signed main() 
{
    int t, n;
long long int k;

cin >> t;

while(t)
{
cin >> n >> k;

while(n%10 > 0 && k)
{
n ^= n%10;
k--;
}

cout << n << endl;

t--;
}

return 0;
}