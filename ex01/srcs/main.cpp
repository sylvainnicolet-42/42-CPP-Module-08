
#include <iostream>
#include "Span.hpp"

void	test_subject() {
	std::cout << "=== Test subject ===" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;
}

void	test_invalid_size() {
	std::cout << "=== Test invalid size ===" << std::endl;
	try {
		Span sp = Span(0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_invalid_addNumber() {
	std::cout << "=== Test invalid addNumber ===" << std::endl;
	try {
		Span sp = Span(1);
		sp.addNumber(1);
		sp.addNumber(2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_invalid_shortestSpan() {
	std::cout << "=== Test invalid shortestSpan ===" << std::endl;
	try {
		Span sp = Span(1);
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span sp = Span(1);
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_invalid_longestSpan() {
	std::cout << "=== Test invalid longestSpan ===" << std::endl;
	try {
		Span sp = Span(1);
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span sp = Span(1);
		sp.addNumber(1);
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_big_number() {
	std::cout << "=== Test big number ===" << std::endl;
	try {
		Span sp = Span(10000);
		for (int i = 0; i < 10000; i++) {
			sp.addNumber(i);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_invalid_range() {
	std::cout << "=== Test invalid range ===" << std::endl;
	try {
		Span sp = Span(1);
		sp.addRange(1, 2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	test_valid_range() {
	std::cout << "=== Test valid range ===" << std::endl;
	try {
		Span sp = Span(5);
		sp.addRange(1, 5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main() {
	test_subject();
	test_invalid_size();
	test_invalid_addNumber();
	test_invalid_shortestSpan();
	test_invalid_longestSpan();
	test_big_number();
	test_invalid_range();
	test_valid_range();

	return 0;
}
