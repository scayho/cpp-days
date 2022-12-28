/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:15:52 by abelahce          #+#    #+#             */
/*   Updated: 2022/12/27 08:56:20 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class contact{
    private :
        std::string fname;
        std::string lname;
        std::string nickname;
        std::string secret;
        std::string number;
        int         index;
    public :
        contact();
        void    setfname(std::string data);
        void    setlname(std::string data);
        void    setnickname(std::string data);
        void    setsecret(std::string data);
        void    setnumber(std::string data);
        void    setindex(int i);
        std::string    getfname();
        std::string    getlname();
        std::string    getnickname();
        std::string    getsecret();
        std::string    getnumber();
        int            getindex();
};

class PhoneBook
{
    private :
        contact contacts[8];
    public :
        PhoneBook();
        void add_contact(PhoneBook *ui, int i);
        void get_contacts();
        ~PhoneBook();
};

#endif