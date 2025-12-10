# CPP Module 00

Introduction to C++ basics: namespaces, classes, member functions, stdio streams, initialization lists, static, and const.

## Exercises

### ex00 - Megaphone
A simple program that converts command-line arguments to uppercase.

**Implementation:**
- Converts all arguments to uppercase using `std::toupper()`
- If no arguments provided, outputs: `* LOUD AND UNBEARABLE FEEDBACK NOISE *`
- Demonstrates basic I/O streams (`std::cout`), string manipulation

**Usage:**
```bash
make
./megaphone "shhhhh... I think the students are asleep..."
# Output: SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

### ex01 - My Awesome PhoneBook
A phonebook program that stores up to 8 contacts with ADD and SEARCH commands.

**Classes:**
- **Contact**: Stores contact information (first name, last name, nickname, phone number, darkest secret)
  - Private members: `phoneNumber`, `darkestSecret`, `firstName`, `lastName`, `nickname`
  - Public members: `index`, `set` (bool flag)
  - Methods: `add()`, `displayInfo()`, `emptyContact()`
  
- **PhoneBook**: Manages array of 8 contacts
  - Public array: `Contact cont[8]`
  - Methods: `Search()` for finding contacts by index

**Usage:**
```bash
make
./phoneBook
# Commands: ADD, SEARCH, EXIT
```

### ex02 - The Job Of Your Dreams
Implementation of an Account class for a banking system (GlobalBanksters United).

**Account Class:**
- **Static members** (class-wide):
  - `_nbAccounts`: Total number of accounts
  - `_totalAmount`: Total amount across all accounts
  - `_totalNbDeposits`: Total deposits made
  - `_totalNbWithdrawals`: Total withdrawals made
  
- **Instance members** (per account):
  - `_accountIndex`: Account index
  - `_amount`: Current balance
  - `_nbDeposits`: Number of deposits
  - `_nbWithdrawals`: Number of withdrawals

- **Methods:**
  - `makeDeposit(int deposit)`: Add funds
  - `makeWithdrawal(int withdrawal)`: Withdraw funds (returns bool)
  - `checkAmount()`: Get current balance
  - `displayStatus()`: Show account info
  - Static methods: `getNbAccounts()`, `getTotalAmount()`, etc.

**Usage:**
```bash
make
./account
# Runs test suite with predefined accounts
```

## Compilation
All exercises use C++98 standard with strict flags:
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## Key Concepts Learned
- **Classes and Objects**: Defining classes with public/private members
- **Constructors/Destructors**: Default and parameterized constructors
- **Member Functions**: const methods, static methods
- **Encapsulation**: Private data with public interfaces
- **Static Members**: Class-wide variables and functions
- **I/O Streams**: Using `std::cout`, `std::cin`
- **String Manipulation**: Working with `std::string`
