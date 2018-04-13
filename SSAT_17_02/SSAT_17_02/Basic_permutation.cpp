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
//	///벡터의 모든 순열구하기
//	///원본은 반드시 오름차순으로 적어야 그 다음 사전식으로 나와 모든 경우의 수가 나오는 것을 유의해야함
//	vector<int> vi;
//	vi.push_back(1); vi.push_back(3); vi.push_back(2);
//	sort(vi.begin(), vi.end());
//	cout << "원본:";
//	printResult(vi);
//	///원본 다음의 순열을 순차적으로 
//	while(next_permutation(vi.begin(), vi.end())){
//		cout << "다음:";
//		printResult(vi);
//	}
//
//	/// 배열의 NEXT PERMUTATION
//	int arr[] = { 4, 2, 1, 1 };
//	const int N = sizeof(arr) / sizeof(int);
//	sort(arr, arr+N); // 오름차순 sort
//	do {
//		for (int i = 0; i < N; i++)
//		{
//			cout << arr[i];
//		}
//		cout << endl;
//	} while (next_permutation(arr, arr + N));
//
//}