#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array {
	private:
		T *arr;
		unsigned int size;
		
		public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array operator=(const Array& other);
		~Array();

		T& operator[]();
};

#endif