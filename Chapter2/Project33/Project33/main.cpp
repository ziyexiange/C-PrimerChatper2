// 多维数组的下标引用
#include<iostream>
using namespace std;
int main()
{
	int arr[3][3] = {
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
	};
	cout << "Element at index [1][2]: " << arr[1][2] << endl; // 输出元素值
	for (auto& row : arr) {
		for (auto value : row) {
			cout << value << " ";
		}
		cout << endl;
	}

	return 0;

}