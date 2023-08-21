#include <iostream>
#include "Raii.h"

int main(){
	
	try {
		Smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);

		Smart_array new_array(2);
		new_array.add_element(44);
		new_array.add_element(34);

		arr = new_array;
		std::cout << new_array.get_element(0) << std::endl;
		std::cout << arr.get_element(0) << std::endl;
		
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
}


