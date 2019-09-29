//#include <iostream>
//#include <sstream>
//#include <vector>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//
//stack<unsigned int> st;
//vector<string> word;
//
//int solution(string &A, string &B) {
//	// write your code in C++14 (g++ 6.2.0)&
//	int cnt = 0;
//	vector<int> Alex, Bob;
//
//	string &str = A;
//	for (int i = 0; i < A.size(); i++) {
//		if (str[i] == 'A') {
//			Alex.push_back(14);
//		}
//		else if (str[i] == 'K') {
//			Alex.push_back(13);
//		}
//		else if (str[i] == 'Q') {
//			Alex.push_back(12);
//		}
//		else if (str[i] == 'J') {
//			Alex.push_back(11);
//		}
//		else if (str[i] == 'T') {
//			Alex.push_back(10);
//		}
//		else {
//			Alex.push_back(str[i] - '0');
//		}
//	}
//	str = B;
//	for (int i = 0; i < A.size(); i++) {
//		if (str[i] == 'A') {
//			Bob.push_back(14);
//		}
//		else if (str[i] == 'K') {
//			Bob.push_back(13);
//		}
//		else if (str[i] == 'Q') {
//			Bob.push_back(12);
//		}
//		else if (str[i] == 'J') {
//			Bob.push_back(11);
//		}
//		else if (str[i] == 'T') {
//			Bob.push_back(10);
//		}
//		else {
//			Bob.push_back(str[i] - '0');
//		}
//	}
//	for (int i = 0; i < A.size(); i++) {
//		if (Alex[i] > Bob[i])
//			cnt++;
//	}
//	return cnt;
//}
//
//int main() {
//	string A = "A586QK";
//	string B = "JJ653K";
//
//	cout << solution(A, B);
//}