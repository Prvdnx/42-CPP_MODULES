/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:44:29 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 10:21:37 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name_;
        const       Weapon &weapon_;
    public:
        HumanA(std::string name, const Weapon &weapon);
        ~HumanA();
        void    attack() const;
};

#endif
