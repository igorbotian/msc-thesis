#include <list>
#include "sql_exception.h"

class fan_store {
public:
	std::list<tshirt> get_tshirts() throw sql_exception;
	// ...
}