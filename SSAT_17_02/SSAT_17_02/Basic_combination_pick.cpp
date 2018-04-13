///*n개 중 c개를 고르는 조합을 찾는 알고리즘*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
/////전역변수
//int N, C;
//vector<int> picked; // 고른 배열
//
/////0~N-1번까지 l개 뽑을 예정
//void pick(int l) {
//	int smallest = -1;
//	///기저
//	if (l == 0) {
//		for (int i = 0; i < C; i++) {
//			cout << picked[i];
//		}
//		printf("\n");
//		return;
//	}
//	///smallest
//	if (picked.empty())
//		smallest = 0; // 0부터 진행 항상
//	else {
//		smallest = picked.back()+1; // 마지막으로 방문한 수보다 항상 1큼
//	}
//
//	// 마지막으로 방문한 수보다 항상 1큰 수(현재 방문하지 않은 수 중 가장 작은 수) 부터 방문
//	for (int i =smallest; i < N; i++) { // 가장 작은 수부터 다 방문
//		picked.push_back(i);
//		pick(l - 1); // DFS
//		picked.pop_back();
//	}
//	
//}
//
//
//void printResult(vector<int>& p) {
//	vector<int>::iterator i;
//	for (i = p.begin(); i < p.end(); i++) {
//		cout << *i;
//	}
//}
//int main() {
//	cin >> N >> C;
//	pick(C);
//	picked.clear();
//	printf("\n");
//	picked.push_back(0);
//	pick(C - 1);
//	return 0;
//}