#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,j =0;
    cin >> n;
    long long num[(int)10e5 + 2];
    for (int i = 0;i < n;i++)
    {
        cin >> num[i];
    }
    int min = num[0];
    for (int i = 1;i < n;i++)
    {
        if (min > num[i])
        {
            min = num[i];
            j = i;
        }
    }
    cout << min << " " << j+1;
    return 0;
}
