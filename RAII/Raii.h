#pragma once
class Smart_array
{
private:
	int* array;
	int new_size;
	int count = 0;
public:
	Smart_array(const Smart_array& other);
	Smart_array& operator=(const Smart_array& other) { return *this; }
	Smart_array(int full_size);
	void add_element(int i_mas);
	int get_element(int index);

	~Smart_array();

};

