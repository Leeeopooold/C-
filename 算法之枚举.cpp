/*1*/
/*#include<iostream>
using namespace std;

int Panduan(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int count = 0;
	int i, j, year, month, days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	for (year = 1900; year <= 9999; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)
		{
			days[2] = 29;
		}
		else days[2] = 28;


		for (i = 1; i <= 12; i++)
		{
			for (j = 1; j <= days[i]; j++)
			{
				if (Panduan(year) == Panduan(i) + Panduan(j))
				{
					count++;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
*/

/*
//P1085
#include<iostream>
using namespace std;

int main(){
	int  c1,c2,a[8] = {0,0,0,0,0,0,0,0};
	for (int i = 1; i <= 7; i++)
	{
		cin >> c1 >> c2;
		a[i] = c1 + c2;
	}
	int max = -1;
	int temp;
	for (int j = 1; j <= 7; j++)
	{
		if ((a[j] >8) && (a[j]>max))
		{
			max = a[j];
			temp = j;
		}
	}
	if (max == -1)
		cout << 0;
	else
		cout << temp << endl;
	return 0;
}
*/

//math��
/*
#include<math.h>
#include<iostream>
using namespace std;
int main() {
	cout << abs(-7);

	return 0;
	
}
*/
//P1152
/*
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long long a[1001];
	int n, c;
	cin >> n;
	int b[1001];
	for (int i = 1; i <=n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n - 1; i++)
		b[i] = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		c = abs(a[i] - a[i + 1]);
		for (int j = 1; j <= n - 1; j++)
		{
			if (c == j)
				b[j] = 1;
			else
				continue;
		}

	}
	int s=1;
	for (int i = 1; i <= n-1; i++)
	{
		if (b[i]==0)
		{
			cout << "Not jolly";
			s = 0;
			break;
		}
		
	}

	if (s == 1)
		cout << "Jolly";

	return 0;
}
*/


//P1151
/*
#include<iostream>
using namespace std;

int main() {
	int K;
	int num = 0;
	int sub1, sub2, sub3;
	cin >> K;
	for (int i = 10000; i <= 30000; i++)
	{
		sub1 = i / 100;
		sub3 = i % 1000;
		sub2 = i / 10 - i / 10000 * 1000;
		if (sub1 % K == 0 && sub2 % K == 0 && sub3 % K == 0)
		{
			cout << i<<endl;
			num++;
		}
	}
	if (num == 0)
		cout << "No";
	return 0;
}
*/

//P1008
/*
#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	int flag=0;
	int x1, x2, x3;
	int y1, y2, y3;
	int z1, z2, z3;
	int num[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 123; i <= 345; i++)
	{
		a = i;
		x1 = a / 100;
		x2 = a / 10 % 10;
		x3 = a % 10;

		b = i * 2;
		y1 = b / 100;
		y2 = b / 10 % 10;
		y3 = b % 10;

		c = i * 3;
		z1 = c / 100;
		z2 = c / 10 % 10;
		z3 = c % 10;
		if (c > 987)
			continue;

		num[x1] += 1;
		num[x2] += 1; 
		num[x3] += 1;
		num[y1] += 1;
		num[y2] += 1;
		num[y3] += 1;
		num[z1] += 1;
		num[z2] += 1;
		num[z3] += 1;

		for (int j = 1; j <= 9; j++)
		{
			if (num[j] == 1)
				flag++;
			else
				break;

			if (flag == 9)
				cout << a << ' ' << b << ' ' << c << endl;
		}

		num[1] = 0;    //��ֵ֮��ǵø�ԭ������Ȼ����һֱ�ۼ�
		num[2] = 0;    //˼άҪ����
		num[3] = 0;
		num[4] = 0;
		num[5] = 0;
		num[6] = 0;
		num[7] = 0;
		num[8] = 0;
		num[9] = 0;
		flag = 0;  //flagҲҪ���㣡����
	}

	return 0;
}
*/

