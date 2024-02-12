#include <iostream>
using namespace std;

void write()
{
    cout << "Hello Function! ";
}

int main()
{
	for (int i = 0; i < 20; i++)
	{
		write();

		if (i % 2 != 0)
		{
			cout << endl;
		}
	}
}

