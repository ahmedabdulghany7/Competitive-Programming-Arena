#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int j;
    long long arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> j;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == j)
        {    cout << i;
        return 0;
    }
    }
    cout << -1;
    return 0;
}
