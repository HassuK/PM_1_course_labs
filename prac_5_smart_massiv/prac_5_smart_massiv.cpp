#include <iostream>


class Smart_arr
{
public:
	int len = 0;
	int* arr = new int;


	void add(int num)
	{
		int* arr1 = new int[len + 1];
		for (int i = 0; i < len; i++)
		{
			arr1[i] = arr[i];
		}
		arr1[len] = num;
		len++;
		delete arr;
		arr = arr1;
	}

	void out_l()
	{
		std::cout << "Текущая длина: " << len << std::endl;
	}

	void out_elem(int i)
	{
		std::cout << "Элемент под индексом " << i << " - " << arr[i] << std::endl;
	}

	void replace_elem(int i, int new_elem)
	{
		arr[i] = new_elem;
	}

	void delete_elem(int i)
	{
		int* arr1 = new int[len - 1];
		int f = 0;
		for (int j = 0; j < len; j++)
		{
			if (j == i)
			{
				f++;
				continue;
			}
			arr1[j - f] = arr[j];
		}
		delete arr;
		len -= 1;
		arr = arr1;
	}

	void insert_elem(int num, int i)
	{
		int* arr1 = new int[len + 1];
		int f = 0;
		for (int j = 0; j < len + 1; j++)
		{
			if (j == i)
			{
				f++;
				arr1[i] = num;
			}
			else
			{
				arr1[j] = arr[j - f];
			}

		}
		delete arr;
		len++;
		arr = arr1;
	}

};


int main()
{
	setlocale(LC_ALL, "Russian");
	Smart_arr vec;

	vec.add(1);
	vec.add(2);
	vec.add(10);
	vec.add(25);
	vec.out_l();

	for (int i = 0; i < vec.len; i++) {
		std::cout<< vec.arr[i]<<" ";
	}

	std::cout << std::endl << std::endl;
	vec.out_elem(0);

	std::cout << std::endl << std::endl;
	vec.replace_elem(2, 5);

	for (int i = 0; i < vec.len; i++) {
		std::cout << vec.arr[i] << " ";
	}
	std::cout << std::endl << std::endl;
	vec.insert_elem(70, 1);
	for (int i = 0; i < vec.len; i++) {
		std::cout << vec.arr[i] << " ";
	}
	std::cout << std::endl << std::endl;

	
	return 0;
}


