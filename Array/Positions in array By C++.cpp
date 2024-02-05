#include <iostream>
using namespace std;
int main() {
    int x[1000];
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> x[i];
        if (x[i] <= 10)
        {
            cout << "A" << "[" << i << "]" << " = " << x[i] << endl;
        }
    }
    return 0;
}
