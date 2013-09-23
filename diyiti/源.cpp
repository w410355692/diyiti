#include<iostream>
using namespace std;
float she(float x)
{
	float t ;
	t=5.0/9.0*(x-32);
	return t;
}
float hua(float x)
{
	float t ;
	t=9.0/5.0*x+32;
	return t;
}

int main()
{
	float a;
	cout<<"请输入华氏温度"<<endl;
	cin>>a;
	cout<<"摄氏温度是"<<she(a)<<endl;
	cout<<"请输入摄氏温度"<<endl;
	cin>>a;
	cout<<"华氏温度是"<<she(a)<<endl;
	system("pause");

}