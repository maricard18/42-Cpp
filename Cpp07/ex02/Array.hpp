/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:46:44 by maricard          #+#    #+#             */
/*   Updated: 2023/09/20 15:25:49 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T* _array;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		
		int	size();
};

template <typename T>
Array<T>::Array()
{
	this->_array = new T;
	T = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	for (int i = 0; i < n; i++)
		T[i] = NULL;
}

template <typename T>
Array<T>::Array(const Array<T>& copy)
{
	this->_array = new T[n];
	for (int i = 0; i < n; i++)
		T[i] = NULL;
}

template <typename>
int size()
{
	int size = 0;

	for (int i = 0; this->_array[i]; i++)
		size++;

	return size;
}

#endif
