// 下标和指针
#include<iostream>
using namespace std;
int main()
{
	int ia[] = { 0,1,2,3,4,6 };
	int *p = &ia[2];   // 指针p指向数组ia的第三个元素
	int j = p[1];      // p[1]指的是数组中的第四个元素
	int k = p[-2];     // p[-2]指的是数组中的第一个元素

	return 0;
}

