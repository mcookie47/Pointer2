#include <iostream>
using namespace std;

int main()
{
	int firstvalue, secondvalue;
	int* p1, * p2;

	firstvalue = 10, secondvalue = 20;
	p1 = &firstvalue;
	p2 = &secondvalue;

	cout << "First value is " << firstvalue << '\n';
	cout << "Second value is " << secondvalue << '\n';
	cout << "&&" << '\n';
	cout << "Pointer 1 is " << *p1 << '\n';
	cout << "Pointer 2 is " << *p2 << '\n';

	*p1 = 35;
	cout << "===>" << '\n';

	cout << '\t' << "First value is " << firstvalue << '\n';
	cout << '\t' << "Second value is " << secondvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	*p2 = *p1;
	cout << "===>" << '\n';

	cout << '\t' << "First value is " << firstvalue << '\n';
	cout << '\t' << "Second value is " << secondvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	p1 = p2;
	cout << "===>" << '\n';

	cout << '\t' << "First value is " << firstvalue << '\n';
	cout << '\t' << "Second value is " << secondvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	*p1 = 123;
	cout << "===>" << '\n';

	cout << '\t' << "First value is " << firstvalue << '\n';
	cout << '\t' << "Second value is " << secondvalue << '\n';
	cout << '\t' << "&&" << '\n';
	cout << '\t' << "Pointer 1 is " << *p1 << '\n';
	cout << '\t' << "Pointer 2 is " << *p2 << '\n';

	cout << endl;
	system("pause");
	return 0;
}
