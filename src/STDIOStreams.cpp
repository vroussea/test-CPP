/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   STDIOStreams.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 15:27:27 by vroussea          #+#    #+#             */
/*   Updated: 2017/12/21 15:27:27 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void) {
    char buff[512];

    std::cout << "Hello World !" << std::endl;

    std::cout << "Entrer un mot : ";
    std::cin >> buff;
    std::cout << "Vous avez entré le mot : " << buff << std::endl;

    return 0;
}