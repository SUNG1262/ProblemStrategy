////https://www.acmicpc.net/problem/14889
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
/////전역
//int N; // 4~20
//int power[21][21] = { 0 };
//vector<int> picked;
//int MIN = 100; // 최대차이
//
//int score(vector<int>& p) {
//	int sum1 = 0;
//	int sum2 = 0;
//	vector<int> unpicked;
//	bool used[21] = { false };
//
//	for (int x = 0; x < (N / 2); x++) {
//		used[p[x]] = true;
//	}
//	for (int i = 1; i <= N; i++) {
//		if (!used[i])
//			unpicked.push_back(i);
//	}
//	
//	for (int x = 0; x < (N / 2); x++) {
//		for (int y = 0; y < (N / 2); y++) {
//			sum1 += power[p[x]][p[y]];
//			sum2 += power[unpicked[x]][unpicked[y]];
//		}
//	}
//	if (sum1 > sum2)
//		sum1 = sum1 - sum2;
//	else
//		sum1 = sum2 - sum1;
//	return sum1;
//}
//
//void pick(int l) {
//	int smallest = -1;
//	if (l == 0) {
//		MIN = min(MIN, score(picked));
//		return;
//	}
//	if (picked.empty()) {
//		smallest = 1;
//	}
//	else {
//		smallest = picked.back() + 1;
//	}
//	
//	for (int i = smallest; i <= N; i++) {
//		picked.push_back(i);
//		pick(l - 1);
//		picked.pop_back();
//	}
//	return;
//}
//int main() {
//	freopen("StartLink.txt", "r", stdin);
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			scanf("%d", &power[i][j]);
//		}
//	}
//	///중복제거 최적화
//	picked.push_back(1);
//	pick(N / 2- 1);
//	//pick(N / 2);
//	//printf("%d", MIN);
//	return 0;
//}