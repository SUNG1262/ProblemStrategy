//#include "PICNIC_0603.h"
//
/////��������
//int TC = 0; // test case
//int N = 10, M = 45;
//bool IsFriend[10][10] = { false }; // �ִ� 10
//bool found[10] = { false };
/////
//
//int main() {
//	freopen("Sample_0603.txt", "r", stdin);// �� �̰� ���ܿ�� ���ε�
//	int x, y;
//	scanf("%d", &TC);
//	for (int t = 0; t < TC; t++) {
//		scanf("%d %d", &N, &M);
//		for (int i = 0; i < M; i++) {
//			scanf("%d %d", &x, &y);
//			IsFriend[x][y] = true;
//			IsFriend[y][x] = true;
//		}
////		int res = Error_MakePair1();
//	
//		int res = MakePair1fromZero();
//		printf("res : %d\n", res);
//		for (int i = 0; i < 10; i++) {
//			for (int j = 0; j < 10; j++) {
//				IsFriend[i][j] = { false };
//			}
//		}
//	}
//	return 0;
//}
//
//
//int Error_MakePair1()
//{
//	int complete = 0;
//	int ret = 0;
//	for (int i = 0; i < N; i++) {
//		if (found[i]) {	
//			complete++;
//			continue;
//		}
//		for (int j = i + 1; j < N; j++) {
//			if (found[j] | !IsFriend[i][j])//ģ���ƴϸ� ����
//				continue;
//			else {//ģ����
//				found[i] = found[j] = true;
//				ret += Error_MakePair1();
//				found[i] = found[j] = false;
//			}
//		}
//	}
//	if (complete == N) {
//		return 1;
//	}
//	else
//		return ret;
//}
//
//int MakePair1fromZero()
//{
//	int seeker = -1; // found check
//	int ret = 0; // return value
//	for (int i = 0; i < N; i++) { // 0�� ¦�� �ȸξ����ٸ�, �׻� 0���� �ξ���
//		if (!found[i]) {
//			seeker = i;
//			break;
//		}
//	}
//	if (seeker == -1) { // Base Case
//		return ret = 1; // =return 1;
//	}
//	for (int j = seeker + 1; j < N; j++) { //
//		if (found[j] | !IsFriend[seeker][j])//�̹� ¦�� �ְų�, ģ���ƴϸ� ����
//			continue;
//		else {//¦�� ����, ģ����
//			found[seeker] = found[j] = true;
//			ret += MakePair1fromZero();
//			found[seeker] = found[j] = false;
//		}
//	}
//	return ret;
//}
//}