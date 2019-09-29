//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
////[Prodo님이 들어왔습니다., Ryan님이 들어왔습니다., Prodo님이 나갔습니다., Prodo님이 들어왔습니다.]
//vector<string> solution(vector<string> record) {
//	vector<string> answer;
//
//	for(int i = 0; i < record.size(); i++) {
//		string s = record[i];
//		
//		istringstream iss(s);
//		while (iss) {
//			string subs;
//			iss >> subs;
//			if (subs != "") {
//
//				//				cout << "Substring: " << subs << endl;
//			}
//				
//		} 
//
//	//	if()
//	}
//	
//
//	return answer;
//}
//
//int main() {
//	
//	vector<string> sample;
//	sample.push_back("Enter uid1234 Muzi");
//	sample.push_back("Enter uid4567 Prodo");
//	sample.push_back("Leave uid1234");
//	sample.push_back("Enter uid1234 Prodo");
//	sample.push_back("Change uid4567 Ryan");
//
//	//string s = "Somewhere down the road";
//	//istringstream iss(s);
//	//do
//	//{
//	//	string subs;
//	//	iss >> subs;
//	//	if (subs == "")
//	//		cout << "aa" << endl;
//	//	cout << "Substring: " << subs << endl;
//	//} while (iss);
//
//	//char s1[30] = "The Little Prince";  // 크기가 30인 char형 배열을 선언하고 문자열 할당
//
//	//char *ptr = strtok(s1, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
//
//	//while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
//	//{
//	//	printf("%s\n", ptr);          // 자른 문자열 출력
//	//	ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
//	//}
//
//	//solution(sample);
//	return 0;
//}