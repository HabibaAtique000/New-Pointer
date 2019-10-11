#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int* max(int* ptr, int m)
{
	int* maxi = ptr;
	for (int i = 0; i < m; i++)
	{
		if (*maxi < *(maxi + i))
		{
			*maxi = *(maxi + i);
		}
	}
	return maxi;
}
int main()
{
	int n;
	cout << "ENTER NUMBER OF STUDENTS: ";
	cin >> n;
	string* p = new string[n];
	int* q = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "name:";
		cin >> p[i];
		cout << "marks: ";
		cin >> q[i];
		sum = sum + q[i];
	}
	cout << "AVERAGE: " << sum / n << endl;
	int* t = max(q, n);
	cout << "MAX MARKS ARE: " << *t;
	delete[]p;
	delete[]q;
	return 0;
}