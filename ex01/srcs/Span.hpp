#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span {
	public:
		Span(unsigned int size); // Constructor
		Span(const Span &other); // Copy constructor
		~Span(); // Destructor
		Span &operator=(const Span &other); // Assignation operator overload

		void	addNumber(int n);
		void	addRange(int start, int end);
		int		shortestSpan();
		int		longestSpan();

	private:
		unsigned int		_size;
		unsigned int		_count;
		int					*_arr;
		Span(); // Default constructor

	class FullException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Span is full";
			}
	};
	class NoSpanException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "No span to find";
			}
	};
	class InvalidSizeException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "Invalid size";
			}
	};
};

#endif