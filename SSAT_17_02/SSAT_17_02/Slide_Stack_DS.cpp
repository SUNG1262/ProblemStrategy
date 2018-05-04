////https://www.acmicpc.net/problem/14890
//#include <iostream>
////#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, L;
//int board[100][100] = { 0, };
//int slide(vector<int>& arr) {
//	vector<int> s;
//	//인덱스
//	int i;
//	if (s.empty())
//		s.push_back(arr[0]);
//	for (i = 1; i < N; i++) {
//		if (arr[i-1]==arr[i]){
//			s.push_back(arr[i]);
//			continue;
//		}
//		if (arr[i - 1] + 1 == arr[i]) {//상승
//			if (s.size() < L)
//				return 0;
//			s.clear();//건설완료
//			s.push_back(arr[i]);
//		}
//		else if (arr[i - 1] - 1 == arr[i])//하강
//		{
//			s.clear(); //건설준비
//			s.push_back(arr[i]);
//			for (int j = i+1; j < i+L; j++) { //L-1번 건설
//				if (j== N || arr[j - 1] != arr[j]) // ||로 안해주면 인덱스 걸려서 컴파일에러
//					return 0;
//				s.push_back(arr[j]);
//			}
//			i = i + L-1;
//			if (s.size() != L)
//				return 0;
//			s.clear(); //건설완료
//		}
//		else{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//	freopen("Slide.txt", "r", stdin);
//	cin >> N >> L;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> board[i][j];
//		}
//	}
//	int way = 0;
//	vector<int> arrX, arrY;
//	for (int x = 0; x < N; x++){
//		for (int y = 0; y < N; y++) {
//			arrX.push_back(board[x][y]);
//			arrY.push_back(board[y][x]);
//		}
//		way += slide(arrX);
//		way += slide(arrY);
//		arrX.clear();
//		arrY.clear();
//
//	}
//	cout << way;
//
//	return 0;
//}
//
/////의재코드
////#include <stdio.h>
////
////int Map[20][20];
////int MapB[20][20];
////
////int Length;
////int X;
////
////void Init();
////int Solve();
////int SolveB();
////void print();
////
////int main()
////{
////
////	int T;
////	scanf("%d", &T);
////
////	for (int i = 1; i <= T; i++) {
////		scanf("%d", &Length);
////		scanf("%d", &X);
////
////		Init();
////		printf("#%d %d\n", i, Solve() + SolveB());
////
////		//print();
////	}
////
////	return 0;
////}
////
////void print()
////{
////	for (int i = 0; i < Length; i++) {
////		for (int j = 0; j < Length; j++) {
////			printf("%d ", Map[i][j]);
////		}
////		printf("\n");
////	}
////	printf("\n");
////	for (int i = 0; i < Length; i++) {
////		for (int j = 0; j < Length; j++) {
////			printf("%d ", MapB[i][j]);
////		}
////		printf("\n");
////	}
////}
////
////void Init()
////{
////	for (int i = 0; i < Length; i++) {
////		for (int j = 0; j < Length; j++) {
////			scanf("%d", &Map[i][j]);
////			MapB[j][i] = Map[i][j];
////		}
////	}
////}
////
////int Solve()
////{
////	int Prev = 0;
////	int Flag;
////	int Count = 0;
////
////	for (int i = 0; i < Length; i++) {
////		Prev = 0;
////		Flag = 0;
////		for (int j = 0; j < Length; j++) {
////			if (Prev == 0)
////				Prev = Map[i][j];
////			else if (Flag == 0) {
////				if (Prev != Map[i][j]) {// 경사로 구축 필요
////					if (Prev - 1 == Map[i][j]) {// 4 3 
////
////						if (j + X <= Length) { // 지을 수 있음
////							for (int k = 1; k < X && Flag == 0; k++) {
////								if (Map[i][j + k] != Map[i][j])
////									Flag = 1;
////							}
////
////							if (Flag == 0) {// 경사로 짓자
////								Prev = Map[i][j + X - 1];
////								for (int k = 0; k < X; k++) {
////									Map[i][j + k] = 9;
////								}
////								j += X - 1;
////							}
////						}
////						else { // 없음
////							Flag = 1;
////						}
////
////					}
////					else if (Map[i][j - 1] + 1 == Map[i][j]) { // 3 4
////						if (j - X >= 0) { // 지을 수 있음
////							for (int k = 2; k <= X && Flag == 0; k++) {
////								if (Map[i][j - k] != Map[i][j - 1])
////									Flag = 1;
////							}
////
////							if (Flag == 0) {// 경사로 짓자
////								Prev = Map[i][j];
////								for (int k = 1; k <= X; k++) {
////									Map[i][j - k] = 9;
////								}
////							}
////						}
////						else { // 없음
////							Flag = 1;
////						}
////					}
////					else
////						Flag = 1;
////				}
////				else {
////					Prev = Map[i][j];
////				}
////
////			}
////		}
////		if (Flag == 0)
////			Count++;
////	}
////
////	return Count;
////}
////int SolveB()
////{
////	int Prev = 0;
////	int Flag;
////	int Count = 0;
////
////	for (int i = 0; i < Length; i++) {
////		Prev = 0;
////		Flag = 0;
////		for (int j = 0; j < Length; j++) {
////			if (Prev == 0)
////				Prev = MapB[i][j];
////			else if (Flag == 0) {
////				if (Prev != MapB[i][j]) {// 경사로 구축 필요
////					if (Prev - 1 == MapB[i][j]) {// 4 3 
////
////						if (j + X <= Length) { // 지을 수 있음
////							for (int k = 1; k < X && Flag == 0; k++) {
////								if (MapB[i][j + k] != MapB[i][j])
////									Flag = 1;
////							}
////
////							if (Flag == 0) {// 경사로 짓자
////								Prev = MapB[i][j + X - 1];
////								for (int k = 0; k < X; k++) {
////									MapB[i][j + k] = 9;
////								}
////								j += X - 1;
////							}
////						}
////						else { // 없음
////							Flag = 1;
////						}
////
////					}
////					else if (MapB[i][j - 1] + 1 == MapB[i][j]) { // 3 4
////						if (j - X >= 0) { // 지을 수 있음
////							for (int k = 2; k <= X && Flag == 0; k++) {
////								if (MapB[i][j - k] != MapB[i][j - 1])
////									Flag = 1;
////							}
////
////							if (Flag == 0) {// 경사로 짓자
////								Prev = MapB[i][j];
////								for (int k = 1; k <= X; k++) {
////									MapB[i][j - k] = 9;
////								}
////							}
////						}
////						else { // 없음
////							Flag = 1;
////						}
////					}
////					else
////						Flag = 1;
////				}
////				else {
////					Prev = MapB[i][j];
////				}
////
////			}
////		}
////		if (Flag == 0)
////			Count++;
////	}
////
////	return Count;
////}