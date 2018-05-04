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
//	while (n > 2) {//n�� 2���� �Ǹ� ����
//		kill = survivors.erase(kill); // erase�� �ش���Ҹ� �����, ���� ��带 ��ȯ�Ѵ�
//		if (kill == survivors.end()) //list�� ��������� ������ nullPtr�̸�
//			kill = survivors.begin();
//		n--;
//		for (int i = 0; i < k - 1; i++) {//���ŵǼ� k���� �ƴ� k-1�� �Ű������ϹǷ� cf. k�� ��û ũ�ٸ� (k-1)%n�ϴ� ���� ����
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
