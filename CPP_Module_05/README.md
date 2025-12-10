# CPP Module 05

Repetition and Exceptions.

## Exercises

### ex00 - Mommy, when I grow up, I want to be a bureaucrat!
Introduction to exceptions with Bureaucrat class.

**Bureaucrat Class:**
- Private: `const string _name`, `int _grade` (1-150, 1 is highest)
- Methods:
  - `incrementGrade()` - Decrease grade number (increase rank)
  - `decrementGrade()` - Increase grade number (decrease rank)
  - `getName()`, `getGrade()`

**Custom Exceptions:**
- `class GradeTooHighException : public std::exception`
- `class GradeTooLowException : public std::exception`
- Both override `what()` method

**Concepts:** Exception classes, throwing/catching exceptions, `std::exception`

### ex01 - Form up, maggots!
Adding Form class that can be signed by Bureaucrats.

**Form Class:**
- Private: `const string _name`, `bool _isSigned`, `const int _signGrade`, `const int _execGrade`
- Methods:
  - `beSigned(Bureaucrat &bureaucrat)` - Sign if grade sufficient
  - Getters for all attributes

**Exceptions:**
- `GradeTooHighException`
- `GradeTooLowException`

**Concepts:** Forward declarations, exception handling in methods

### ex02 - No, you need form 28B, not 28C...
Abstract Form base class with concrete form types.

**Abstract AForm:**
- Pure virtual: `execute()` method
- Concrete forms: ShrubberyCreationForm, RobotomyRequestForm, PresidentialPardonForm

**Concepts:** Abstract base classes for forms, polymorphic form execution

### ex03 - At least this beats coffee-making
Intern class that creates forms.

**Intern Class:**
- `makeForm(string formName, string target)` - Factory method

**Concepts:** Factory pattern, dynamic form creation

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **Exceptions**: Creating and throwing custom exceptions
- **Exception Hierarchy**: Inheriting from `std::exception`
- **Try-Catch Blocks**: Handling exceptions
- **Exception Safety**: Writing exception-safe code
- **Forward Declarations**: Resolving circular dependencies
- **Factory Pattern**: Creating objects without specifying exact class
