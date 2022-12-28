/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:34:05 by abelahce          #+#    #+#             */
/*   Updated: 2022/12/28 15:34:01 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include <iostream>

class Zombie{
    private :
        std::string name;
    public :
        Zombie();
        void nameZombie(std::string name);
        ~Zombie(void);
        void    announce(void);
};
Zombie* zombieHorde(int N, std::string name);

#endif