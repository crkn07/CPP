/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/13 19:07:43 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &src);
		virtual ~Cat();

		Cat &operator=(const Cat &src);

		void	makeSound() const;
};

#endif