#include <iostream>

using namespace std;

#define N 10

int main() {

	system("color 70");
	int numero = 0;
	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			if (j==0||i==N||i==0||j==N||i==(N/2))
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	return 0;
}