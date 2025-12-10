# CPP Module 07

C++ templates.

## Exercises

### ex00 - Start with a few functions
Template functions for common operations.

**Template Functions:**
- `template<typename T> void swap(T &a, T &b)` - Swaps two values
- `template<typename T> T min(T a, T b)` - Returns minimum
- `template<typename T> T max(T a, T b)` - Returns maximum

**Concepts:** Function templates, template instantiation

### ex01 - Iter
Template function that applies a function to array elements.

**Template Function:**
- `template<typename T> void iter(T *array, size_t length, void (*f)(T &))`
- Applies function `f` to each element in array

**Concepts:** Function pointers with templates, generic array iteration

### ex02 - Array
Template class for type-safe arrays.

**Array Template Class:**
- `template<typename T> class Array`
- Dynamic array with size tracking
- Methods: `size()`, `operator[]` with bounds checking
- Implements Orthodox Canonical Form

**Concepts:** Class templates, template member functions, exception handling in templates

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **Function Templates**: Generic functions working with any type
- **Class Templates**: Generic classes (like STL containers)
- **Template Instantiation**: Compiler generating code for specific types
- **Template Specialization**: Custom behavior for specific types
- **Type Safety**: Compile-time type checking with templates
