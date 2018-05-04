//#include<algorithm>
//#include<iostream>
//#include<string>
//#include<vector>
//#include<utility>
//using namespace std;
//
//int boardH, boardW;
//int covered[50][50]; //��ĭ�� �ִ� ��
//vector<string> board;
//int blockSize;
//
//// ����� �� ȸ���� ���¸� ��� ��ǥ�� ������� ������ �д�
//vector<vector<pair<int, int> > > rotations;
//
//// 2���� �迭 arr �� �ð�������� 90�� ���� ����� ��ȯ�Ѵ�
//vector<string> rotate(const vector<string>& arr) {
//	//// string�迭 ret�� arr(���)�� ���� ���θ� �ٲ� " "(����)�� �����ŭ ���� ��Ʈ������ �ʱ�ȭ.
//	vector<string> ret(arr[0].size(), string(arr.size(), ' '));// arr�� 2* 3�̸� ret�� 3*2.
//	for (int i = 0; i < arr.size(); i++)//x
//		for (int j = 0; j < arr[0].size(); j++)//y
//			ret[j][arr.size() - i - 1] = arr[i][j];//x,y�� ������ŭ  
//	return ret;
//}
//
//// block �� 4���� ȸ�� ���¸� ����� �̵��� ��� ��ǥ�� ������� ��ȯ�Ѵ�.
//void generateRotations(vector<string> block) {
//	rotations.clear();
//	rotations.resize(4);
//	for (int rot = 0; rot < 4; rot++) {
//		int originY = -1, originX = -1; // �����ǥ�� ������ǥ�� ������ؼ�
//		for (int i = 0; i < block.size(); i++) //�����˻�
//			for (int j = 0; j < block[i].size(); j++)
//				if (block[i][j] == '#') {
//					if (originY == -1) { // ó������ #
//						originX = i;
//						originY = j;
//					}
//					rotations[rot].push_back(make_pair(i - originX, j - originY)); //�����ǥ�踦 ������ ���͸� rotation�迭�� ����
//				}
//		// ������ ���� ��, ����� �ð� �������� 90�� ȸ���Ѵ�
//		block = rotate(block);
//	}
//	// 4���� ȸ�� ���� �� �ߺ��� ���� ��� �̸� �����Ѵ�
//	sort(rotations.begin(), rotations.end());
//	rotations.erase(unique(rotations.begin(), rotations.end()), rotations.end()); //���Ϳ� ����ִ� �ߺ� ���ҵ��� ������ ����
//	blockSize = rotations[0].size(); //�������� ����
//}
//
//// (y,x) �� (0,0) ���� �ؼ� cells �� ǥ���� ����� �������ų�, ���ø���.
//// delta �� 1 �̸� ��������, -1 �̸� ���ø���.
//// ����� ���� ĭ�̳� �ٸ� ��ϰ� ��ġ�ų� ������ ������ ������ false �� ��ȯ�Ѵ�.
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
//int best; // ����
//
//// placed: ���ݱ��� ���� ����� ��
//// blanks: ���� ��ĭ�� ��
//void search(int placed, int blanks) {
//	// ��ĭ �� ���� ���� ���ʿ� �ִ�
//	int y = -1, x = -1;
//	for (int i = 0; i < boardH; i++) {
//		for (int j = 0; j < boardW; j++)
//			if (covered[i][j] == 0) {
//				y = i;
//				x = j;
//				break;
//			}
//		if (y != -1) break; // ��ĭ�� ã�� ���
//	}
//	// ���� ���: �������� ��� ĭ�� ó���� ���
//	if (y == -1) {
//		best = max(best, placed);
//		return;
//	}
//
//	// ����ġ�� 
//	int upperBound = blanks / blockSize + placed; // ���� ��ĭ/����� ������ + �̹� ���� ��� �� = ���� �ִ� ��� �� 
//	if (upperBound <= best) return; // ���� ��ĭ/����� ������� ������ ��, �̹� ���� ����� ���� b ���ٸ�.. �̹� ���� ���̹Ƿ� return
//
//	//�� ĭ�� ����� ������ �� ����� ���
//	for (int i = 0; i < rotations.size(); i++) {
//		if (set(y, x, rotations[i], 1))
//			search(placed + 1, blanks - blockSize);
//		set(y, x, rotations[i], -1);
//	}
//
//	//��ĭ�� ���ܵΰ�, ���� ������� �Ѿ�� ���� ����� ��)
//	covered[y][x]++; // = 1; ����ĭ�� �Ǿ��ٰ� �����Ѵ�. ���� ���� ���� �����ϱ� ������ �������
//	search(placed, blanks - 1);//
//	covered[y][x]--; // = 0; �ٽ� ��ĭ���� ����
//}
//
//int solve() {
//	int blanks = 0;
//	///�Ѻ�ĭ�� ��
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
//		board.resize(boardH); //�������� �̹� ������ string�� ���λ������ �� �����Ҵ��ؼ� �ε����� ���� �ٷ� �����Ű�� ���ؼ�
//		vector<string> block(blockH);// ������ ���ÿ� ��� ���� ������� �ʱ�ȭ
//
//		for (int i = 0; i < boardH; i++)
//			cin >> board[i];
//		for (int i = 0; i < blockH; i++)
//			cin >> block[i];
//		generateRotations(block);
//		cout << solve() << endl;
//	}
//}
