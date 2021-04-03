#include <iostream>
using namespace std;
int A[100], n, s = 0;
int main()
{
	int A[100], n, s = 0;
	cout << "Enter your digit amount: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cout << "Your array: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
		s = s + A[i];
	}
	cout << endl;
	cout << "Sum of your array = " << s;
}