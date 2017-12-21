/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemberAttributesAndFunctions.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 17:02:17 by vroussea          #+#    #+#             */
/*   Updated: 2017/12/21 17:02:17 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MemberAttributesAndFunctionsSample.class.h"
#include <iostream>

int main(void) {

    MemberAttributesAndFunctionsSample instance;

    instance.foo = 42;
    std::cout << "instance foo : " << instance.foo << std::endl;

    instance.bar();

    return 0;
}