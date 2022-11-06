#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m, k;
	cin >> n >> m >> k;

	const auto& move = k - 3;
	auto next = m + move;
	next %= n;
	if (next < 0) {
		next += n;
	}
	if (0 == next) {
		next = n;
	}

	cout << next;

	return 0;
}