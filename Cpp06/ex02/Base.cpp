/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:08:32 by maricard          #+#    #+#             */
/*   Updated: 2023/09/19 17:35:07 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	//std::cout << "Base destructor called" << std::endl;
}

Base* generate(void)
{
	srand(time(0));
	int i = rand() % 3;
	
	if (i == 0)
	{
		std::cout << "Generated class : " RED "A" RESET << std::endl;
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "Generated class : " RED "B" RESET << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Generated class : " RED "C" RESET << std::endl;
		return (new C);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Identified class: " GREEN "A" RESET << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Identified class: " GREEN "B" RESET << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Identified class: " GREEN "C" RESET << std::endl;
	else
		std::cout << "Class not found" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
		(void)a;
        std::cout << "Try and catch: " GREEN "A" RESET << std::endl;
    }
    catch (std::exception& d)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
			std::cout << "Try and catch: " GREEN "B" RESET << std::endl;
        }
        catch (std::exception& d)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
				std::cout << "Try and catch: " GREEN "C" RESET << std::endl;
            }
            catch (std::exception& d)
            {
                std::cout << "Class not found" << std::endl;
            }
        }
    }
}
