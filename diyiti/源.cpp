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
	cout<<"�����뻪���¶�"<<endl;
	cin>>a;
	cout<<"�����¶���"<<she(a)<<endl;
	cout<<"�����������¶�"<<endl;
	cin>>a;
	cout<<"�����¶���"<<she(a)<<endl;
	system("pause");

}