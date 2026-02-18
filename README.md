# CPP Module 03 — Inheritance

This project is part of the 42 School C++ curriculum. It focuses on **inheritance** in C++98, demonstrating how to build a class hierarchy using public inheritance, constructor/destructor chaining, and the Orthodox Canonical Form.

## Class Hierarchy

```
ClapTrap  (base class)
├── ScavTrap  (inherits from ClapTrap)
└── FragTrap  (inherits from ClapTrap)
```

## Exercises

### ex00 — ClapTrap

Implements the base class `ClapTrap` with:

| Attribute      | Default Value |
|----------------|---------------|
| Hit points     | 10            |
| Energy points  | 10            |
| Attack damage  | 0             |

**Member functions:**
- `attack(target)` — Attacks a target, costs 1 energy point.
- `takeDamage(amount)` — Reduces hit points by `amount`.
- `beRepaired(amount)` — Recovers `amount` hit points, costs 1 energy point.

A ClapTrap cannot attack or repair itself if it has 0 hit points or 0 energy points.

### ex01 — ScavTrap

`ScavTrap` inherits from `ClapTrap` and overrides some default values:

| Attribute      | Value |
|----------------|-------|
| Hit points     | 100   |
| Energy points  | 50    |
| Attack damage  | 20    |

**Additional member function:**
- `guardGate()` — Displays that the ScavTrap has entered Gate Keeper mode.

`ScavTrap` also overrides `attack()` to print messages specific to ScavTrap.

### ex02 — FragTrap

`FragTrap` inherits from `ClapTrap` with its own default values:

| Attribute      | Value |
|----------------|-------|
| Hit points     | 100   |
| Energy points  | 100   |
| Attack damage  | 30    |

**Additional member function:**
- `highFivesGuys()` — Requests a positive high five.

## Building

Each exercise has its own `Makefile`. From inside any exercise directory:

```bash
make        # Build the executable
make clean  # Remove object files
make fclean # Remove object files and the executable
make re     # Rebuild from scratch
```

## Key Concepts

- **Orthodox Canonical Form**: Every class implements a default constructor, copy constructor, copy assignment operator, and destructor.
- **Public Inheritance**: `ScavTrap` and `FragTrap` inherit publicly from `ClapTrap`, reusing its attributes and methods.
- **Constructor/Destructor Chaining**: When a derived object is created, the base class constructor runs first; when destroyed, the derived destructor runs before the base destructor.
- **Protected Members**: In ex01 and ex02, `ClapTrap`'s attributes are `protected` so that derived classes can access them directly.
