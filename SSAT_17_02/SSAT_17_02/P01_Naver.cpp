//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//int solution1(vector< vector<int> > &A) {
//	// write your code in C++14 (g++ 6.2.0)
//	return 1;
//}
//
//string solution2(string &S) {
//	int done = 1;
//	string duple[3] = { "AA", "BB", "CC" };
//	string::size_type pos;
//	while (done) {
//		done = 1;
//		for (int i = 0; i < 3; i++) {
//			pos = S.find(duple[i], 0);
//			if (pos == string::npos) {
//				done++;
//				//cout << "Not found" << endl;
//				if (done == 4)
//					done = 0;
//			}
//			else {
//				S.erase(pos, 2);
//			}
//		}
//	}
//	return S;
//}
//
//int main() {
//	vector< vector<int> > A;
//
//	string duple[3] = { "AA", "BB", "CC" };
//
//	vector<char> st;
//	string S = "ACCAABBC";
//	st.push_back(S[0]);
//	for (int i = 1; i < S.size(); i++) {
//		if (!st.empty()) {
//		if (st.back() == S[i]) {
//			st.pop_back();
//		}
//		else
//			st.push_back(S[i]);
//		}
//		else
//			st.push_back(S[i]);
//	}
//	string res="";
//	for (int i = 0; i < st.size(); i++) {
//		res += st[i];
//	}
//	cout << res;
//
//
//}