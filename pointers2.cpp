#include <iostream>
using namespace std;

int main()
{
	int firstvalue, secondvalue;
	int* mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n' << '\n';
	cout << "***********************************" << '\n' << '\n';
	
	//new pointer
	int thirdvalue, fourthvalue;
	int* p1, * p2;

	thirdvalue = 10, fourthvalue = 20;
	p1 = &thirdvalue;
	p2 = &fourthvalue;

	cout << "Third value is " << thirdvalue << '\n';
	cout << "Fourth value is " << fourthvalue << '\n';
	cout << "&&" << '\n';
	cout << "Pointer 1 is " << *p1 << '\n';
	cout << "Pointer 2 is " << *p2 << '\n';
	
	*p1 = 35;
	cout << "===>" << '\n';

	cout << '\t' << "Third value is " << thirdvalue << '\n';
	cout << '\t' << "Fourth value is " << fourthvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	*p2 = *p1;
	cout << "===>" << '\n';

	cout << '\t' << "Third value is " << thirdvalue << '\n';
	cout << '\t' << "Fourth value is " << fourthvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	p1 = p2;
	cout << "===>" << '\n';

	cout << '\t' << "Third value is " << thirdvalue << '\n';
	cout << '\t' << "Fourth value is " << fourthvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	*p1 = 123;
	cout << "===>" << '\n';

	cout << '\t' << "Third value is " << thirdvalue << '\n';
	cout << '\t' << "Fourth value is " << fourthvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	cout << endl;
	system("pause");
	return 0;
}