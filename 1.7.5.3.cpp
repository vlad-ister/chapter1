#include <iostream>

using namespace std;

int main()
{
	int IP1, IP2, IP3, IP4;
	cout << "Enter first part of IP : ";
	cin >> IP1; cout << "\n";
	cout << "Enter second part of IP : ";
	cin >> IP2; cout << "\n";
	cout << "Enter third part of IP : ";
	cin >> IP3; cout << "\n";
	cout << "Enter fourth part of IP : ";
	cin >> IP4; cout << "\n";

	if (IP1 <= 255 && IP2 <= 255 && IP3 <= 255 && IP4 <= 255) {
		cout << "Ip-address : " << IP1 << "." << IP2 << "." << IP3 << "." << IP4;
	}
	else {
		cout << "One or more numbers between your IP-address in greater than 255.\nPlease check IP-address again!";
	}
	return 0;
}