//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//#include<utility>
//using namespace std;
//
//int boardH, boardW;
//int covered[50][50]; //빈칸의 최대 수
//vector<string> board;
//int blockSize;
//
//// 블록의 각 회전된 형태를 상대 좌표의 목록으로 저장해 둔다
//vector<vector<pair<int, int> > > rotations;
//
//// 2차원 배열 arr 을 시계방향으로 90도 돌린 결과를 반환한다
//vector<string> rotate(const vector<string>& arr) {
//	//// string배열 ret을 arr(블록)의 가로 세로를 바꿔 " "(공백)을 사이즈만큼 가진 스트링으로 초기화.
//	vector<string> ret(arr[0].size(), string(arr.size(), ' '));// arr가 2* 3이면 ret은 3*2.
//	for (int i = 0; i < arr.size(); i++)//x
//		for (int j = 0; j < arr[0].size(); j++)//y
//			ret[j][arr.size() - i - 1] = arr[i][j];//x,y의 개수만큼  
//	return ret;
//}
//
//// block 의 4가지 회전 형태를 만들고 이들을 상대 좌표의 목록으로 변환한다.
//void generateRotations(vector<string> block) {
//	rotations.clear();
//	rotations.resize(4);
//	for (int rot = 0; rot < 4; rot++) {
//		int originY = -1, originX = -1; // 상대좌표의 원점좌표를 잡기위해서
//		for (int i = 0; i < block.size(); i++) //원점검사
//			for (int j = 0; j < block[i].size(); j++)
//				if (block[i][j] == '#') {
//					if (originY == -1) { // 처음나온 #
//						originX = i;
//						originY = j;
//					}
//					rotations[rot].push_back(make_pair(i - originX, j - originY)); //상대좌표계를 가지는 벡터를 rotation배열에 넣음
//				}
//		// 원점을 잡은 후, 블록을 시계 방향으로 90도 회전한다
//		block = rotate(block);
//	}
//	// 4가지 회전 형태 중 중복이 있을 경우 이를 제거한다
//	sort(rotations.begin(), rotations.end());
//	rotations.erase(unique(rotations.begin(), rotations.end()), rotations.end()); //벡터에 들어있는 중복 원소들을 끝까지 지움
//	blockSize = rotations[0].size(); //전역으로 관리
//}
//
//// (y,x) 를 (0,0) 으로 해서 cells 로 표현된 블록을 내려놓거나, 들어올린다.
//// delta 가 1 이면 내려놓고, -1 이면 들어올린다.
//// 블록이 검은 칸이나 다른 블록과 겹치거나 게임판 밖으로 나가면 false 를 반환한다.
//bool set(int y, int x, const vector<pair<int, int> >& cells, int delta) {
//	bool ok = true;
//	for (int i = 0; i < cells.size(); i++) {
//		int cy = y + cells[i].first, cx = x + cells[i].second;
//		if (cy < 0 || cx < 0 || cy >= boardH || cx >= boardW)
//			ok = false;
//		else {
//			covered[cy][cx] += delta;
//			if (covered[cy][cx] > 1) ok = false;
//		}
//	}
//	return ok;
//}
//
//int best; // 전역
//
//// placed: 지금까지 놓은 블록의 수
//// blanks: 남은 빈칸의 수
//void search(int placed, int blanks) {
//	// 빈칸 중 가장 윗줄 왼쪽에 있는
//	int y = -1, x = -1;
//	for (int i = 0; i < boardH; i++) {
//		for (int j = 0; j < boardW; j++)
//			if (covered[i][j] == 0) {
//				y = i;
//				x = j;
//				break;
//			}
//		if (y != -1) break; // 빈칸을 찾은 경우
//	}
//	// 기저 사례: 게임판의 모든 칸을 처리한 경우
//	if (y == -1) {
//		best = max(best, placed);
//		return;
//	}
//
//	// 가지치기 
//	int upperBound = blanks / blockSize + placed; // 현재 빈칸/블록의 사이즈 + 이미 놓은 블록 수 = 예상 최대 블록 수 
//	if (upperBound <= best) return; // 같은 빈칸/블록의 사이즈값이 나왔을 때, 이미 놓은 블록의 수가 b 적다면.. 이미 망한 것이므로 return
//
//	//빈 칸에 블록을 놓았을 때 경우의 경우
//	for (int i = 0; i < rotations.size(); i++) {
//		if (set(y, x, rotations[i], 1))
//			search(placed + 1, blanks - blockSize);
//		set(y, x, rotations[i], -1);
//	}
//
//	//빈칸을 남겨두고, 다음 블록으로 넘어갔을 때의 경우의 수)
//	covered[y][x]++; // = 1; 검은칸이 되었다고 가정한다. 놓은 수를 따로 관리하기 떄문에 상관없음
//	search(placed, blanks - 1);//
//	covered[y][x]--; // = 0; 다시 흰칸으로 해제
//}
//
//int solve() {
//	int blanks = 0;
//	///총빈칸을 셈
//	for (int i = 0; i < boardH; i++)
//		for (int j = 0; j < boardW; j++)
//			if (board[i][j] == '.')
//				++blanks;
//	best = 0;
//	for (int i = 0; i < boardH; i++) {
//		for (int j = 0; j < boardW; j++)
//			covered[i][j] = (board[i][j] == '#' ? 1 : 0);
//	}
//
//	search(0, blanks);
//	return best;
//}
//
//int main() {
//	
//	int TC;
//	freopen("Boardcover2.txt", "r", stdin);
//	cin >> TC;
//	TC = 1;
//	for (int cc = 0; cc < TC; ++cc) {
//		int blockH, blockW;
//		cin >> boardH >> boardW >> blockH >> blockW;
//		board.resize(boardH); //전역으로 이미 생성된 string을 세로사이즈로 재 동적할당해서 인덱스를 통해 바로 저장시키기 위해서
//		vector<string> block(blockH);// 생성과 동시에 블록 세로 사이즈로 초기화
//
//		for (int i = 0; i < boardH; i++)
//			cin >> board[i];
//		for (int i = 0; i < blockH; i++)
//			cin >> block[i];
//		generateRotations(block);
//		cout << solve() << endl;
//	}
//}
