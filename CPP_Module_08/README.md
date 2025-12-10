# CPP Module 08

Templated containers, iterators, and algorithms.

## Exercises

### ex00 - Easy find
Template function to find element in container.

**Template Function:**
- `template<typename T> typename T::iterator easyfind(T &container, int value)`
- Finds first occurrence of value in container
- Throws exception if not found

**Concepts:** STL containers, iterators, `std::find` algorithm

### ex01 - Span
Container class that stores integers and finds spans.

**Span Class:**
- Stores N integers
- Methods:
  - `addNumber(int n)` - Adds number
  - `shortestSpan()` - Finds smallest difference between any two numbers
  - `longestSpan()` - Finds largest difference

**Concepts:** Custom containers, range operations, exception handling

### ex02 - Mutated abomination
Template stack container with iterator support.

**MutantStack Template:**
- `template<typename T> class MutantStack : public std::stack<T>`
- Adds iterator support to std::stack
- Implements `begin()` and `end()` methods

**Concepts:** Inheriting from STL containers, adding functionality, iterators

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **STL Containers**: vector, list, stack, etc.
- **Iterators**: begin(), end(), iterator types
- **Algorithms**: std::find, std::sort, etc.
- **Container Adapters**: Modifying existing containers
- **Template Inheritance**: Inheriting from template classes
