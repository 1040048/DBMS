#include <iostream>
#include <random>
#include <sstream>

using namespace std;

/**
 * \brief Функция создания массива
 * \param size - размер массива
 * \return указатель на массив
 */
double* make_array(size_t size);

/**
 * \brief Функция печати массива
 * \param array - указатель на массив, size - размер массива
 * \return строка с массивом
 */
string show_array(double* array, const size_t size);

/**
 * \brief Функция нахождения максимального элемента массива
 * \param array - указатель на массив, size - размер массива
 * \return максимальный элемент массива
 */
double find_max(double* array, const size_t size);

/**
 * \brief Функция удаления массива
 * \param array - указатель на массив
 */
void delete_array(double*& array);

int main() {
	int size;
	cin >> size;
	if (size <= 0)
	{
		throw invalid_argument("Размер массива всегда положителен!");
	}

	double* array = make_array(size);

	cout << show_array(array, size);

	cout << find_max(array, size) << endl;

	delete_array(array);

	return 0;
}

double* make_array(size_t size) {

	double* array = new double[size];

	double lower_bound = -100;
	double upper_bound = 100;
	uniform_real_distribution<double> unif(lower_bound, upper_bound);
	default_random_engine re;
	double a_random_double = unif(re);

	for (size_t i = 0; i < size; i++)
	{
		array[i] = unif(re);
	}

	return array;
}

string show_array(double* array, const size_t size) {

	ostringstream tmp;

	for (size_t i = 0; i < size; i++)
	{
		tmp << array[i] << "\t";
	}
	tmp << endl;

	return tmp.str();
}

double find_max(double* array, const size_t size) {
	double max = array[0];

	for (size_t i = 1; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	return max;
}

void delete_array(double*& array) {
	if (array != nullptr)
	{
		delete[] array;
		array = nullptr;
	}
}