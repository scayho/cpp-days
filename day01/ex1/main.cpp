/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:33:52 by abelahce          #+#    #+#             */
/*   Updated: 2022/12/28 15:40:27 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int i = 0;
    Zombie* z;
    z = zombieHorde(9, "motapha");
    while (i < 9)
    {
        z[i].announce();
        i++;
    }
    delete [] z;
}