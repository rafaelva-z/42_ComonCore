/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz <rvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:36:54 by rvaz              #+#    #+#             */
/*   Updated: 2024/05/21 13:28:23 by rvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"
# include <stdint.h>
# include <iostream>

class Data;

class Serializer
{
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
	private:
		Serializer();
		~Serializer();
		Serializer(Serializer &other);
		Serializer& operator=(Serializer &other);
};

#endif