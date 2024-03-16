/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:47:03 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 10:29:40 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string     name_;
        const Weapon    *weapon_;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(const Weapon &weapon);
        void    attack() const;
};

#endif