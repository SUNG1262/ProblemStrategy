//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
////[Prodo���� ���Խ��ϴ�., Ryan���� ���Խ��ϴ�., Prodo���� �������ϴ�., Prodo���� ���Խ��ϴ�.]
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
//	//char s1[30] = "The Little Prince";  // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�
//
//	//char *ptr = strtok(s1, " ");      // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ
//
//	//while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
//	//{
//	//	printf("%s\n", ptr);          // �ڸ� ���ڿ� ���
//	//	ptr = strtok(NULL, " ");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
//	//}
//
//	//solution(sample);
//	return 0;
//}