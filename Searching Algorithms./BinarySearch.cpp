#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, a[N];

int binarySearch(int val) //complexity O(log(n))
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (val == a[mid])
			return mid;
		if (val > a[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}

/*
---------
int binarySearch_Upperbound(int val) //complexity O(log(n))
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		//if (val == a[mid])
		//	return mid;
		if (val >= a[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return l;
}
---------
int binarySearch_Lowerbound(int val) //complexity O(log(n))
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		//if (val == a[mid])
		//	return mid;
		if (val > a[mid])
			l = mid + 1;
		else
			r = mid - 1;
	}
	return l;
}

*/

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a,a+n); 
	int v;
	while(cin>> v)
	{
		cout << binarySearch(v)<<'\n';
	}
	return 0;
}
