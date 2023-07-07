#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    FAST
    int arr[200];
    int freq[200+1] {0};  //length = MaxVal+1 because of index and set all to zeros
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int max_pos=INT_MIN;
    for (int i = 0; i < 201; ++i) //iterate on All array
    {
        if (max_pos<freq[i])
            max_pos = i;
    }
    cout<<max_pos <<" repeated "<<freq[max_pos] <<" times";
    return 0;
}
