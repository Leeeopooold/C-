/*

	int result;
	result = ~556;
	std::cout << result;
	return 0;
}
*/

//�ַ���
/*
#include<iostream>
using namespace std;
int main() {
	string s;
	char m;
	s = "abc";
	s.insert(1, "e");
	s.substr(s.size()-1, 1);
	cout << s<<m;

}
*/
//foreach�������������� ����һ���������ǲ�֪���±�
/*

int main() {
	string s = "abcdefg";
	for (char c : s) {
		cout << c;
	}
}
*/
//stoi���� ��stol stoll stod stold
// ʶ���ʱ�����ң������Ƿ����Զ�ֹͣ
// �Ƿ����ż������ֺ�ǰ�������ţ���100b345,ת��Ϊ100��-100-345ת��Ϊ-100���������ͻ��׳��쳣
/*
#include<iostream>
#include<string>
using namespace std; 
int main() {
	string s;
	s = "100b345";
	cout << stoi(s) << endl;
	s = "-100-345";
	cout << stoi(s) << endl;
}
*/
//
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int a = 111111;
	long long b = 222222;
	char c = 'a';
	s = to_string(a);
	cout << s << endl;
	s = to_string(b);
	cout << s << endl;
	//	��ת����ASCIIֵ97  char���ͷ���asciiֵ���ַ���
	s = to_string(c); //�����ַ���
	cout << s << endl;
}
*/

