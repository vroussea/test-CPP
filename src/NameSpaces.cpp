/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 12:12:16 by vroussea          #+#    #+#             */
/*   Updated: 2017/12/21 12:12:16 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int val = 0;

int f(void) {
    return 1;
}

namespace Foo {
    int val = 2;

    int f(void) {
        return 3;
    }
}

namespace Bar {
    int val = 4;

    int f(void) {
        return 5;
    }
}

namespace Boo = Bar;

int main (void) {
    std::cout << "val = " << val << std::endl;
    std::cout << "f = " << f() << std::endl;

    std::cout << "::val = " << ::val << std::endl;
    std::cout << "::f = " << ::f() << std::endl;

    std::cout << "foo::val = " << Foo::val << std::endl;
    std::cout << "foo::f = " << Foo::f() << std::endl;

    std::cout << "bar::val = " << Bar::val << std::endl;
    std::cout << "bar::f = " << Bar::f() << std::endl;

    std::cout << "boo::val = " << Boo::val << std::endl;
    std::cout << "boo::f = " << Boo::f() << std::endl;

    return 0;
}