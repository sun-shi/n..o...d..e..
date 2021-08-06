#include<iostream>
using namespace std;
struct Savings{
	int w500;
	int w100;
	int w50;
	int w10;
};
void init(Savings& s);
void input(int& unit, int& cnt);
void save(Savings& s, int unit, int cnt);
int total(Savings& s);
int main() {
	int unit = 0, cnt = 0;
	struct Savings money;
	int tot_money;
	init(money);
	while (true) {
		input(unit, cnt);
		//cout << unit << "|"<<cnt;
		if (unit < 0) {
			break;
		}
		save(money, unit, cnt);
	}
	tot_money = total(money);
	cout << "총 저축액 : " << tot_money << endl;

	return 0;
}
void init(Savings& s) {//돈 전부를 다 0으로 초기화
	s = { 0, };
}
void input(int& unit, int& cnt) {
	cout << "동전의 금액 : ";
	cin >> unit;
	while (cin.fail()) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "동전의 금액 : ";
		cin >> unit;
	}
	if (unit < 0) {
		return;
	}
	cout << "동전의 개수 : ";
	cin >> cnt;
	while (cin.fail()) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "동전의 개수 : ";
		cin >> cnt;
	}
	
	if (unit == 500);
	else if (unit == 100);
	else if (unit == 50);
	else if (unit == 10);
	else {
		unit = 0;
		cnt = 0;
	}
	if (cnt < 0) {
		cnt = 0;
	} // 저금통 출금 방지용.

}
void save(Savings& s, int unit, int cnt) {
	if (unit == 500) {
		s.w500 += cnt;
	}
	else if (unit == 100) {
		s.w100 += cnt;
	}
	else if (unit == 50) {
		s.w50 += cnt;
	}
	else if (unit == 10) {
		s.w50 += cnt;
	}
	else {

	}

}
int total(Savings& s) {
	int result = (500 * s.w500) + (100 * s.w100) + (50 * s.w50) + (10 * s.w10);
	return result;
}