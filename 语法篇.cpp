/*

	int result;
	result = ~556;
	std::cout << result;
	return 0;
}
*/

//字符串
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
//foreach遍历（不能逆序） 还有一个坏处就是不知道下标
/*

int main() {
	string s = "abcdefg";
	for (char c : s) {
		cout << c;
	}
}
*/
//stoi函数 或stol stoll stod stold
// 识别的时候左到右，遇到非法符自动停止
// 非法符号即非数字和前置正负号，如100b345,转换为100，-100-345转换为-100，超出整型会抛出异常
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
	//	将转换成ASCII值97  char类型返回ascii值的字符串
	s = to_string(c); //还是字符串
	cout << s << endl;
}
*/

