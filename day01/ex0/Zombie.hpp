/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:55:03 by abelahce          #+#    #+#             */
/*   Updated: 2022/12/27 11:20:45 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private :
        std::string name;
    public :
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
};
void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif