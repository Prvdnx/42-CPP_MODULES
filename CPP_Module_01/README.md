# CPP Module 01

Memory allocation, pointers to members, references, and the switch statement.

## Exercises

### ex00 - BraiiiiiiinnnzzzZ
Introduction to heap vs stack allocation with Zombie class.

**Zombie Class:**
- Private: `name_` (string)
- Methods: `announce()` - prints "name: BraiiiiiiinnnzzzZ..."

**Functions:**
- `Zombie* newZombie(string name)` - Creates zombie on heap (must be deleted manually)
- `void randomChump(string name)` - Creates zombie on stack (auto-destroyed)

**Concepts:** Heap vs stack allocation, when to use `new` vs local variables

### ex01 - Moar brainz!
Creating arrays of objects with `zombieHorde`.

**Zombie Class:**
- Default constructor added
- `giveName(string nm)` - Sets zombie name after creation

**Function:**
- `Zombie* zombieHorde(int N, string name)` - Allocates N zombies on heap

**Concepts:** Array allocation with `new[]`, initialization of object arrays

### ex02 - HI THIS IS BRAIN
Demonstrating pointers and references.

**Program:**
- Creates a string variable
- Creates a pointer to the string
- Creates a reference to the string
- Prints memory addresses and values of all three

**Concepts:** Pointers vs references, memory addresses, dereferencing

### ex03 - Unnecessary violence
Weapon class with HumanA and HumanB demonstrating references vs pointers.

**Weapon Class:**
- Private: `type_` (string)
- Methods: `getType()` returns const reference, `setType(string)`

**HumanA:**
- Has Weapon reference (must be initialized in constructor)
- `attack()` method

**HumanB:**
- Has Weapon pointer (can be set later with `setWeapon()`)
- `attack()` method

**Concepts:** References (always valid) vs pointers (can be null), when to use each

### ex04 - Sed is for losers
File manipulation program that replaces strings in files.

**Program:**
- Takes 3 arguments: filename, string to find (s1), string to replace (s2)
- Reads file, replaces all occurrences of s1 with s2
- Writes result to filename.replace

**Concepts:** File I/O (`ifstream`, `ofstream`), string manipulation, `std::string::find()`

**Usage:**
```bash
./sed_is_for_losers file.txt "old" "new"
# Creates file.txt.replace with replacements
```

### ex05 - Harl 2.0
Complaint system using pointers to member functions.

**Harl Class:**
- Private methods: `debug()`, `info()`, `warning()`, `error()`
- Public: `complain(string level)` - calls appropriate method

**Implementation:**
- Uses array of function pointers to member functions
- Avoids long if/else chains

**Concepts:** Pointers to member functions, function dispatch

### ex06 - Harl filter
Extended Harl with switch statement for filtering complaint levels.

**Program:**
- Takes complaint level as argument
- Uses switch statement to filter and display complaints
- Shows all complaints at or above specified level

**Concepts:** Switch statement, fall-through behavior

## Compilation
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **Memory Management**: Heap (`new`/`delete`) vs stack allocation
- **Pointers**: Creating, dereferencing, pointers to objects
- **References**: Creating references, differences from pointers
- **Pointers vs References**: When to use each
- **File I/O**: Reading and writing files with streams
- **Member Function Pointers**: Advanced function dispatch
- **Switch Statement**: Control flow with fall-through
