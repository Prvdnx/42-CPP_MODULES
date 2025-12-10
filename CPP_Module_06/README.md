# CPP Module 06

C++ casts.

## Exercises

### ex00 - Conversion of scalar types
Program that converts string literals to different scalar types.

**ScalarConverter:**
- Static method: `convert(const string &literal)`
- Converts to: char, int, float, double
- Handles special cases: nan, +inf, -inf, +inff, -inff
- Displays all possible conversions or "impossible"/"Non displayable"

**Concepts:** Type conversion, static_cast, detecting impossible conversions

### ex01 - Serialization
Pointer serialization and deserialization.

**Serializer Class:**
- `static uintptr_t serialize(Data *ptr)` - Converts pointer to unsigned int
- `static Data *deserialize(uintptr_t raw)` - Converts back to pointer
- Uses `reinterpret_cast`

**Concepts:** reinterpret_cast, pointer serialization, uintptr_t

### ex02 - Identify real type
Identifying actual type of polymorphic objects.

**Base Class:**
- Base class with virtual destructor

**Functions:**
- `Base *generate()` - Randomly creates A, B, or C
- `void identify(Base *p)` - Identifies type using dynamic_cast with pointer
- `void identify(Base &p)` - Identifies type using dynamic_cast with reference

**Concepts:** dynamic_cast, RTTI (Run-Time Type Information), type identification

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **static_cast**: Compile-time type conversion
- **reinterpret_cast**: Low-level reinterpretation of bit patterns
- **dynamic_cast**: Runtime type checking for polymorphic types
- **const_cast**: Adding/removing const qualifier (not used but part of C++ casts)
- **Type Safety**: Understanding when each cast is appropriate
- **RTTI**: Runtime type identification
