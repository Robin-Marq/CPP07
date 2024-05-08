/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:31:08 by rmarquar          #+#    #+#             */
/*   Updated: 2024/05/03 10:44:20 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main()
{
		try {
		// test for the default constructor and the size() method
		Array<double> arr1(100);
		std::cout << "Size of arr1: " << arr1.size() << std::endl;

		// test for the parameterized constructor and the size() method
		Array<int> arr2(5);
		for (size_t i = 0; i < arr2.size(); ++i)
		{
			arr2[i] = i;
		}
		std::cout << "Contents of arr2: ";
		for (size_t i = 0; i < arr2.size(); ++i)
		{
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;

		// test for the copy constructor and the size() method
		Array<int> arr3 = arr2;
		std::cout << "Contents of arr3 (copied from arr2): ";
		for (size_t i = 0; i < arr3.size(); ++i)
		{
			std::cout << arr3[i] << " ";
		}
		std::cout << std::endl;

		// test for the assignment operator and the size() method
		std::cout << "Trying to access index 10: ";
		try
		{
			std::cout << arr2[10] << std::endl;
		} catch (const std::out_of_range& e)
		{
			std::cout << e.what() << std::endl;
		}

	} catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;


    // Array<int> numbers(MAX_VAL);
    // int* mirror = new int[MAX_VAL];
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     const int value = rand();
    //     numbers[i] = value;
    //     mirror[i] = value;
    // }
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[1] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;
    // return 0;
}