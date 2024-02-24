// 访问数组元素
#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	// 使用下标运算符访问数组的特定元素
	for (int i = 0; i < 5; ++i) {
		cout << arr[i] << " "; // 输出数组的每个元素
	}

	return 0;
}