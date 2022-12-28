/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:30:24 by abelahce          #+#    #+#             */
/*   Updated: 2022/12/27 10:25:04 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PHONEBOOK CREATED SUCCESFULLY \n";
}
PhoneBook::~PhoneBook()
{
    std::cout << "PHONEBOOK DESTROYED SUCCESFULLY \n";
}

contact::contact()
{
    // std::cout << "object has been created \n";
    this->index = -1;
}

// void    PhoneBook::add_contact(PhoneBook contacts, int i)
// {
    
// }

std::string get_value(std::string prompt)
{
    std::string data;
    
    std::cout << prompt;
    std::getline(std::cin, data);
    if (std::cin.eof() || std::cin.fail()) // it checks the value that getline read from the cin
    {
        std::clearerr(stdin); // it gets a object of type (FILE *) which indecate to 
        std::cin.clear();
        std::cout << std::endl;
    }
    while (!data[0] && !std::cin.eof())
    {
        std::cout << prompt;
        std::getline(std::cin, data);
        if (std::cin.eof() || std::cin.fail()) // it checks the value that getline read from the cin
        {
            std::clearerr(stdin); // it gets a object of type (FILE *) which indecate to 
            std::cin.clear();
            std::cout << std::endl;
        }
    }
    return (data);
}

void    PhoneBook::add_contact(PhoneBook *ui, int i)
{
    std::string returned_value;
    returned_value = get_value("please enter your first name : ");
    ui->contacts[i].setfname(returned_value);
    returned_value = get_value("please enter your last name : ");
    ui->contacts[i].setlname(returned_value);
    returned_value = get_value("please enter your nickname : ");
    ui->contacts[i].setnickname(returned_value);
    returned_value = get_value("please enter your secret : ");
    ui->contacts[i].setsecret(returned_value);
    returned_value = get_value("please enter your phone number : ");
    ui->contacts[i].setnumber(returned_value);
    ui->contacts[i].setindex(i);
}

// void get_contacts(std::string fname, std::string lname , std::string nickname, std::string number, std::string secret, int i)
// {
    
// }

void    show_contacts(contact contacts)
{
    if (contacts.getindex() != -1)
    {
        std::cout << "   | ";
        std::cout << contacts.getindex() << " | ";
        if (contacts.getfname().length() > 9)
            std::cout << contacts.getfname().substr(0, 9) << "." << " | ";
        else
            std::cout << contacts.getfname().substr(0, 9) << " | ";
        if (contacts.getlname().length() > 9)
            std::cout << contacts.getlname().substr(0, 9) << "." << " | ";
        else
            std::cout << contacts.getlname().substr(0, 9) << " | ";
        if (contacts.getnickname().length() > 9)
            std::cout << contacts.getnickname().substr(0, 9) << "." << " | \n";
        else
            std::cout << contacts.getnickname().substr(0, 9) << " | \n";
    }
}

void    PhoneBook::get_contacts()
{
    int i;
    std::string indexo;

    i = 0;
    
    while (i < 8)
    {
        show_contacts(this->contacts[i]);
        i++;
    }
    std::cout << "please enter your seeked index : ";
    std::getline(std::cin, indexo);
    if (!std::cin.eof())
    {
        if (indexo[0] && (indexo[0] >= '0' && indexo[0] <= '9'))
        {

            i = std::stoi(indexo);
            if (i < 8 && i >= 0 && this->contacts[i].getindex() != -1)
                std::cout << this->contacts[i].getfname() << "\n" << this->contacts[i].getlname() << "\n" << this->contacts[i].getnickname() << "\n" << this->contacts[i].getsecret() << "\n" << this->contacts[i].getnumber() << "\n";
        }
    }
    else
        std::cout << "\n";
    return ;
}

void    contact::setindex(int i)
{
    std::cout << "this object got the index " << i << "\n";
    this->index = i;   
}

void    contact::setfname(std::string data)
{
    this->fname = data;   
}
void    contact::setlname(std::string data)
{
    this->lname = data;   
    
}
void    contact::setnickname(std::string data)
{
    this->nickname = data;
}
void    contact::setsecret(std::string data)
{
    this->secret = data;   
    
}
void    contact::setnumber(std::string data)
{
   this->number = data;
}

std::string    contact::getfname()
{
    return (this->fname);   
}
std::string    contact::getlname()
{
    return (this->lname);   
    
}
std::string    contact::getnickname()
{
    return (this->nickname);
}
std::string    contact::getsecret()
{
    return (this->secret);   
    
}
std::string    contact::getnumber()
{
   return (this->number);
}
int    contact::getindex()
{
   return (this->index);
}


std::string input(std::string c)
{
    // fflush(stdin);
    // std::cin.clear();
    std::string  temp;
	std::cout << c ;
	getline(std::cin, temp);
	return temp;   
}

int main(void)
{
    PhoneBook ui; // my class phonebook | contain 8 objects of the class contact
    int i;
    std::string command;

    i = -1;
    while (1)
    {
        
        std::cout << "please enter your command : ";
        std::getline(std::cin, command); // getting the command
        if (std::cin.eof() || std::cin.fail()) // it checks the value that getline read from the cin
        {
            std::clearerr(stdin); // it gets a object of type (FILE *) which indecate to 
            std::cin.clear();
            std::cout << std::endl;
        }
        else if (command == "ADD") // if it's the command ADD and 
        {
            i++;
            if (i > 7)
                i = 0;
            ui.add_contact(&ui, i);
        }
        else if (command == "SEARCH")
        {
            
            ui.get_contacts();
        }
        else if (command == "EXIT")
        {
            return (0);
        }
        else 
        {
            if (!std::cin.good())
            {
                break ;
            }
            std::cout << "UNsupported command" << std::endl;
        }
    }
}

// https://en.cppreference.com/w/cpp/standard_library
// standard librarys c++;