#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
const int sz = 1000000;
bool primes[sz];

int sieve(int n) {
	fill(primes, primes + sz, 1);
	for (int i = 2; i * i < sz; ++i) {
		if (primes[i]) {
			for (int j = i * i; j < sz; j += i) {
				primes[j] = 0;
			}
		}
	}
	for (int i = 2; i < sz; ++i) {
		if (primes[i])
			--n;
		if (n == 0)
			return i;
	}
	return 0;
}
int main() {
	cout << sieve(10001);
	return 0;
}
