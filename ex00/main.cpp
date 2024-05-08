/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:01:34 by rmarquar          #+#    #+#             */
/*   Updated: 2024/05/03 10:15:27 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {

int a = 2;
int b = 3;

::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;

std::string c = "chaine1";
std::string d = "chaine2";

::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
return 0;
}

// int main()
// {
//     int i = 5;
//     int j = 10;
//     float k = 9.3;
//     float l = 1.7;
//     char c = 'c';
//     char d = 'd';
//     double da = 42.42;
//     double db = 21.21;

//     std::cout << "The value of int i before swap is: " << i << std::endl;
//     std::cout << "The value of int j before swap is: " << j << std::endl;
//     swap(i, j);
//     std::cout << "The value of int i after swap is: " << i << std::endl;
//     std::cout << "The value of int j after swap is: " << j << std::endl;
//     std::cout << i + j << std::endl;
//     std::cout << i / j << std::endl;
//     std::cout << i * j << std::endl;
//     std::cout << i - j << std::endl;

//     std::cout << "The minimum value between int i and j is: " << min(i, j) << std::endl;
//     std::cout << "The maximum value between int i and j is: " << max(i, j) << std::endl;

//     std::cout << "The value of float k before swap is: " << k << std::endl;
//     std::cout << "The value of float l before swap is: " << l << std::endl;
//     swap(k, l);
//     std::cout << "The value of float k after swap is: " << k << std::endl;
//     std::cout << "The value of float l after swap is: " << l << std::endl;

//     std::cout << "The minimum value between k and l is: " << min(k, l) << std::endl;
//     std::cout << "The maximum value between k and l is: " << max(k, l) << std::endl;

//     std::cout << "The value of char c before swap is: " << c << std::endl;
//     std::cout << "The value of char d before swap is: " << d << std::endl;
//     swap(c, d);
//     std::cout << "The value of char c after swap is: " << c << std::endl;
//     std::cout << "The value of char d after swap is: " << d << std::endl;

//     std::cout << "The minimum value between c and d is: " << min(c, d) << std::endl;
//     std::cout << "The maximum value between c and d is: " << max(c, d) << std::endl;

//     std::cout << "The value of double da before swap is: " << da << std::endl;
//     std::cout << "The value of double db before swap is: " << db << std::endl;
//     swap(da, db);
//     std::cout << "The value of double da after swap is: " << da << std::endl;
//     std::cout << "The value of double db after swap is: " << db << std::endl;

//     std::cout << "The minimum value between da and db is: " << min(da, db) << std::endl;
//     std::cout << "The maximum value between da and db is: " << max(da, db) << std::endl;

// 	if (i == j)
// 		std::cout << "i == j" << std::endl;
// 	else
// 		std::cout << "i != j" << std::endl;

// 	if (i != j)
// 		std::cout << "i != j" << std::endl;
// 	else
// 		std::cout << "i == j" << std::endl;

// 	if (i >= j)
// 		std::cout << "i >= j" << std::endl;
// 	else
// 		std::cout << "i < j" << std::endl;

// 	if (i <= j)
// 		std::cout << "i <= j" << std::endl;
// 	else
// 		std::cout << "i > j" << std::endl;

// 	if (k == l)
// 		std::cout << "k == l" << std::endl;
// 	else
// 		std::cout << "k != l" << std::endl;

// 	if (k != l)
// 		std::cout << "k != l" << std::endl;
// 	else
// 		std::cout << "k == l" << std::endl;

// 	if (k >= l)
// 		std::cout << "k >= l" << std::endl;
// 	else
// 		std::cout << "k < l" << std::endl;

// 	if (k <= l)
// 		std::cout << "k <= l" << std::endl;
// 	else
// 		std::cout << "k > l" << std::endl;

// 	if (c == d)
// 		std::cout << "c == d" << std::endl;
// 	else
// 		std::cout << "c != d" << std::endl;

//     return 0;
// }
