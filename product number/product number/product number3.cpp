#include<iostream>
using namespace std;
float getProduct(int n) {
	float num,product = 1;
	for (int i = 0; i < n; i++) {
		cout << "Enter number " << i + 1 << endl;
		cin >> num;
		product *= num;
	}
	return product;
}
int main() {
	int count;
	cout << "Enter count of number:\n";
	cin >> count;
	cout << "=====================\n";
	float res = getProduct(count);
	cout << "==========================\n";
	cout << "Product of " << count << " numbers is " << res << endl;
	return 0;
}