#include<iostream>
using namespace std;
#define max 10
typedef struct {
		int* data;//动态分配数组的指针
		int Maxsize;//最大容量
		int length;//当前长度
	}seqlist;
bool Initlist(seqlist& l) {
	l.data = new int[max];//开辟一段连续的内存空间
	if (l.data == nullptr) {
		return false;
	}
	l.Maxsize = max;
	l.length = 0;
	return true;
}

int main() {
	
	seqlist L;//声明一个顺序表
	Initlist(L);//初始化顺序表




	system("pause");
	return 0;
}