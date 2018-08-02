#include <iostream>
using namespace std;

int main()
{
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = l - i; j > 0; j--) cout << "*";
		cout << endl;
	}
	return 0;
}