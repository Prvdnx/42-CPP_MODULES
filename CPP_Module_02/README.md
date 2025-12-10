# CPP Module 02

Ad-hoc polymorphism, operator overloading, and Orthodox Canonical class form.

## Exercises

### ex00 - My First Class in Orthodox Canonical Form
Introduction to the Orthodox Canonical Form with a Fixed-point number class.

**Fixed Class:**
- Private: `_value` (int), `static const _frac_bits = 8`
- **Orthodox Canonical Form** (4 required methods):
  1. Default constructor
  2. Copy constructor: `Fixed(const Fixed &other)`
  3. Copy assignment operator: `Fixed &operator=(const Fixed &other)`
  4. Destructor

- Methods: `getRawBits()`, `setRawBits(int raw)`

**Concepts:** Orthodox Canonical Form, fixed-point arithmetic basics

### ex01 - Towards a more useful fixed-point number class
Adding constructors and conversion methods.

**New Constructors:**
- `Fixed(int const value)` - Converts int to fixed-point
- `Fixed(float const value)` - Converts float to fixed-point

**Conversion Methods:**
- `float toFloat() const` - Converts to float
- `int toInt() const` - Converts to int

**Operator Overload:**
- `operator<<` - Insertion operator for output streams

**Concepts:** Type conversions, stream insertion operator overloading

### ex02 - Now we're talking
Full operator overloading implementation.

**Comparison Operators:**
- `operator>`, `operator<`, `operator>=`, `operator<=`
- `operator==`, `operator!=`

**Arithmetic Operators:**
- `operator+`, `operator-`, `operator*`, `operator/`

**Increment/Decrement:**
- `operator++()` - Pre-increment
- `operator++(int)` - Post-increment
- `operator--()` - Pre-decrement
- `operator--(int)` - Post-decrement

**Static Methods:**
- `static Fixed &min(Fixed &a, Fixed &b)`
- `static const Fixed &min(const Fixed &a, const Fixed &b)`
- `static Fixed &max(Fixed &a, Fixed &b)`
- `static const Fixed &max(const Fixed &a, const Fixed &b)`

**Concepts:** Full operator overloading, pre/post increment difference, static member functions

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **Orthodox Canonical Form**: The 4 required methods for proper class design
- **Operator Overloading**: Redefining operators for custom types
- **Fixed-Point Arithmetic**: Alternative to floating-point
- **Type Conversions**: Converting between int, float, and custom types
- **Pre vs Post Increment**: Difference between `++i` and `i++`
- **Stream Operators**: Overloading `<<` for custom output
- **Const Correctness**: Const methods and const overloads
