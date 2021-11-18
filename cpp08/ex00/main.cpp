/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanykim <chanykim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:33:30 by chanykim          #+#    #+#             */
/*   Updated: 2021/07/06 21:08:25 by chanykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    for (int i = 0 ; i < 10; i++)
        vec.push_back(i);
    try
    {
        std::cout << "index find: " << easyfind(vec, 4) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of range." << '\n';
    }
    try
    {
        std::cout << "index find: " << easyfind(vec, 2) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of range." << '\n';
    }
    try
    {
        std::cout << easyfind(vec, 42) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of range." << '\n';
    }

    std::list<int>  lst;
    for (int i = 0 ; i < 10; i++)
        lst.push_back(i);
    try
    {
        std::cout << "index find: " << easyfind(lst, 4) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of range." << '\n';
    }
    try
    {
        std::cout << "index find: " << easyfind(lst, 2) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of range." << '\n';
    }
    try
    {
        std::cout << easyfind(lst, 42) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "out of range." << '\n';
    }
    return 0;
}