/////p167 �����ϴ� ������� 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
/////
//#define SIZE 10
//double MIN = 1000;
//int N; // �湮�ؾ��� ��ü ������
//double d[SIZE][SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//
///// path : ���ݱ��� ���� ���
///// visited : �湮 ����
///// l : ���ݱ��� ���� ����� ��
//double shortestPath(vector<int>& path, vector<bool>& visited, double l) {
//	if (path.size() == N) // ���ø� �� �湮
//		return l + d[path.back()][0]; // +���������� �湮�� ���ø� �������� ���۵��÷� ���ư��� ��� 
//	
//	//���� �� �湮�� ���ø� ���� �õ�
//	for (int i= 0; i < N; i++) {
//		if (visited[i]) // �̹� �湮�ߴٸ�?
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
//	p.push_back(0);//0���� ����
//	visit[0] = true;
//	int shortest = shortestPath(p, visit, 0);
//	printf("%d", shortest);
//}