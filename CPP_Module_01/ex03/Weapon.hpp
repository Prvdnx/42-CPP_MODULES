/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:45:35 by ookamonu          #+#    #+#             */
/*   Updated: 2024/03/15 10:23:48 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string type_;
    public:
        Weapon(std::string type);
        ~Weapon();
        const   std::string &getType() const;
        void    setType(std::string type);

};

#endif
