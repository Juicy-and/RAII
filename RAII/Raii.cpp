#include "Raii.h"
#include "ex.h"

Smart_array& Smart_array::operator=(const Smart_array& other)
{
	if (this != &other) {
	delete[] array;
	this->count = 0;
	array = new int[other.new_size];
	new_size = other.new_size;
	for (int i = 0; i < other.count; i++)
		this->add_element(other.array[i]);;
	return *this;
	}
	return *this;
}
Smart_array::Smart_array(const Smart_array& other) {
	array = new int[other.new_size];
	new_size = other.new_size;
	for (int i = 0; i < other.count; i++)
		this->add_element(other.array[i]);
}

Smart_array::Smart_array(int full_size) {
	array = new int[full_size];
    new_size = full_size;
}



void Smart_array::add_element(int i_mas)
{
	if (count >= new_size)
	{
		throw ex();
		return;
	}
	array[count++] = i_mas;

}

int Smart_array::get_element(int index)
{
	if (index < 0 || index > count || index >= new_size)
	{
		throw ex();
	}
	return array[index];
}

Smart_array::~Smart_array()
{
	delete[] array;
}
