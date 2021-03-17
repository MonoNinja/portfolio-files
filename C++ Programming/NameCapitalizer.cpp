#include <iostream>

using namespace std;

int main()
{
	int xxx;
	char* name;
	name = new char[20];
	cout << "Enter a name: " << endl;
	cin.get(name, 20);
	for (int i = 0; i < 20; i++)
		cout << static_cast<char>(toupper(name[i]));
	cout << endl;
	cin >> xxx;
	return 0;
}
