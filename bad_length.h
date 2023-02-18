#pragma once
#include <exception>
#include <string>

class bad_length : public std::exception
{
public:
	virtual const char* what() const noexcept override
	{
		return "Number of elemetns is out of control";
	}
};