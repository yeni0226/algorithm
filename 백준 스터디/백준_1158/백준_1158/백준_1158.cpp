// 백준_1158.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;
queue<int>q;

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";

	while (!q.empty()) {
		if (q.size() == 1) {
			cout << q.front() << ">\n";
			break;
		}
		for (int i = 1; i < k; i++) {
			int tmp = q.front();
			q.pop(); //앞에서 빼서
			q.push(tmp); //뒤에 다시 넣는다
		}
		cout << q.front() << ", ";
		q.pop();
	}
}