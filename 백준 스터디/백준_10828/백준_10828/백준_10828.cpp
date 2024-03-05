// 백준_10828.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	stack<int>s;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push") {
			cin >> x;
			s.push(x);
		}
		else if (a == "pop") {
			if (s.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (a == "size") {
			cout << s.size() << "\n";
		}
		else if (a == "empty") {
			if (s.size() == 0) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (a == "top") {
			if (s.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}
	}


	return 0;
}

