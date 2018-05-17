//#include <iostream>
//#include <cstring> // memset for initing 0, -1
//#include <vector>
//
//using namespace std;
//
//const int MAX = 101;
//const int dx[5] = { 1, 0, -1, 0, 1 };
//const int dy[5] = { 0, -1, 0, 1, 1 };
//
//int CUR, SD, G;
//int b[MAX+1][MAX+1];
//vector<int> deq;
//
//void init(){
//	CUR = -1;
//	deq.clear();
//}
//int rotate(int d) {
//	if (d == 3)
//		return 0;
//	else
//		return d + 1;
//}
//void draw(int sx, int sy) {
//	int nx = sx, ny = sy;
//	CUR++;
//	if (CUR > G) return;
//	if (CUR == 0) {
//		ny = ny + dy[SD];
//		nx = nx + dx[SD];
//		deq.push_back(SD);
//		b[ny][nx] = 1;
//	}
//	else {
//		for (int i = deq.size() - 1; i >= 0; i--) {
//			int d = rotate(deq[i]);
//			ny = ny + dy[d];
//			nx = nx + dx[d];
//			b[ny][nx] = 1;
//			deq.push_back(d);
//		}
//	}
//	draw(nx, ny);
//}
//
//int checkRect() {
//	int rect=0;
//	for (int y = 0; y < MAX-1 ; y++) {
//		for (int x = 0; x < MAX-1 ; x++) {
//			if (b[y][x] == 1 && b[y + dy[0]][x + dx[0]] == 1 && b[y + dy[3]][x + dx[3]] == 1 && b[y + dy[4]][x + dx[4]] == 1) {
//					rect++;
//			}						
//		}
//	}
//	return rect;
//}
//int main() {
//	freopen("DragonCurve.txt", "r", stdin);
//	int n, sx, sy;
//	for (int i = 0; i < MAX; i++) {
//		memset(b[i], 0, sizeof(int)*(MAX - 1));
//	}
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d %d %d", &sx, &sy, &SD, &G);
//		init();
//		b[sy][sx] = 1;
//		draw(sx,sy);
//	}
//	cout << checkRect();
//	return 0;
//}