//#include <iostream>
//#include <vector>
//#include <algorithm> //next permutation
//
//using namespace std;
//
//int MAX = -1;
//int solution(int A, int B, int C, int D) {
//	// write your code in C++14 (g++ 6.2.0)
//	int res = 0;
//	vector<int> vi;
//	int arr[5] = { -1,A,B,C,D };
//	vi.push_back(1); vi.push_back(2); vi.push_back(3); vi.push_back(4);
//
//	int aX = arr[vi[0]];
//	int bX = arr[vi[2]];
//	int aY = arr[vi[1]];
//	int bY = arr[vi[3]];
//
//	int sq1, sq2;
//	if (aX > bX) {
//		sq1 = aX - bX;
//		sq1 *= sq1;
//	}
//	else {
//		sq1 = bX - aX;
//		sq1 *= sq1;
//	}
//	if (aY > bY) {
//		sq2 = aY - bY;
//		sq2 *= sq2;
//	}
//	else {
//		sq2 = bY - aY;
//		sq2 *= sq2;
//	}
//	MAX = max(sq1 + sq2, MAX);
//
//	///���� ������ ������ ���������� 
//	while (next_permutation(vi.begin(), vi.end())) {
//		aX = arr[vi[0]];
//		bX = arr[vi[2]];
//		aY = arr[vi[1]];
//		bY = arr[vi[3]];
//		
//		int sq1, sq2;
//		if (aX > bX) {
//			sq1 = aX - bX;
//			sq1 *= sq1;
//		}
//		else {
//			sq1 = bX - aX;
//			sq1 *= sq1;
//		}
//		if (aY > bY) {
//			sq2 = aY - bY;
//			sq2 *= sq2;
//		}
//		else {
//			sq2 = bY - aY;
//			sq2 *= sq2;
//		}
//		MAX = max(sq1 + sq2, MAX);
//
//	}
//	return MAX;
//}
//
//
//int main() {
//	///������ ��� �������ϱ�
//	///������ �ݵ�� ������������ ����� �� ���� ���������� ���� ��� ����� ���� ������ ���� �����ؾ���
//	cout << solution(1, 1, 2, 3);
//}