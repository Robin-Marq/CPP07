/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:07:35 by rmarquar          #+#    #+#             */
/*   Updated: 2024/04/30 14:30:53 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	iter(tab, 5, print);

	float tab2[] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f};
	iter(tab2, 5, print);

	std::string tab3[] = {"hello", "world", "one", "two", "three"};
	iter(tab3, 5, print);

	double tab4[] = {0.0123456, 1.1123456, 2.223456, 3.3456789, 4.456789};
	iter(tab4, 5, print);
	return 0;
}
