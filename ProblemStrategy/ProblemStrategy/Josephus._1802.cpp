////https://algospot.com/judge/problem/read/JOSEPHUS
//#include <iostream>
//#include <list>
//using namespace std;
//
//void nTHkill(int n, int k) {
//	list<int> survivors;
//	for (int i = 1; i <= n; i++) {
//		survivors.push_back(i);
//	}
//	list<int>::iterator kill = survivors.begin();
//	while (n > 2) {//n이 2명이 되면 종료
//		kill = survivors.erase(kill); // erase는 해당원소를 지우고, 다음 노드를 반환한다
//		if (kill == survivors.end()) //list의 마지막노드 다음인 nullPtr이면
//			kill = survivors.begin();
//		n--;
//		for (int i = 0; i < k - 1; i++) {//제거되서 k번이 아닌 k-1번 옮겨져야하므로 cf. k가 엄청 크다면 (k-1)%n하는 것이 좋음
//			kill++;
//			if(kill==survivors.end())
//				kill = survivors.begin();
//		}
//	}
//	cout << survivors.front() << " " << survivors.back() << endl;
//}
//int main() {
//	int TC, N, K;
//	freopen("Josephus_1802.txt", "r", stdin);
//	cin >> TC;
//	for(int i=0; i<TC; i++){
//	cin >> N >> K;;
//	nTHkill(N, K);
//	}
//	return 0;
//}
//
