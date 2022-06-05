#include "inheritance.h"
int main()
{
	int n = 7;
	Property* arr[7];
	double Sumtax = 0;
	for (int i = 0; i < n; i++)
	{
		if (i < 3)
		{
			arr[i] = new Apartament(rand() % 10000 + 1000);
		}
		else if (i < 5) {
			arr[i] = new Car(rand() % 10000 + 1000);
		}
		else {
			arr[i] = new CountryHouse(rand() % 10000 + 1000);
		}

	}
	for (int i = 0; i < n; i++)
	{
		Sumtax += arr[i]->tax();
		cout << arr[i]->Get() << endl;
		delete arr[i];

	}
	cout << Sumtax;
}