// pointer.cpp
#include <iostream>

using namespace std;

int main() {
	int x = 5;

	// p는 x를 가리킴
	int* p = &x;
	cout << "x = " << x << endl; // 값
	cout << "&x = " << &x << endl; // 메모리 주소
	cout << "p = " << p << endl; // 메모리 주소
	cout << "*p = " << *p << endl; // 값
	//cout << "++p = " << ++p << endl;

	// p를 이용해 x 값 변경
	*p = 10;
	cout << "x = " << x << endl; // 값
	cout << "&x = " << &x << endl; // 메모리 주소
	cout << "p = " << p << endl; // 메모리 주소
	cout << "*p = " << *p << endl; // 값

	return 0;
}