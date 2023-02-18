#pragma once
#include <exception>
#include <string>

class bad_range : public std::exception
{
public:
	virtual const char* what() const noexcept override
	{
		return "Invalid number of elements";
	}
};