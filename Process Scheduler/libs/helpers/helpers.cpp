#include "helpers.h"

int* extractIntegerWords(std::string str)
{
	std::stringstream ss;

	/* Storing the whole string into string stream */
	ss << str;

	/* Running loop till the end of the stream */
	std::string temp;
	int found;
	int* arr = new int(2);
	int i = 0;
	while (!ss.eof()) {
		/* extracting word by word from stream */
		ss >> temp;

		/* Checking the given word is integer or not */
		if (std::stringstream(temp) >> found)
		{
			arr[i] = found;
			++i;
		}
		/* To save from space at the end of string */
		temp = "";
	}
	return arr;
}

int generateRandomNumber(int min, int max)
{
	static bool initialized = false;
	if (!initialized) {
		srand(time(NULL));  // Initialize the random number generator with the current time
		initialized = true;
	}
	return min + (rand() % (max - min + 1));
}