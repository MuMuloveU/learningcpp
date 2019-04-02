#include<iostream>

using namespace std;

//定义一个命名空间
//命名空间可以嵌套定义 使用时嵌套使用
namespace m
{
	int muyuan = 10;
	namespace n
	{
		int aa = 100;
	}
}

//第三种方式
using namespace m;
using namespace m::n;

//第二种方式
using m::muyuan;

int main()
{
	//第一种方式.直接加m::
	cout << m::muyuan;
	int a;
	cin >> a;
	return 0;
}