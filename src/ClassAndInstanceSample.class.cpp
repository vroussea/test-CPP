/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAndInstance.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 16:25:11 by vroussea          #+#    #+#             */
/*   Updated: 2017/12/21 16:25:11 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAndInstanceSample.class.h"
#include <iostream>

ClassAndInstanceSample::ClassAndInstanceSample(void) {
    std::cout << "Constructor called" << std::endl;
    return;
}

ClassAndInstanceSample::~ClassAndInstanceSample(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}
