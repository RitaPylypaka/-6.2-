#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) <<  a[i] ;
	cout << endl;
}
double Find(int* a, const int size)
{
	int p = 0;
	int y = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0) {
			p = p+i;
			y++;
		}
	if (y > 0)
		return (p * 1.0) / (y * 1.0);
	else
		return -1;
}
int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 5;
	int a[n];
	int Low = 8;
	int High =18 ;
	Create(a, n, Low, High);
	Print(a, n);
	cout << Find(a, n) << endl;
	return 0;
}