#include <iostream>
#include <map>

using namespace std;

int main()
{
	map <int, int> packOfCards;
	int cardsQuantity = 10;
	for (int i = 1; i <= cardsQuantity; i++)
	{
		packOfCards[i] = i;
		cout << packOfCards[i] << " ";
	}

	return 0;
}
