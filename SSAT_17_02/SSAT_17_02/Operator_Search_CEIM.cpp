//////https://www.acmicpc.net/problem/14888
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N;
//int A[12] = { -1, };
//int PMXS[5] = { -1, };
//int MAX = -1000000000;
//int MIN = 1000000000;
//void dfs(int res, int index) {
//	int init = res;
//	if (index == N + 1) {
//		MAX = max(MAX, res);
//		MIN = min(MIN, res);
//		return;
//	}
//	for (int i = 1; i <= 4; i++) {
//		res = init;
//		if (PMXS[i] > 0) {
//			switch (i)
//			{
//			case 1:
//				res = res + A[index];
//				break;
//			case 2:
//				res = res - A[index];
//				break;
//			case 3:
//				res = res * A[index];
//				break;
//			case 4:
//				res = res / A[index];
//				break;
//			default:
//				break;
//			}
//			PMXS[i]--;
//			dfs(res, index + 1);
//			PMXS[i]++;
//		}
//	}
//}
//int main() {
//	freopen("Operator_Search.txt", "r", stdin);
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> A[i];
//	}
//	for (int i = 1; i <= 4; i++) {
//		cin >> PMXS[i];
//	}
//	if (N > 1) {
//		dfs(A[1], 2);
//	}
//	else {
//		MIN = A[1];
//		MAX = A[1];
//	}
//	cout << MAX << endl;
//	cout << MIN << endl;
//	MAX = -1000000000;
//	MIN = 1000000000;
//	return 0;
//}
//
//
//
///*
////연산자들을 다 조합해버리면 중복이 발생하기 때문에 visted를 써줘야한다.
//#include <stdio.h>
//
//
//int Digit[12] = { 0, };
//int Cal[11] = { 0, };
//int Visit[11] = { 0, };
//int PMSD[4] = { 0, };
//int M;
//int N;
//int Min;
//int Max;
//
//void Init();
//void dfs(int Cnt, int x, int y);
//
//int main()
//{
//	int TC;
//
//	scanf("%d", &TC);
//	for (int i = 1; i <= TC; i++)
//	{
//		Init();
//		dfs(0, Digit[0], 1);
//		printf("#%d %d\n", i, Max - Min);
//	}
//
//	return 0;
//}
//
//void Init()
//{
//	int Cnt = 0;
//	scanf("%d", &M);
//	N = M - 1;
//	for (int j = 0; j < 4; j++)
//		scanf("%d", &PMSD[j]);
//	for (int j = 0; j < M; j++)
//		scanf("%d", &Digit[j]);
//
//	for (int i = 0; i < N; i++) {
//		if (PMSD[Cnt] > 0) {
//			Cal[i] = Cnt + 1;
//			PMSD[Cnt]--;
//		}
//		else {
//			while (PMSD[Cnt] == 0)
//				Cnt++;
//			Cal[i] = Cnt + 1;
//			PMSD[Cnt]--;
//		}
//	}
//	Min = 100000001;
//	Max = -100000001;
//}
//
//void dfs(int Cnt, int x, int y)
//{
//	int Temp, Tmp;
//	Tmp = 0;
//	for (int i = 0; i < N; i++) {
//		if (Visit[i] == 1)
//			continue;
//		Visit[i] = 1;
//
//		if (Cal[i] == 1)
//			Temp = x + Digit[y];
//		else if (Cal[i] == 2)
//			Temp = x - Digit[y];
//		else if (Cal[i] == 3)
//			Temp = x * Digit[y];
//		else if (Cal[i] == 4)
//			Temp = x / Digit[y];
//
//		/* 제거시 시간초과 */
//		if (Tmp == Cal[i]) {
//			Visit[i] = 0;
//			continue;
//		}
//		else
//			Tmp = Cal[i];
//		/* 제거시 시간초과 */
//
//		if (Cnt + 1 == N) {
//			if (Temp > Max)
//				Max = Temp;
//			if (Temp < Min)
//				Min = Temp;
//		}
//		else
//			dfs(Cnt + 1, Temp, y + 1);
//
//		Visit[i] = 0;
//	}
//	return;
//}
//*/