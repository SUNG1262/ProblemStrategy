//https://algospot.com/judge/problem/read/JOSEPHUS
#include <iostream>
#include <queue>
using namespace std;

void nTHkill(int n,int k) {
	queue<int> j;
	int survival;
	for (int i = 1; i <= n; i++) {
		j.push(i);
	}
	while (j.size() > 2) {
		j.pop();
		for (int i = 0; i < k - 1; i++) {
			survival = j.front();
			j.pop();
			j.push(survival);
		}
	}
	cout << j.front() << " " << j.back() << endl;
}
int main() {
	int TC, N, K;
	freopen("Josephus.txt", "r", stdin);
	cin >> TC;
	for (int i = 0; i<TC; i++) {
		cin >> N >> K;;
		nTHkill(N, K);
	}
	return 0;
}