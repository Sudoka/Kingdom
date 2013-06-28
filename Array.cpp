#include "Kingdom.h"

template <class T>
Array<T>::Array( int index = DEFAULT_SIZE ):
size(index)
{
	arr = new T[index];
	
	for ( int i = 0; i < index; i++ ) {
		arr[i] = (T) 0; // cast 0 to type of array and store it
	}

	type = 0;
}

template <class T>
Array<T>::Array( const Array& r_warriorArr )
{
	size = r_warriorArr.getSize();
	arr = new T[ size ];

	for ( int i = 0; i < size; i++ ) {
		arr[i] = r_warriorArr[i];
	}

	type = w_warriorArr[0].getWarriorPosition();
}

template <class T>
Array<T>::~Array() {
	delete [] arr;
}

template <class T>
T& Array<T>::operator[] ( int index ) {
	return arr[index];
}

template <class T>
const T& Array<T>::operator[] ( int index ) const {
	return arr[index];
}

template <class T>
Array<T>& Array<T>::operator= ( const Array& r_warriorArr ) {
	if ( r_warriorArr == this ) {
		return *this;
	}

	delete [] arr;
	size = r_warriorArr.getSize();
	arr = new T[size];
	for ( int i = 0; i < size; i++ ) {
		arr[i] = r_warriorArr[i];
	}
	return *this;
}

template <class T>
int Array<T>::getSize() const {
	return size;
}

template <class T>
int Array<T>::getType() const {
	return type;
}

template <class T>  // not defined in Array class so no need for Array::operator<< syntax
ostream& operator<< ( ostream& output, const Array<T>& r_array ) {
	for ( int i = 0; i < r_array.getSize(); i++ ) {
		output << r_array[i];  // r_array[i] can be used since we overrode operator[]
	}
	return output;
}
