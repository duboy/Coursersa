#include <iostream>
using namespace std;
class A {
public:
    int val;
	A ( int n = 0 ) {val = n;}
	int & GetObj ( ) {
		int &b = this -> val;
		return b;
	}
};
main()  {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
}