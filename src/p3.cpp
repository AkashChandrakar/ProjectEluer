#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
ll prime = 600851475143;

bool isprime(int n) {
	int sq = sqrt(n);
	for (int i = 2; i <= sq; ++i) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main() {
	int sq = sqrt(prime);
	while (sq >= 2) {
		if (prime % sq == 0) {
			if (isprime(sq)) {
				cout << sq << endl;
				break;
			}
		}
		--sq;
	}
	return 0;
}
