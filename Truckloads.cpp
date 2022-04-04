#include "Truckloads.h"
#include <ctype.h>

int Truckloads::numTrucks(int numCrates, int loadSize)
{
	// Error handling
	if (numCrates < 0 || loadSize < 0)
		return -1;

	// Error handling
	if (numCrates == 0 || loadSize == 0)
		return 0;

	// Default
	if (numCrates <= loadSize)
	{
		return 1;
	}

	int tmp1 = numCrates / 2;
	int tmp2 = numCrates / 2;
	if (numCrates % 2 != 0)
	{
		tmp2++;
	}

	return numTrucks(tmp1, loadSize) + numTrucks(tmp2, loadSize);
}