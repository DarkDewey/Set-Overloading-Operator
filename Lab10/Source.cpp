#include"Header.h"

int main() {
	set<string> mySet1 = { "hello", "world", "c++", "java" };
	set<string> mySet2 = { "hello", "world", "python", "linux" };

	cout << "set1 = " << mySet1 << endl;
	cout << "set2 = " << mySet2 << endl;
	cout << "set1 + set2 = " << mySet1 + mySet2 << endl;
	cout << "set1 - set2 = " << mySet1 - mySet2 << endl;
	cout << "set1 * set2 = " << mySet1 * mySet2 << endl;

	system("pause");
	return 0;
}