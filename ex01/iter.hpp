/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:53:02 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/30 14:30:46 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

//This function iterates through an array of type T and applies a function to each element of the array.
//The function takes a pointer to the array, the size of the array, and a function pointer as arguments.
//The function pointer takes a reference to an element of the array as an argument.
//If the array is NULL, the size is 0, or the function pointer is NULL, the function does nothing.
//from Robin Marquardt
template <typename T>
void iter(T *array, size_t size, void (*f)(T const &input))
{
	if (!array || !f || size == 0)
		return;
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void print(T const &input)
{
	std::cout << input << std::endl;
}
