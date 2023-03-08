#include "Exception.h"

NegativeException::NegativeException(const std::string& message) : domain_error(message) {};
