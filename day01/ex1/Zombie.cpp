/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:33:59 by abelahce          #+#    #+#             */
/*   Updated: 2022/12/28 15:35:39 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "zombie created without a name \n";
}
void    Zombie::nameZombie(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie(void)
{
    std::cout << "ZOMBIE DIED SUCCESSFULLY \n";
}