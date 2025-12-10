# CPP Module 03

Inheritance in C++.

## Exercises

### ex00 - Aaaaand... OPEN!
Base class ClapTrap with basic attributes and actions.

**ClapTrap Class:**
- Private: `name`, `hitPoints`, `energyPoints`, `attackDamage`
- Methods:
  - `attack(const string &target)` - Attack a target
  - `takeDamage(unsigned int amount)` - Take damage
  - `beRepaired(unsigned int amount)` - Repair hit points

**Concepts:** Basic class design, encapsulation

### ex01 - Serena, my love!
ScavTrap inherits from ClapTrap with different attributes.

**ScavTrap Class:**
- Inherits from ClapTrap: `class ScavTrap : public ClapTrap`
- Different initial values for hit points, energy, and damage
- New method: `guardGate()` - Special ability

**Concepts:** Public inheritance, constructor chaining, method overriding

### ex02 - Repetitive work
FragTrap inherits from ClapTrap with another set of attributes.

**FragTrap Class:**
- Inherits from ClapTrap: `class FragTrap : public ClapTrap`
- Different initial values
- New method: `highFivesGuys()` - Special ability

**Concepts:** Multiple derived classes from same base, polymorphism basics

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **Inheritance**: Creating derived classes from base classes
- **Public Inheritance**: `class Derived : public Base`
- **Constructor Chaining**: Calling base class constructors
- **Method Overriding**: Redefining base class methods
- **Access Specifiers**: protected vs private in inheritance
