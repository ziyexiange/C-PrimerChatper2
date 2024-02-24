// 类型别名简化多维数组指针
#include <iostream>
using namespace std;
int main() {
	// 类型别名简化多维数组指针
	int ia[4][4] = {
			{1,2,3,4},
			{2,3,4,5},
			{3,4,5,6},
			{4,5,6,7},
	};
	using array = int[4];
	for (array* p = ia; p != ia + 4; p++) {
		for (int* q = *p; q != *p + 4; ++q) {
			cout << *q << " ";
		}
		cout << endl;
	}

	return 0;
}
