#include<iostream>

//方式三
using namespace std;



//iostream 提供一个叫命名空间的东西
//第二种方式  声明命名空间中的一个变量
using std::cout;
using std::endl;


int main(void)
{
	//第一种方式加std
	int a;
	std::cout << "nihaoshijie" << std::endl;
	
	return 0;
}