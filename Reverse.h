#if !defined(REVERSE_H)
#define REVERSE_H

#include <iostream>
#include <string>

class Reverse
{
public:
	Reverse();
	~Reverse();
	int ReverseDigit(int i);
	std::string ReverseString(std::string s);
};
#endif // REVERSE_H
