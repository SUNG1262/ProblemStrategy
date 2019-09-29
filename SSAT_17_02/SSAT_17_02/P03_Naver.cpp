//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//int solution(vector< vector<int> > &A) {
//	// write your code in C++14 (g++ 6.2.0)
//	int r[32] = { 0 };
//	int c[32] = { 0 };
//	int res=0;
//	vector<int> lr, lc;
//	for (int i = 0; i < A.size(); i++) {
//		int sum = 0;
//		for (int j = 0; j < A[i].size(); j++) {
//			sum += A[i][j];
//		}
//		r[i + 1] = sum;
//	}
//	for (int i = 0; i < A[1].size(); i++) {
//		int sum = 0;
//		for (int j = 0; j < A.size(); j++) {
//			sum += A[j][i];
//		}
//		c[i + 1] = sum;
//	}
//	
//	int s1 = 0, s2 =0;
//	for (int i = 1; i <= A.size(); i++) {
//		s1 = s2 = 0;
//		for (int x = 0; x < i; x++) { //i이하
//			s1 += r[x];
//		}
//		for (int x = i+1; x <= A.size(); x++) { //i이하
//			s2 += r[x];
//		}
//		if (s1 == s2) {
//			lr.push_back(i);
//		}
//	}
//
//	for (int i = 1; i <= A[1].size(); i++) {
//		s1 = s2 = 0;
//		for (int x = 0; x < i; x++) { //i이하
//			s1 += c[x];
//		}
//		for (int x = i + 1; x <= A[1].size(); x++) { //i이하
//			s2 += c[x];
//		}
//		if (s1 == s2) {
//			lc.push_back(i);
//		}
//	}
//
//	if (lr.size() != 0 || lc.size() != 0)
//		return lr.size()*lc.size();
//	else
//		return 0;
//}
//
//
//int main() {
//	vector< vector<int> > A;
//	for (int j = 0; j < 5; j++) {
//		vector<int> elem;
//		elem.resize(3); // 메모리할당 후에는 board[j][k]와 같이 직접 데이터 입력 및 접근이 가능하다
//		for (int k = 0; k < 3; k++) {
//			elem.push_back(0);
//		}
//		A.push_back(elem);
//		elem.clear();//배열초기화
//	}
//	A[0][0] = 2;    A[0][1] = 7;    A[0][2] = 5;
//	A[1][0] = 3;    A[1][1] = 1;    A[1][2] = 1;
//	A[2][0] = 2;    A[2][1] = 1;   A[2][2] = -7;
//	A[3][0] = 0;   A[3][1] = 2;   A[3][2] = 1;
//	A[4][0] = 1;   A[4][1] = 6;   A[4][2] = 8;
//	solution(A);
//}