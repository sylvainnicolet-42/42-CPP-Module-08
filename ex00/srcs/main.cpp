
#include <iostream>

#include "whatever.hpp"

void	test_swap_int(int a, int b) {
	std::cout << "--- Swap int ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
}

void	test_swap_float(float a, float b) {
	std::cout << "--- Swap float ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap<float>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
}

void	test_swap_char(char a, char b) {
	std::cout << "--- Swap char ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap<char>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
}

void	test_swap() {
	test_swap_int(1, 42);
	test_swap_int(42, 1);
	test_swap_int(42, 42);

	test_swap_float(1.42f, 42.1f);
	test_swap_float(42.1f, 1.42f);
	test_swap_float(42.1f, 42.1f);

	test_swap_char('x', 'y');
	test_swap_char('y', 'x');
	test_swap_char('x', 'x');
}

void	test_min_int(int a, int b) {
	std::cout << "--- Min int ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << min<int>(a, b) << std::endl << std::endl;
}

void	test_min_float(float a, float b) {
	std::cout << "--- Min float ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << min<float>(a, b) << std::endl << std::endl;
}

void	test_min_char(char a, char b) {
	std::cout << "--- Min char ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << min<char>(a, b) << std::endl << std::endl;
}

void	test_min() {
	test_min_int(1, 42);
	test_min_int(42, 1);
	test_min_int(42, 42);

	test_min_float(1.42f, 42.1f);
	test_min_float(42.1f, 1.42f);
	test_min_float(42.1f, 42.1f);

	test_min_char('x', 'y');
	test_min_char('y', 'x');
	test_min_char('x', 'x');
}

void	test_max_int(int a, int b) {
	std::cout << "--- Max int ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "max(a, b) = " << max<int>(a, b) << std::endl << std::endl;
}

void	test_max_float(float a, float b) {
	std::cout << "--- Max float ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "max(a, b) = " << max<float>(a, b) << std::endl << std::endl;
}

void	test_max_char(char a, char b) {
	std::cout << "--- Max char ---" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "max(a, b) = " << max<char>(a, b) << std::endl << std::endl;
}

void	test_max() {
	test_max_int(1, 42);
	test_max_int(42, 1);
	test_max_int(42, 42);

	test_max_float(1.42f, 42.1f);
	test_max_float(42.1f, 1.42f);
	test_max_float(42.1f, 42.1f);

	test_max_char('x', 'y');
	test_max_char('y', 'x');
	test_max_char('x', 'x');
}

void	test_subject() {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int main() {
	test_subject();

//	test_swap();
//	test_min();
//	test_max();

	return 0;
}
