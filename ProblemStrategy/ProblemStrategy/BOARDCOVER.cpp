///// Q. ��ĭ�� ���� ��, �� �������� ���� �� ä�� �� �ִ� ����� ���� ����϶�.
///// ��� 1) ��ĭ�� �׻� ���� ������ ������ �Ʒ��� ó���Ѵٰ� �����Ѵ�(�ߺ��� �����ϱ�����).
///// ��� 2) 
///// # �������
///// 1)  
///// 2) �ߺ� : ���� ������ ū ���� �ߺ��� ���Բ� �ؾ��Ѵ�
///// ex) 0 1 2 3 , ��ΰ� ģ�����
///// (0,2),(1,3) = (1,3),(0,2) <-- 0�� ������ ¦�� �������� �ϱ� ����
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
/////�׻� ���ʿ��� ���������� ä������.
/////���� 4����(8������) ������ ���� ������ dx, dy
/////���� ���� ���� �׸� �� �ֳ� Ȯ���� �ؾ���
//const int coverType[4][3][2] = {
//	{ { 0,0 },{ 0,1 },{ 1,0 } }, // ��
//	{ { 0,0 },{ 0,1 },{ 1,1 } }, // �� 
//	{ { 0,0 },{ 1,0 },{ 1,-1 } }, // ��
//	{ { 0,0 },{ 1,0 },{ 1,1 } } // ��
//};
//
//bool isRange(int x, int y) {
//	if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size())// x >=sizeX ���ص� ��. = ����
//		return false;
//	else
//		return true;
//}
////������ ��ĥ�ÿ� false�� ��ȯ�Ѵ�
////set=1 ����, set=-1 ����
////�������̸� ������ �ʰ� false��
////������ ���� ��ȯ ���� ���� ����
//bool set(int x, int y, int type, int set) // vector �� 2�������� ������ �� ������⸦ ������Ѵ�
//{
//	bool success = true;
//	for (int i = 0; i < 3; i++) {
//		int nX = x + coverType[type][i][0];
//		int nY = y + coverType[type][i][1];
//		if (!isRange(nX, nY)) {
//			success = false;
//		}
//		else {
//			//1->0. 0->1.. 1���� ũ�ٸ�.. �ߺ��̴�
//			if ((board[nX][nY] += set) > 1)//������ �ִٸ� nX,nY�� ���� ������ ���ų� ����. 
//				success = false;
//		}
//
//	}
//	//printBoard();
//	return success; //�� ���õǸ� true�� ��ȯ
//}
//int cnt = 0;
//int cover() {
//	int x = -1, y = -1; //�ʱ�ȭ
//	for (int i = 0; i < board.size(); i++) {
//		for (int j = 0; j < board[0].size(); j++) {
//			if (board[i][j] == 0) {//��ĭ�̸�
//				x = i; y = j;
//				break;
//			}
//		}
//		if (x != -1)
//			break;
//	}
//	//��ĭ�� ������
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
//			//elem.resize(sizeY); // �޸��Ҵ� �Ŀ��� board[j][k]�� ���� ���� ������ �Է� �� ������ �����ϴ�
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
