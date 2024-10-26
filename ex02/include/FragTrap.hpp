/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:04:48 by gyong-si          #+#    #+#             */
/*   Updated: 2024/10/26 00:08:38 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:

	public:
		FragTrap();
		FragTrap(const std::string name);
		~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &a);
		void highFivesGuys(void);

};

#endif
