/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:01:26 by rmarquar          #+#    #+#             */
/*   Updated: 2024/05/03 10:08:45 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// This template function swaps the values of two variables.
// from Robin Marquardt
template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

// This template function returns the minimum value between two variables.
// from Robin Marquardt
template <typename T>
T min(T a, T b)
{
    return a < b ? a : b;
}

// This template function returns the maximum value between two variables.
// from Robin Marquardt
template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

template <typename T>
bool operator == (T const &a, T const &b)
{
	return a == b;
}

template <typename T>
int operator != (T const &a, T const &b)
{
	return a != b;
}

template <typename T>
bool operator >= (T const &a, T const &b)
{
	return a >= b;
}

template <typename T>
int operator <= (T const &a, T const &b)
{
	return a <= b;
}
