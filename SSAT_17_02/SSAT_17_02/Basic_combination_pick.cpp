///*n�� �� c���� ���� ������ ã�� �˰���*/
//#include <iostream>
//#include <vector>
//using namespace std;
//
/////��������
//int N, C;
//vector<int> picked; // �� �迭
//
/////0~N-1������ l�� ���� ����
//void pick(int l) {
//	int smallest = -1;
//	///����
//	if (l == 0) {
//		for (int i = 0; i < C; i++) {
//			cout << picked[i];
//		}
//		printf("\n");
//		return;
//	}
//	///smallest
//	if (picked.empty())
//		smallest = 0; // 0���� ���� �׻�
//	else {
//		smallest = picked.back()+1; // ���������� �湮�� ������ �׻� 1ŭ
//	}
//
//	// ���������� �湮�� ������ �׻� 1ū ��(���� �湮���� ���� �� �� ���� ���� ��) ���� �湮
//	for (int i =smallest; i < N; i++) { // ���� ���� ������ �� �湮
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