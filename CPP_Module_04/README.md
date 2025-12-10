# CPP Module 04

Subtype polymorphism, abstract classes, and interfaces.

## Exercises

### ex00 - Polymorphism
Introduction to polymorphism with Animal base class.

**Animal Class:**
- Protected: `type` (string)
- Virtual method: `virtual void makeSound() const`
- Virtual destructor: `virtual ~Animal()`

**Derived Classes:**
- **Dog**: Inherits from Animal, overrides `makeSound()`
- **Cat**: Inherits from Animal, overrides `makeSound()`

**Concepts:** Virtual functions, polymorphism, virtual destructors

### ex01 - I don't want to set the world on fire
Adding Brain class for deep copy implementation.

**Brain Class:**
- Private: `string *ideas` (array of 100 ideas)
- Methods: `getIdea(int index)`, `setIdea(string idea, int index)`
- Implements deep copy in copy constructor and assignment operator

**Updated Classes:**
- **Dog**: Contains `Brain *brain` member
- **Cat**: Contains `Brain *brain` member
- Both implement deep copy to avoid shallow copy issues

**Concepts:** Deep copy vs shallow copy, composition, memory management

### ex02 - Abstract class
Making Animal an abstract class.

**Abstract Animal:**
- Pure virtual function: `virtual void makeSound() const = 0`
- Cannot be instantiated directly
- Forces derived classes to implement `makeSound()`

**Concepts:** Abstract classes, pure virtual functions, interfaces

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **Polymorphism**: Using base class pointers for derived objects
- **Virtual Functions**: Runtime polymorphism
- **Virtual Destructors**: Proper cleanup in inheritance hierarchies
- **Deep Copy**: Properly copying dynamically allocated members
- **Abstract Classes**: Classes with pure virtual functions
- **Interfaces**: Abstract base classes defining contracts
