#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int size = 10000;
int arr[size];
using namespace std;
int main() {
    FAST
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int max_val=INT_MIN, max_rep=INT_MIN;
    for (int i = 0; i < n; ++i) {
        int repeat = 0;
        for (int j = 0; j < n; ++j) {
            repeat+=arr[i]==arr[j];
        }
        if(max_rep<repeat)
            max_rep= repeat,max_val=arr[i];
    }
    cout<<max_val <<" repeated "<<max_rep <<" times";
    return 0;
}
