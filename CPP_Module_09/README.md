# CPP Module 09

STL containers.

## Exercises

### ex00 - Bitcoin Exchange
Program that evaluates Bitcoin prices from a database.

**Program:**
- Reads database file (date | value pairs)
- Reads input file with dates and amounts
- Calculates Bitcoin value for each date
- Uses `std::map` for date-value storage

**Concepts:** std::map, file parsing, date handling, data lookup

### ex01 - Reverse Polish Notation
RPN calculator implementation.

**Program:**
- Evaluates expressions in Reverse Polish Notation
- Example: "3 4 + 2 *" = 14
- Uses `std::stack` for operand storage

**Concepts:** std::stack, expression evaluation, postfix notation

### ex02 - PmergeMe
Sorting algorithm using merge-insert sort.

**Program:**
- Implements Ford-Johnson merge-insert sort algorithm
- Uses two different containers: `std::vector` and `std::deque`
- Compares performance between containers
- Handles large sequences of integers

**Concepts:** std::vector, std::deque, sorting algorithms, performance comparison

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **std::map**: Associative container for key-value pairs
- **std::stack**: LIFO container adapter
- **std::vector**: Dynamic array
- **std::deque**: Double-ended queue
- **Container Selection**: Choosing appropriate container for task
- **Algorithm Implementation**: Implementing complex algorithms with STL
- **Performance Analysis**: Comparing container performance
