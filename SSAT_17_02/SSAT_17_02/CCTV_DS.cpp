#include <iostream>
#include <vector>
#include <algorithm> //next permutation

using namespace std;
int MAX = -1;
vector<int> visit, kk;
int solution(vector<int> &A, int K, int L) {
	// write your code in C++14 (g++ 6.2.0)
	for (int i = 0; i < A.size(); i++) {
		visit.push_back(0);
	}
	int sA = 0;
	int sB = 0;
	if (K + L > A.size()) {
		return -1;
	}
	for (int i = 0; i <= A.size() - K; i++) {
		for (int j = 0; j < K; j++) {
			sA += A[i];
			visit[i] = 1;
		}
		for (int l = 0; l <= A.size() - L; l++) {
			if (visit[l] != 1) {
				for (int x = 0; x < L; x++) {
					if (visit[l] != 1) {
						kk.push_back(A[l++]);
					}
				}

			}
		}
	}
}

int main() {
	vector<int> A = { 6, 1, 4, 6, 3, 2, 7, 4 };
	///������ ��� �������ϱ�
	///������ �ݵ�� ������������ ����� �� ���� ���������� ���� ��� ����� ���� ������ ���� �����ؾ���
	cout << solution(A, 3, 2);
	return 0;
}