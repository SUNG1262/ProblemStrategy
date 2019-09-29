////#include <iostream>
////#include <sstream>
////#include <vector>
////#include <stack>
////#include <string>
////
////using namespace std;
////
////
////stack<unsigned int> st;
////vector<string> word;
////
////int solution(string &S) {
////	unsigned int res = -1;
////	unsigned int A, B;
////	string op[4] = { "POP", "DUP", "+", "-" };
////	string check;
////	for (vector<string>::iterator it = word.begin(); it != word.end(); ++it) {
////		check = *it;
////		if (isdigit(check[0])) {
////			unsigned int ui = (unsigned int)std::stoul(check, nullptr, 0);
////			//cout << ui;
////			st.push(ui);
////		}
////		else {
////			int i = 0;
////			for (i; i < 5; i++) {
////				if (op[i].compare(check) == 0)
////					break;
////			}
////			if (i == 0) {
////				if (st.empty())
////					return -1;
////				else {
////					st.pop();
////					res = st.top();
////				}
////			}
////			else if (i == 1) {
////				if (st.empty())
////					return -1;
////				else {
////					st.push(st.top());
////					res = st.top();
////				}
////			}
////			else if (i == 2) {
////				if (st.size() >= 2) {
////					B = st.top();
////					st.pop();
////					A = st.top();
////					st.pop();
////					res = A + B;
////					st.push(res);
////				}
////				else
////					return -1;
////			}
////			else if (i == 3) {
////				if (st.size() >= 2) {
////					B = st.top();
////					st.pop();
////					A = st.top();
////					st.pop();
////					res = B - A;
////					if (res < 0)
////						return -1;
////					else
////						st.push(res);
////				}
////				else
////					return -1;
////
////			}
////		}
////	}
////	return res;
////}
////
////int main() {
////	//freopen("BM01.txt", "r", stdin);
////
////	//getline(cin, s);                     /// 공백을 포함한 문자열 입력
///////	string s= "13 DUP 4 POP 5 DUP + DUP + -";
////	string s = "3 DUP 5 - -";
////	string w;
////
////	for (stringstream sub(s); (sub >> w);) {  /// 문자열 s로 만들어진 문자열 스트림 sts생성
////		word.push_back(w);
////	}
////	cout << solution(s);
////
////
////}
//
//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
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
//int solution(string &S) {
//	string w;
//	for (stringstream sub(S); (sub >> w);) {  /// 문자열 s로 만들어진 문자열 스트림 sts생성
//		word.push_back(w);
//	}
//	unsigned int res = -1;
//	unsigned int A, B;
//	string op[4] = { "POP", "DUP", "+", "-" };
//	string check;
//	for (vector<string>::iterator it = word.begin(); it != word.end(); ++it) {
//		//cout << *it << "\n";
//		check = *it;
//		if (isdigit(check[0])) {
//			unsigned int ui = (unsigned int)std::stoul(check, nullptr, 0);
//			//cout << ui;
//			st.push(ui);
//		}
//		else {
//			int i = 0;
//			for (i; i< 5; i++) {
//				if (op[i].compare(check) == 0)
//					break;
//			}
//			if (i == 0) {
//				if (st.empty())
//					return -1;
//				else {
//					st.pop();
//					res = st.top();
//				}
//			}
//			else if (i == 1) {
//				if (st.empty())
//					return -1;
//				else {
//					st.push(st.top());
//					res = st.top();
//				}
//			}
//			else if (i == 2) {
//				if (st.size() >= 2) {
//					B = st.top();
//					st.pop();
//					A = st.top();
//					st.pop();
//					res = A + B;
//					st.push(res);
//				}
//				else
//					return -1;
//			}
//			else if (i == 3) {
//				if (st.size() >= 2) {
//					B = st.top();
//					st.pop();
//					A = st.top();
//					st.pop();
//					res = B - A;
//					if (res < 0)
//						return -1;
//					else
//						st.push(res);
//				}
//				else
//					return -1;
//			}
//		}
//	}
//	return res;
//}
//
