/////p167 여행하는 세일즈맨 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
/////
//#define SIZE 10
//double MIN = 1000;
//int N; // 방문해야할 전체 가지수
//double d[SIZE][SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//
///// path : 지금까지 만든 경로
///// visited : 방문 여부
///// l : 지금까지 만든 경로의 길
//double shortestPath(vector<int>& path, vector<bool>& visited, double l) {
//	if (path.size() == N) // 도시를 다 방문
//		return l + d[path.back()][0]; // +마지막으로 방문한 도시를 마지막의 시작도시로 돌아가는 경로 
//	
//	//아직 안 방문한 도시를 전부 시도
//	for (int i= 0; i < N; i++) {
//		if (visited[i]) // 이미 방문했다면?
//			continue;
//		int here = path.back();
//		path.push_back(i);
//		visited[i] = true;
//		MIN = min(MIN, shortestPath(path, visited, l + d[here][i]));
//		visited[i] = false;
//		path.pop_back();
//	}
//	return MIN;
//}
//
//int main() {
//	N = 3;
//	vector<int> p;
//	vector<bool> visit(N, false);
//	p.push_back(0);//0부터 시작
//	visit[0] = true;
//	int shortest = shortestPath(p, visit, 0);
//	printf("%d", shortest);
//}