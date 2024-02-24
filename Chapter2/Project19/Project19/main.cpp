// 结合解引用和成员访问操作
#include <iostream>
#include <vector>
class MyClass {
public:
	void display() {
		std::cout << "Inside MyClass display function!" << std::endl;
	}
};
int main()
{
	std::vector<MyClass> objects(3); // 创建包含3个 MyClass 对象的容器
	// 获取迭代器，并使用它来访问每个对象的成员函数
	for (auto it = objects.begin(); it != objects.end(); ++it) {
		it->display();   // 访问 MyClass 对象的 display 函数
	}
	return 0;
}
