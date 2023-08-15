#include "Raii.h"
#include "ex.h"
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
	if (index < 0 || index > count)
	{
		throw ex();
	}
	return array[index];
}
Smart_array::~Smart_array()
{
	delete[] array;
}