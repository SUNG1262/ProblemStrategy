//#include <iostream>
//#include <vector>
//#include <algorithm> //next permutation
//
//using namespace std;
//
//void printResult(vector<int>& p) {
//	vector<int>::iterator i;
//	for (i = p.begin(); i < p.end(); i++) {
//		cout << *i;
//	}
//	printf("\n");
//}
//int main(){
//	///������ ��� �������ϱ�
//	///������ �ݵ�� ������������ ����� �� ���� ���������� ���� ��� ����� ���� ������ ���� �����ؾ���
//	vector<int> vi;
//	vi.push_back(1); vi.push_back(3); vi.push_back(2);
//	sort(vi.begin(), vi.end());
//	cout << "����:";
//	printResult(vi);
//	///���� ������ ������ ���������� 
//	while(next_permutation(vi.begin(), vi.end())){
//		cout << "����:";
//		printResult(vi);
//	}
//
//	/// �迭�� NEXT PERMUTATION
//	int arr[] = { 4, 2, 1, 1 };
//	const int N = sizeof(arr) / sizeof(int);
//	sort(arr, arr+N); // �������� sort
//	do {
//		for (int i = 0; i < N; i++)
//		{
//			cout << arr[i];
//		}
//		cout << endl;
//	} while (next_permutation(arr, arr + N));
//
//}