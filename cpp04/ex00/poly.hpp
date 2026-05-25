/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 02:29:22 by marvin            #+#    #+#             */
/*   Updated: 2026/05/05 02:29:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY_HPP
#define POLY_HPP

class Poly {
    protected:
        std::string _type;
    public:
        Poly();
        Poly(const Poly &other);
        Poly& operator=(const Poly& other);
        ~Poly();
};

#endif