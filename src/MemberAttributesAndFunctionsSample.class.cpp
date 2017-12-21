/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemberAttributesAndFunctionsSample.class.cpp       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 17:04:21 by vroussea          #+#    #+#             */
/*   Updated: 2017/12/21 17:04:21 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MemberAttributesAndFunctionsSample.class.h"
#include <iostream>

MemberAttributesAndFunctionsSample::MemberAttributesAndFunctionsSample(void) {
    std::cout << "Constructor called" << std::endl;
    return;
}

MemberAttributesAndFunctionsSample::~MemberAttributesAndFunctionsSample(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

void    MemberAttributesAndFunctionsSample::bar(void) {
    std::cout << "Member function bar called" << std::endl;
    return;
}
