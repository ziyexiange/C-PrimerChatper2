// ָ��Ͷ�ά����
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
	// ���ݶ�ά�����������arr���Զ�ת��Ϊָ���һ���������ָ��
	printArray(arr, 2);
	return 0;
}
// ���� int (*arr)[3] ��ʾһ��ָ�����3�������������ָ�롣
// ͨ������ arr �� printArray ������arr ���Զ�ת��Ϊָ���һ���������ָ�룬��������������ά������б�����
