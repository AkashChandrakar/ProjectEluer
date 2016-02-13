#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main() {
	ll currnum = 1;
	ll product;
	for (int i = 2; i < 21; ++i) {
		product = currnum * i;
		currnum = product / gcd(currnum, i);
	}
	cout << currnum << endl;
	return 0;
}
