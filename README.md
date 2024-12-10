# :desktop_computer: 42Heilbronn :de:

<p align="center">
  <img src="https://github.com/Tilek12/42-project-badges/blob/main/badges/cppe.png">
</p>

<h1 align="center">
 Project - CPP Module 03 :robot:
</h1>

<h2 align="center">
 :white_check_mark: 100/100
</h2>

## :clipboard: Project info: [subject](https://github.com/Tilek12/42HN-CPP_Module_03/blob/master/subject_cpp_03.pdf)

## :green_circle: **Exercise 00: Aaaaand... OPEN**

**Turn-in directory :**   | ex00/
|:---|:---|
**Files to turn in :**    | Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp
**Forbidden functions :** | None

First, you have to implement a class! How original!

It will be called **ClapTrap** and will have the following private attributes initialized to the values specified in brackets:
- Name, which is passed as parameter to a constructor
- Hit points (10), represent the health of the ClapTrap
- Energy points (10)
- Attack damage (0)

Add the following public member functions so the ClapTrap looks more realistic:
- void attack(const std::string& target);
- void takeDamage(unsigned int amount);
- void beRepaired(unsigned int amount);

When ClapTrack attacks, it causes its target to lose \<attack damage\> hit points. 
When ClapTrap repairs itself, it gets \<amount\> hit points back. Attacking and repairing cost 1 energy point each. 
Of course, ClapTrap can’t do anything if it has no hit points or energy points left.

In all of these member functions, you have to print a message to describe what happens. 
For example, **the attack()** function may display something like (of course, without the angle brackets):
    
    ClapTrap <name> attacks <target>, causing <damage> points of damage!

The constructors and destructor must also display a message, so your peer-evaluators can easily see they have been called.

Implement and turn in your own tests to ensure your code works as expected.

---------------------------------------------------

## :green_circle: **Exercise 01: Serena, my love!**

**Turn-in directory :**   | ex01/
|:---|:---|
**Files to turn in :**    | Files from previous exercise + ScavTrap.{h, hpp}, ScavTrap.cpp
**Forbidden functions :** | None

Because you can never have enough ClapTraps, you will now create a derived robot. 
It will be named ScavTrap and will inherit the constructors and destructor from Clap-Trap. 
However, its constructors, destructor and attack() will print different messages. 
After all, ClapTraps are aware of their individuality.

Note that proper construction/destruction chaining must be shown in your tests. 
When a ScavTrap is created, the program starts by building a ClapTrap. 
Destruction is in reverse order. Why?

**ScavTrap** will use the attributes of ClapTrap (update ClapTrap in consequence) and must initialize them to:
- Name, which is passed as parameter to a constructor
- Hit points (100), represent the health of the ClapTrap
- Energy points (50)
- Attack damage (20)

ScavTrap will also have its own special capacity:
    
    void guardGate();

This member function will display a message informing that ScavTrap is now in Gate keeper mode.

---------------------------------------------------

## :green_circle: **Exercise 02: Repetitive work**

**Turn-in directory :**   | ex02/
|:---|:---|
**Files to turn in :**    | Files from previous exercise + FragTrap.{h, hpp}, FragTrap.cpp
**Forbidden functions :** | None

Making ClapTraps is probably starting to get on your nerves.

Now, implement a **FragTrap** class that inherits from ClapTrap. It is very similar to ScavTrap. 
However, its construction and destruction messages must be different. 
Proper construction/destruction chaining must be shown in your tests. 
When a FragTrap is created, the program starts by building a ClapTrap. 
Destruction is in reverse order.

Same things for the attributes, but with different values this time:
- Name, which is passed as parameter to a constructor 
- Hit points (100), represent the health of the ClapTrap 
- Energy points (100)
- Attack damage (30)

FragTrap has a special capacity too:

    void highFivesGuys(void);
    
This member function displays a positive high fives request on the standard output.

---------------------------------------------------

## :star: **Exercise 03: Now it’s weird!**

**Turn-in directory :**   | ex03/
|:---|:---|
**Files to turn in :**    | Files from previous exercise + DiamondTrap.{h, hpp}, DiamondTrap.cpp
**Forbidden functions :** | None

In this exercise, you will create a monster: a ClapTrap that’s half FragTrap, half ScavTrap. 
It will be named **DiamondTrap**, and it will inherit from both the FragTrap AND the ScavTrap. This is so risky!

The DiamondTrap class will have a name private attribute. Give to this attribute exactly the same variable’s name 
(not talking about the robot’s name here) than the one in the ClapTrap base class.

To be more clear, here are two examples.

If ClapTrap’s variable is name, give the name name to the one of the DiamondTrap.

If ClapTrap’s variable is _name, give the name _name to the one of the DiamondTrap.

Its attributes and member functions will be picked from either one of its parent classes:
- Name, which is passed as parameter to a constructor
- ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
- Hit points (FragTrap)
- Energy points (ScavTrap)
- Attack damage (FragTrap)
- attack() (Scavtrap)

In addition to the special functions of both its parent classes, DiamondTrap will have its own special capacity:
    
    void whoAmI();
    
This member function will display both its name and its ClapTrap name.

Of course, the ClapTrap subobject of the DiamondTrap will be created once, and only once. Yes, there’s a trick.


