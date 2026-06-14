#include "Array.hpp"


template<typename T>
Array<T>::Array() : arr(NULL), size(0){

}


template<typename T>
Array<T>::Array(unsigned int n)  : arr(n ? new T[n] : NULL), size(0) {

}

template<typename T>
Array<T>::Array(const Array& other) {
	if (other.size) {
		arr new T[other.size]();
		for(unsigned int i = 0; i < other.size; i++)
			arr[i] = other.arr[i];
		size = other.size;
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] arr;
}