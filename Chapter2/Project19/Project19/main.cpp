// ��Ͻ����úͳ�Ա���ʲ���
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
	std::vector<MyClass> objects(3); // ��������3�� MyClass ���������
	// ��ȡ����������ʹ����������ÿ������ĳ�Ա����
	for (auto it = objects.begin(); it != objects.end(); ++it) {
		it->display();   // ���� MyClass ����� display ����
	}
	return 0;
}
