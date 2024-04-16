/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz <rvaz@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:41:55 by rvaz              #+#    #+#             */
/*   Updated: 2024/04/15 18:49:02 by rvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Colors for better readability on terminal
	std::string cyan = "\033[96m";
	std::string red = "\033[0;31m";
	std::string blue = "\033[0;34m";
	std::string reset = "\033[0m";

	std::cout << cyan + "-Constructors-" + reset << std::endl;
	const Animal* NormalAnimal = new Animal();
	const Animal* CoolCat = new Cat();
	const Animal* CoolDog = new Dog();
	const WrongAnimal* WrongAnimal = new WrongCat();
	
	std::cout << cyan + "-Types-" + reset << std::endl;
	std::cout << NormalAnimal->getType() << " " << std::endl;
	std::cout << CoolCat->getType() << " " << std::endl;
	std::cout << CoolDog->getType() << " " << std::endl;
	std::cout << WrongAnimal->getType() << " " << std::endl;
	
	std::cout << cyan + "-Animal Sounds-" + reset << std::endl;
	NormalAnimal->makeSound();
	CoolCat->makeSound();
	CoolDog->makeSound();
	WrongAnimal->makeSound();

	std::cout << cyan + "-Destructors-" + reset << std::endl;
	delete NormalAnimal;
	delete CoolCat;
	delete CoolDog;
	delete WrongAnimal;
	
	return (0);
}