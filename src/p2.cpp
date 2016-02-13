#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int fourmillion = 4000000;
int main() {
	int f1 = 1, f2 = 1, f3 = 0;
	int sum = 0;
	while (f3 < fourmillion) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		if (f3 % 2 == 0)
			sum += f3;
	}
	cout << sum << endl;
	return 0;
}
