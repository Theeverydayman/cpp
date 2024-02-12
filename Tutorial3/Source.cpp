#include <iostream>
#include <random>

using namespace std;

int main()
{
	mt19937 mt(56754); 
    uniform_int_distribution<int> dist(1, 2);

	string tilemap[20][10];

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 20; x++)
		{
			int temp = dist(mt);
			if (temp == 1) tilemap[x][y] = "O";
			else if (temp == 2) tilemap[x][y] = ".";
			else tilemap[x][y] = "?";

			std::cout << tilemap[x][y];
		}
		std::cout << endl;
	}
}