//P1029
/*
#include<iostream>
using namespace std;

inline int gcd(int a, int b)       //��κ����ǹؼ�
{
	return b > 0 ? gcd(b, a % b) : a;  //շת�����  �ж������Ƿ�Ϊ0
}
*/
//�����ʵ�ַ��� λ����
/*
inline int gcd(int a, int b)
{
	if (b) while ((a %= b) && (b %= a));
	return a + b;
}
*/

/*
int main() {
	long long x0, y0;
	cin >> x0 >> y0;
	long long a;
	int sum=0;
	for (int i = x0; i <= y0; i++)
	{
		a = x0 * y0 / i;//��һ�����þ�
		if (gcd(a, i) == x0 && a * i == x0 * y0) //���ж��Ƿ�պó���
			sum++;
	}
	cout << sum;
	return 0;
}

*/


//gcd���������Լ��
/*
#include<iostream>
using namespace std;

inline int gcd(int a, int b)       //��κ����ǹؼ�
	{
		return b > 0 ? gcd(b, a % b) : a;  //շת�����  �ж������Ƿ�Ϊ0
	}

int main() {
	int a, b;
	cin >> a >> b;
	int m,n;
	m = gcd(a, b);
	n = a * b / m;     //��ʽ����С������
	cout << m << endl<<n; 
	
}
*/


//P1003
/*
#include<iostream>
using namespace std;
int main() {
	int n;
	long long a[10001], b[10001], g[10001], k[10001];
	int x, y;
	int num=0;
	cin >> n ;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i] >> g[i] >> k[i];
	}
	cin >> x >> y;
	for (int i = 1; i <= n; i++)
	{
		if ((a[i] <= x) && (b[i] <= y) && (a[i] + g[i] >= x) && (b[i] + k[i] >= y))
			num = i;
	}
	if (num != 0)
		cout << num;
	else
		cout << -1;

	return 0;
}
*/

//��vector���ֵ ��Сֵ
/*
#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
using namespace std;
int main() {
	vector<int> vec;
	int n;
	cin >> n;
	while (n--) {
		int num;
		cin >> num;
		vec.pb(num);
	}
	auto minv = min_element(vec.begin(), vec.end());
	auto maxv = max_element(vec.begin(), vec.end());
	cout << *minv << " " << *maxv;
	//cout << minv << " " << maxv;
	return 0;
}
*/

//�����������Сֵ
/*
#include <iostream>
#include <vector>
//#include <algorithm>
using namespace std;
int main() {
	int a[] = {1,2,3,4,5,6};
	int maxValue = *max_element(a, a + 6);//���ֵ
	int minValue = *min_element(a, a + 6);//��Сֵ

	int maxPosition = max_element(a, a + 6) - a;//���ֵ�±�
	int minPosition = min_element(a, a + 6) - a;//��Сֵ�±�
	cout << maxValue << ' ' << maxPosition << ' ' << minValue;
}
*/

//sort �Զ�������

/*struct Student {
	string name;
	int score;
	Student() {}
	Student(string n, int s) :name(n), score(s) {}
};
bool cmp_score(Student x, Student y) {
	return x.score > y.score;
}
*/
/*
#include<iostream>
#include<algorithm>  //����sort����
using namespace std;
bool cmp(int x, int y) {    //�Զ�������ʽ
	return x < y;    //��С���� 
}

int main() {
	//�Զ�������
	//1����������������� 
	int num[5] = { 1,2,3,5,4 };
	sort(num, num + 5, cmp);
	for (int i = 0; i < 5; i++) {
		cout << num[i] << " ";
	}
	return 0;
}
*/

//���ֲ���
/*
#include<iostream>
#include<algorithm>
using namespace std;
int a[8] = { 1, 2, 4, 4, 5, 8, 10, 22 };
int main() {
	int x = lower_bound(a, a + 8, 4) - a; //���ش��ڻ����Ŀ��ֵ�ĵ�һ��λ��
	int y = upper_bound(a, a + 8, 4) - a; //���ش���Ŀ��ֵ�ĵ�һ��λ��
	//һ��ʹ��ǰҪ��������
	bool z = binary_search(a, a + 8, 4);  //��Ŀ��ֵ�����򷵻�true(1)�����򷵻�false(0)
	cout << x << " " << y << " " << z << endl; //��� 2 4 1
	return 0;
}

*/

