// 指针和多维数组
#include <iostream>
void printArray(int(*arr)[3], int rows) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < 3; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
int main() {
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	// 传递多维数组给函数，arr会自动转换为指向第一个子数组的指针
	printArray(arr, 2);
	return 0;
}
// 参数 int (*arr)[3] 表示一个指向包含3个整数的数组的指针。
// 通过传递 arr 到 printArray 函数，arr 会自动转换为指向第一个子数组的指针，允许函数对整个多维数组进行遍历。
