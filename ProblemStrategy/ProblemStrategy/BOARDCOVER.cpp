///// Q. 빈칸이 있을 때, ㄴ 모형으로 판을 꽉 채울 수 있는 방법의 수를 출력하라.
///// 방법 1) 한칸씩 항상 왼쪽 위부터 오른쪽 아래로 처리한다고 가정한다(중복을 제외하기위해).
///// 방법 2) 
///// # 제약사항
///// 1)  
///// 2) 중복 : 작은 수에서 큰 수로 중복이 없게끔 해야한다
///// ex) 0 1 2 3 , 모두가 친구라면
///// (0,2),(1,3) = (1,3),(0,2) <-- 0도 무조건 짝이 지어져야 하기 때문
//#include <vector>
//#include <iostream>
//
//using namespace std;
//void printBoard();
//
//int TC = 0; // test case
//int sizeX = 10, sizeY = 45; //MAX size
//char sym;
//vector<vector<int> > board;
//
/////항상 왼쪽에서 오른쪽으로 채워간다.
/////따라서 4가지(8가지중) 도형에 대한 각각의 dx, dy
/////먼저 본인 것을 그릴 수 있나 확인을 해야함
//const int coverType[4][3][2] = {
//	{ { 0,0 },{ 0,1 },{ 1,0 } }, // 「
//	{ { 0,0 },{ 0,1 },{ 1,1 } }, // ㄱ 
//	{ { 0,0 },{ 1,0 },{ 1,-1 } }, // 」
//	{ { 0,0 },{ 1,0 },{ 1,1 } } // ㄴ
//};
//
//bool isRange(int x, int y) {
//	if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size())// x >=sizeX 로해도 됨. = 유의
//		return false;
//	else
//		return true;
//}
////퍼즐이 겹칠시에 false를 반환한다
////set=1 놓기, set=-1 제거
////범위밖이면 셋하지 않고 false로
////제거할 때는 반환 값에 관심 없다
//bool set(int x, int y, int type, int set) // vector 를 2차원으로 쓸때는 꼭 띄워쓰기를 해줘야한다
//{
//	bool success = true;
//	for (int i = 0; i < 3; i++) {
//		int nX = x + coverType[type][i][0];
//		int nY = y + coverType[type][i][1];
//		if (!isRange(nX, nY)) {
//			success = false;
//		}
//		else {
//			//1->0. 0->1.. 1보다 크다면.. 중복이다
//			if ((board[nX][nY] += set) > 1)//범위에 있다면 nX,nY에 대해 퍼즐을 놓거나 뺀다. 
//				success = false;
//		}
//
//	}
//	//printBoard();
//	return success; //잘 새팅되면 true로 반환
//}
//int cnt = 0;
//int cover() {
//	int x = -1, y = -1; //초기화
//	for (int i = 0; i < board.size(); i++) {
//		for (int j = 0; j < board[0].size(); j++) {
//			if (board[i][j] == 0) {//빈칸이면
//				x = i; y = j;
//				break;
//			}
//		}
//		if (x != -1)
//			break;
//	}
//	//빈칸이 없으면
//	if (x == -1 && y == -1) {
//		return 1;
//	}
//	cnt++;
//	int ret = 0;
//	for (int i = 0; i < 4; i++) {
//		if (set(x, y, i, 1))
//			ret += cover();
//		set(x, y, i, -1);
//	}
//	return ret;
//}
//void printBoard() {
//	for (int i = 0; i < sizeX; i++) {
//		for (int j = 0; j < sizeY; j++) {
//			printf("%d", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//int main() {
//	//int board[20][20];
//	freopen("Sample_0606.txt", "r", stdin);
//	scanf("%d", &TC);
//	//TC = 1;
//	for (int i = 0; i < TC; i++) {
//		scanf("%d %d", &sizeX, &sizeY);
//		for (int j = 0; j < sizeX; j++) {
//			vector<int> elem;
//			//elem.resize(sizeY); // 메모리할당 후에는 board[j][k]와 같이 직접 데이터 입력 및 접근이 가능하다
//			scanf("%c", &sym);
//			for (int k = 0; k < sizeY; k++) {
//				scanf("%c", &sym);
//				if (sym == '#') {
//					//board[j][k] = 1;
//					elem.push_back(1);
//					elem.begin();
//				}
//				else {
//					//board[j][k] = 0;
//					elem.push_back(0);
//				}
//			}
//			board.push_back(elem);
//		}
//		//printBoard();
//		int res = cover();
//		printf("%d\n", res);
//		board.clear();
//
//	}
//
//
//	return 0;
//}