//P1147
/*
#include<iostream>
using namespace std;
int main() {
	long long M;
	cin >> M;
	long long total;
	for (long long i = 0; i <= M / 2; i++)
	{
		total = i;
		for (long long j = i + 1; j <= M / 2 + 1; j++)
		{
			total += j;
			if (total == M)
			{
				cout << i << ' ' << j << endl;
				break;
			}
			if (total > M)
				break;  //����������У�����̫��ᳬʱ
		}
	}

	return 0;
}
*/

//P2141
/*
#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int x, int y) {
	return x < y;
}

int main() {
	int n;
	cin >> n;
	int a[101];
	int num=0;
	int b[101];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		b[i] = 0;
	a[0] = 0;
	sort(a, a + (n+1), cmp);
*/
/*	for (int i = 1; i <= n; i++)
		cout << a[i]<<' ';
	cout << endl;*/
/*
	for (int i = 1; i <= n - 2; i++) {
		for (int j = i + 1; j <= n-1; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (a[k] == a[i] + a[j]) {
						num++;
						b[k] += 1;   //������ظ�������
						break;
				}
			}
			
		}
	}
	for (int i = 1; i <= n; i++) {
		if (b[i]>1)
			num-(b[i]-1); //���� ȥ������  һ����ֻ��һ��
		//һ��ʼ��дnum--���ǲ��Եģ���Ϊ��֪����������ظ��ж��˶��ٴΣ����Ҫ��ԭΪ1������
	}
	cout << num;

	return 0;
}
*/

//P8635
/*
#include<iostream>
using namespace std;
int main() {
	long long N;
	cin >> N;
	int flag=1;
	for (int a = 0;a*a<=N/16; a++) {
		if (flag == 0)
			break;
		for (int b = a;b*b<=N/16; b++) {
			if (flag == 0)
				break;
			for (int c = b;c*c<=N/4; c++) {  //����������ʹ�� ֻ��Ϊ���Ż�ʱ�䣨������ѧ������
				if (flag == 0)
					break;
				for (int d = c;d*d<=N; d++) {
					if (flag == 0)
						break;
					if (N == a * a + b * b + c * c + d * d) {
						cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
						flag = 0;
					}

				}
			}
		}
	}
}
*/
//�ڶ�������
/*

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int a = 0; a * a <= n; a++) {
		for (int b = a; b * b <= n; b++) {
			for (int c = b; c * c <= n; c++) {
				for (int d = c; d * d <= n; d++) {
					if (a * a + b * b + c * c + d * d == n) {
						cout << a << " " << b << " " << c << " " << d;
						return 0;    //��������ѭ��
					}
				}
			}
		}
	}
	return 0;
}
*/

//P8649���泬ʱ������bushi
/*
#include<iostream>
using namespace std;
int main() {
	long long N, K;
	cin >> N >> K;
	long long a[100001];
	long long sum=0;
	long long num=0;
	for (long long i = 1; i <= N; i++) {
		cin >> a[i];
	}
	long long j = 1;
	for (long long i = 1; i <= N; i++) {
		j = i;
		while (j <= N) {
			sum += a[j];
			if (sum % K == 0)
				num++;
			j++;
		}
		sum = 0;
	}
	cout << num;
	return 0;
}
*/

//AC����
/*
#include<iostream>
using namespace std;
long long book[100005]; //ȫ�ֱ��� long long��Ĭ��ֵΪ0
int main() {
	long long n, k,a;
	cin >> n >> k;
	long long sum=0,num=0;
	book[0] = 1;    //��ǰ׺��Ϊ0 �Ž�Ͱ
	for (int i = 1; i <= n; i++) {
		cin >> a;
		sum = (sum + a) % k;  //ǰ׺���������
		book[sum]++;
	}
	for (int i = 0; i < k; i++)
		num += (book[i] * (book[i] - 1)) / 2;  //��ȡ����
	
	cout << num;

	return 0;
}
*/

//8651 ѧ���ַ�����д
/*
#include<iostream>
using namespace std;
*/

