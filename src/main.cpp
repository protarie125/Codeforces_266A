#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	string stones;
	cin >> stones;

	auto now = vector<char>{ stones[0] };
	auto last = stones[0];

	for (int i = 1; i < n; ++i) {
		if (last != stones[i]) {
			now.push_back(stones[i]);
			last = stones[i];
		}
	}

	cout << n - now.size();

	return 0;
}