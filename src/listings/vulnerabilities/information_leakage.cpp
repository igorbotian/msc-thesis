#include <list>
#include "sql_exception.h"

class fan_store_exception : sql_exception {
	// ...
}

class fan_store_impl : fan_store {

public: 
	std::list<tshirt> get_tshirts() 
		throw fan_store_exception;
	// ...

private:
	std::list<tshirt> get_tshirts_from_db() 
		throw sql_exception;
}

std::list<tshirt> fan_store_impl::get_tshirts() 
	throw fan_store_exception {

	return get_tshirts_from_db();
}