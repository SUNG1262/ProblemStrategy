/////
//#include <iostream>
//#include <string>
//#define BOARD_SIZE 5
//using namespace std;
//int TC;//test case
//char board[BOARD_SIZE][BOARD_SIZE];
//int w;
////for (int i = 0; i < TC; i++) {
//
/////시계방향 기준 탐색
//const int dx[8] = { -1,-1,-1, 0, 1, 1, 1, 0};
//const int dy[8] = { -1, 0, 1, 1, 1, 0,-1,-1};
//
//bool isRange(int x, int y) {
//	if (x < 0 || x > BOARD_SIZE || y < 0 || y > BOARD_SIZE)
//		return false;
//	else
//		return true;
//}
/////한글자는 두번씩 사용될 수 있으믈 중복체크는 안한다.
//bool hasWord(int x, int y, string& word) {
//	if (!isRange(x, y))
//		return false;
//	if (board[x][y] != word[0])
//		return false;
//	else if (word.size() == 1)
//		return true;
//	for (int dir = 0; dir < 8; dir++) {
//		int nX = x + dx[dir];
//		int nY = y + dy[dir];
//		if (hasWord(nX, nY, word.substr(1)))
//			return true;
//	}
//	return false;
//}
//int main() {
//	freopen("Boggle_0603.txt", "r", stdin);
//	string str, word;
//	cin >> TC;
//	for (int i = 0; i < 5; i++) {
//		cin >> str;
//		for (int j = 0; j < 5; j++) {
//			board[i][j]= str[j];
//		}
//	}
//	cin >> w;
//	for (int i = 0; i < w; i++) {
//		bool found = false;
//		cin >> word;
//		for (int x = 0; x < BOARD_SIZE; x++) {
//			for (int y = 0; y < BOARD_SIZE; y++) {
//				if (board[x][y] == word[0] && hasWord(x, y, word)) {
//						printf("YES\n");
//						found = true;
//						break;
//				}
//			}
//			if (found)
//				break;
//		}
//		if(!found)
//			printf("NO\n");
//	}
//
//	return 0;
//}