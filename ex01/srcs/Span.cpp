#include "Span.hpp"

Span::Span(unsigned int size) : _size(size), _count(0) {
	if (size == 0) {
		throw InvalidSizeException();
	}
	_arr = new int[size];
}

Span::Span(const Span &other) {
	*this = other;
}

Span::~Span() {
	delete [] _arr;
}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		_size = other._size;
		_count = other._count;
		_arr = new int[_size];
		for (unsigned int i = 0; i < _count; i++) {
			_arr[i] = other._arr[i];
		}
	}
	return *this;
}

void Span::addNumber(int n) {
	if (_count >= _size) {
		throw FullException();
	}
	_arr[_count] = n;
	_count++;
}

void Span::addRange(int start, int end) {
	if (start > end) {
		int tmp = start;
		start = end;
		end = tmp;
	}
	if (_count + (end - start) >= _size) {
		throw FullException();
	}
	for (int i = start; i <= end; i++) {
		_arr[_count] = i;
		_count++;
	}
}

int Span::shortestSpan() {
	if (_count <= 1) {
		throw NoSpanException();
	}
	int min = INT_MAX;
	for (unsigned int i = 0; i < _count; i++) {
		for (unsigned int j = i + 1; j < _count; j++) {
			int diff = _arr[i] - _arr[j];
			if (diff < 0) {
				diff *= -1;
			}
			if (diff < min) {
				min = diff;
			}
		}
	}
	return min;
}

int Span::longestSpan() {
	if (_count <= 1) {
		throw NoSpanException();
	}
	int min = INT_MAX;
	int max = INT_MIN;
	for (unsigned int i = 0; i < _count; i++) {
		if (_arr[i] < min) {
			min = _arr[i];
		}
		if (_arr[i] > max) {
			max = _arr[i];
		}
	}
	return max - min;
}

Span::Span() {}