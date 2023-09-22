/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:53:26 by maricard          #+#    #+#             */
/*   Updated: 2023/09/22 17:16:14 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	
	mstack.push(5);
	mstack.push(17);
	mstack.print();
	
	mstack.pop();
	mstack.print();
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.print();

	MutantStack<int> tmp(mstack);

	std::cout << std::endl << YELLOW "copied stack" << std::endl;
	mstack.print();
	
	return 0;
}
