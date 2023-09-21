/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:46:44 by maricard          #+#    #+#             */
/*   Updated: 2023/09/20 20:35:36 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define WHITE "\033[1;37m"
# define RESET "\033[0m"\

template <typename T>
class Array
{
	private:
		T* _array;
		unsigned int _n;

	public:
		//! Constructors and destructors
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array& copy);
		
		//! Overloads
		Array& operator=(const Array& other);
		T& operator[](unsigned int index);
		
		//! Functions
		unsigned int	size() const;
		T* 	getArray();
};

template <typename T>
Array<T>::Array() : _array(NULL), _n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _n(n)
{
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = T();
}

template <typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete [] this->_array;
}

template <typename T>
Array<T>::Array(const Array<T>& copy) : _array(new T[copy._n]), _n(copy._n)
{
	for (unsigned int i = 0; i < copy._n; i++)
		this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	if (this == &other)
		return (*this);
	
	if (this->_array)
		delete [] this->_array;
	
	this->_array = new T[other.size()];
	for (unsigned int i = 0; i < other._n; i++)
		this->_array[i] = other._array[i];
	
	return *this;
}

template <typename T>
T&		Array<T>::operator[](unsigned int index)
{
    if (index >= this->size())
       throw std::out_of_range("index is out of bounds");
    
	return _array[index];
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return _n;
}

template <typename T>
T* 	Array<T>::getArray()
{
    return _array;
}

template <typename T>
void 	print(T x)
{
	std::cout << GREEN << x << " ";
}

template <typename T>
void	iter(T* array, size_t len, void (*func)(T&))
{
	size_t	i = -1;

	while (++i < len)
		func(array[i]);
	std::cout << RESET << std::endl;
}

#endif
