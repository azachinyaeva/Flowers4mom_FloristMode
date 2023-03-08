#pragma once
#include <iostream>

class NegativeException : public std::domain_error {

public:
	NegativeException(const std::string& message);
};