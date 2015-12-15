#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
bool isplain(int c) {
	stringstream ss;
	ss << c;
	string s = ss.str();
	int i, j;
	i = 0;
	j = s.length() - 1;
	while (i < j) {
		if (s[i] != s[j])
			return 0;
		++i;
		--j;
	}
	return 1;
}

int main() {
	int i, j;
	//i = j = 999;
	for (i=999; i >= 100; --i) {
		for (j=999; j >= 100; --j) {
			int c = i * j;
			if (isplain(c)) {
				v.push_back(c);
			}
		}
	}
	sort(v.rbegin(), v.rend());
	cout << v[0] << endl;
	return 0;
}
