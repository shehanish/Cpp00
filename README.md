# 📢 C++ Module 00 — Namespaces, Classes, Member Functions, I/O

> **42 Network | C++ Series — Module 00**
> The very first step into C++. This module introduces the **fundamental building blocks** of object-oriented programming: classes, encapsulation, member functions, access specifiers, and standard I/O — all under the strict **C++98** standard.

---

## 📂 Project Structure

```
cpp00/
├── ex00/   Megaphone    — argc/argv processing, std::toupper
└── ex01/   PhoneBook    — Classes, encapsulation, getters/setters, static arrays
```

---

## ⚡ Quick Build & Run

```bash
# Exercise 00
cd ex00 && make && ./megaphone hello world

# Exercise 01
cd ex01 && make && ./phonebook
```

---

## 0️⃣ Exercise 00 — Megaphone

### Goal
A simple program that converts all command-line arguments to **UPPERCASE** and prints them. If no arguments are given, it prints a loud noise message.

### How It Works
Iterates over every character of each `argv` string and applies `std::toupper()` via a `static_cast<char>` to convert it safely.

```cpp
std::cout << static_cast<char>(std::toupper(argv[i][j]));
```

### Behaviour
| Input | Output |
|---|---|
| `./megaphone hello world` | `HELLO WORLD` |
| `./megaphone "shhh... I think the students are asleep..."` | `SHHH... I THINK THE STUDENTS ARE ASLEEP...` |
| `./megaphone` *(no args)* | `* LOUD AND UNBEARABLE FEEDBACK NOISE *` |

### Key Concepts
- `argc` / `argv` argument handling
- Character-level iteration
- `std::toupper()` from `<cctype>`
- `static_cast<char>` for type-safe conversion

---

## 1️⃣ Exercise 01 — PhoneBook

### Goal
Implement a simple interactive phonebook that can store up to **8 contacts** in memory. The program loops waiting for three commands: `ADD`, `SEARCH`, and `EXIT`.

### Classes

#### `Contact`
Stores a single contact's information. All fields are **private**, accessible only via public **getters and setters** — a direct application of encapsulation.

```cpp
class Contact {
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkest_secret;
    public:
        // Getters
        std::string get_firstname() const;
        std::string get_lastname() const;
        std::string get_nickname() const;
        std::string get_phonenumber() const;
        std::string get_darkestsecret() const;
        // Setters
        void set_firstname(const std::string& name);
        // ...
};
```

#### `PhoneBook`
Manages an array of up to 8 contacts using a **circular buffer** (oldest entry is overwritten when full).

```cpp
class PhoneBook {
    private:
        Contact contacts[8];   // Static array — no dynamic allocation
        int     current_index; // Points to next write slot (wraps at 8)
        int     total_contacts; // Tracks how many contacts exist (max 8)
    public:
        void add_contacts();
        void search();
};
```

### Commands

| Command | Behaviour |
|---|---|
| `ADD` | Prompts for all 5 fields and stores the contact. If already at 8, overwrites the oldest. |
| `SEARCH` | Displays all contacts in a formatted 10-char-wide column table, then prompts for an index to view full details. |
| `EXIT` | Exits the program. Any other input prints an error. |

### Input Validation
| Field | Validation |
|---|---|
| First name | Cannot be empty — re-prompts until valid |
| Last name | Cannot be empty — re-prompts until valid |
| Nickname | Cannot be empty — re-prompts until valid |
| Phone number | Cannot be empty AND must contain **digits only** (`std::all_of` + `::isdigit`) |
| Darkest secret | Cannot be empty — re-prompts until valid |

### Display Formatting
The `SEARCH` command uses `formatColumn()` to display each field in a right-aligned, 10-character-wide column. Fields longer than 10 characters are **truncated with a dot**:

```cpp
std::string formatColumn(const std::string &input) {
    if (input.length() > 10)
        return (input.substr(0, 9) + ".");  // Truncate to 9 chars + "."
    else
        return std::string(10 - input.length(), ' ') + input; // Right-align
}
```

Example table output:
```
     Index|First Name| Last Name|  Nickname
         1|      John|       Doe|   johndoe
         2|Alexandrin|  Milligan| alexander.
```

### EOF Handling
If `std::getline()` returns false (e.g. `Ctrl+D` / EOF), the program exits cleanly:
```cpp
if (!std::getline(std::cin, input)) {
    std::cout << "EOF, Exiting the program!" << std::endl;
    break;
}
```

---

## 🛠️ Build Requirements

- **Standard:** C++98 (`-std=c++98`)
- **Flags:** `-Wall -Wextra -Werror`
- **Compiler:** `c++` / `g++` / `clang++`
- **Memory check:**
  ```bash
  valgrind --leak-check=full ./phonebook
  ```

---

## 📚 Key Takeaways

| Concept | What Was Learnt |
|---|---|
| **Classes & Objects** | Defining classes with private attributes and public methods |
| **Encapsulation** | Enforcing data hiding via getters/setters |
| **Static Arrays** | Using fixed-size `Contact contacts[8]` without dynamic allocation |
| **Circular Buffer** | Overwriting the oldest entry using modulo: `current_index = (current_index + 1) % 8` |
| **Input Validation** | Re-prompting on empty input; rejecting non-digit phone numbers |
| **String Formatting** | Right-aligning and truncating strings to fixed column widths |
| **I/O Streams** | Using `std::cin`, `std::cout`, `std::getline`, and handling EOF |

---

*Developed by **shkaruna** as part of the 42 Network C++ curriculum.*


