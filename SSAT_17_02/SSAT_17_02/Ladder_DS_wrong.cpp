#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, H, MIN=4;
int B[32][12]; // 0 & 11 boundary 

void init(){
}
int search(int cnt){
	int sN, sH;
	for (int i = 1; i <= N; i++) {
		sN = i; sH = 1;
		while(sH<=H){
			if (B[sH][sN] == 1) { // right
				sN++;
			}
			else if (B[sH][sN-1] == 1) { //left
				sN--;
			}
			sH++;
		}
		if (i != sN)
			break;
		if(i==N)
			return MIN = min(MIN, cnt);
	}
	return MIN;
}

void dfs(int cur, int smallest, int cnt) {
	smallest = 1;
	if (cnt > 3) {
		return;
	}
	if (cur > H) {
		search(cnt);
		return;
	}
	dfs(cur + 1, 1, cnt);
	for (int i = smallest; i < N; i++) {
		if (cnt < 3 && !B[cur][i] && !B[cur][i - 1] && !B[cur][i + 1]) { //i가 0이고, i-1, i+1이 0이면 가능
			B[cur][i] = 1;
			cnt++;
			dfs(cur + 1, i + 1, cnt);
			B[cur][i] = 0;
			cnt--;
		}
	}

}
int main() {
	int h, s;
	freopen("Ladder_DS.txt", "r", stdin);
	scanf("%d %d %d", &N, &M, &H);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &h, &s);
		B[h][s] = 1;
	}
	if (search(0))
		dfs(1, 1, 0);
	if (MIN > 3)
		cout << "-1";
	else
		cout << MIN;
	return 0;
}