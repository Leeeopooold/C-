/*
//P1150
#include<iostream>
using namespace std;

int main() {
	int n ,k;
	cin >> n >> k;
	cout << n + (n - 1) / (k - 1);
	return 0;
}
*/


//B2109
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int num = 0;
	getline(cin, s);
	for (char c : s) {
		if (c >= '0' && c <= '9')
			num++;
	}
	cout << num;
}
*/

//B2110
/*
#include<iostream>
#include<string>
using namespace std;
int a[30];
int main() {
	string s;
	int num = 0;
	cin >> s;
	for (char c : s)
		a[int(c) - 96]++;
	for (char c : s) {
		if (a[int(c) - 96] == 1) {
			num++;
			cout << c;
			break;
		}
	}
	if (num == 0)
		cout << "no";

	return 0;
}
*/

//B2120
/*
#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int flag = 1;
	while (cin >> s) {
		if (flag) {
			flag = 0;
			cout << s.size();
		}
		else
			cout << ',' << s.size();
	}

	return 0;
}
*/

//B2121
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	int max = 0, min = 100;//��¼����
	int num = 0;
	string s;
	int temp1,temp2; //��¼�±�
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ',' || s[i] == '.' || s[i] == ' ') { //����ĩβ
			if (num > max) {
				max = num;
				temp1 = i;
			}
			if (num < min) {
				min = num;
				temp2 = i;
			}
			num = 0;//���ʳ��ȹ��㣡����
		}
		else
			num++;//���ʲ���
	}
	for (int i = temp1 - max; i < temp1; i++) {
		cout << s[i];
	}
	cout << endl;
	for (int i = temp2 - min; i < temp2; i++) {
		cout << s[i];
	}
	return 0;
}
*/

//B2122
/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int temp=0;//��¼���ʳ���
	for (int i = 0; i < s.size(); i++) {
		if (s[i] ==' ') {   //ÿ�����ʽ�β
			for (int j = i-1; j>=i-temp; j--) {
				cout << s[j];
			}
			cout << endl;
			temp = 0;
		}
		else   //���ʲ���
			temp++;
	}
	for (int i = s.size() - 1; i >= s.size()- temp; i--) //�������һ������
		cout << s[i];
	return 0;
}
*/

//B2124
#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int flag = 1;
	for (int i = 0; i <= s.size() / 2 - 1; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			flag = 0;
		}
	}
	if (flag == 1)
		cout << "yes";
	else
		cout << "no";

	return 0;
}