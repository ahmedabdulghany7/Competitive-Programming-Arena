#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int arr[N], k;
int cnt = 0;

int F_3n1(int n) {
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 1 + F_3n1(n / 2);
    return 1 + F_3n1(3 * n + 1);
}

/*
//Ans 2
int F_3n1(int n, int cnt = 0) {
    if (n == 1)
        return cnt + 1;
    if (n % 2 == 0)
        return F_3n1(n / 2, cnt + 1);
    return F_3n1(3 * n + 1, cnt + 1);
}
*/
int main() {
    //cout << F_3n1(24, 0)<<endl;
    cout << F_3n1(24);
    return 0;
}
