#include <iostream>
using namespace std;
int main() {
	int n, m, i, sum = 0;
	std::cin >> n>>m;
	for (i = m; i<=n; i++) {
		if (i% m == 0)
			sum += i;
	}
	std::cout << sum;
	return 0;
}

//자연수 N까지의 수 중 M의 배수합을 출력하는 프로그램
