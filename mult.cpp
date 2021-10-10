#include <iostream>
using namespace std;

int main() {
	//수정하려면 i<=8 -> i<=9
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			cout << i << " * " << j << " = " << i * j << endl;
		cout << endl;
	}
	return 0;
}
