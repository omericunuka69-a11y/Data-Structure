#include<iostream>
#include<cstdlib>//malloc,free
using namespace std;
#define maxsize 10
struct student {
	int id;
	int score;


};




int main() {

	//static_cast用来强制转换
	student* stu_arr = static_cast<student*>(malloc(maxsize * sizeof(student)));
	if (stu_arr == nullptr) {

		cout << "没有成功" << endl;
		system("pause");
		return -1;
	}
	stu_arr[0].id = 25;
	stu_arr[0].score = 100;
	cout << stu_arr[0].id << endl << stu_arr[0].score << endl;
	free(stu_arr);
	stu_arr = nullptr;



	system("pause");
	return 0;
}