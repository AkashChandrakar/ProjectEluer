#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
ll n = 100;
int main() {

	ll diff = (3 * n * n - n - 2) * (n * (n + 1)) / 12;
	cout << diff << endl;
	return 0;
}
