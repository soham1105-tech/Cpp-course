### C++ Object-Oriented Programming (OOP) Concepts  

C++ is a powerful programming language that supports Object-Oriented Programming (OOP). The four main pillars of OOP in C++ are:  

1. Class & Object  
2. Inheritance  
3. Polymorphism  
4. Encapsulation  

Let’s explore each concept in detail.  

---

## 1. Class & Object  
- A class is a blueprint that defines the structure and behavior of an entity.  
- An object is an instance of a class, created to use its properties and methods.  

Key Points:  
- Classes contain data members (attributes) and member functions (methods).  
- Objects interact with each other by calling methods and accessing attributes.  
- Example: A `Car` class can have attributes like `brand` and methods like `honk()`.  

---

## 2. Inheritance  
- Inheritance allows a new class (derived/child class) to inherit properties and methods from an existing class (base/parent class).  
- Promotes code reusability and hierarchical classification.  

Types of Inheritance in C++:  
- Single Inheritance – One child class inherits from one parent.  
- Multiple Inheritance – A class inherits from multiple parents.  
- Multilevel Inheritance – A child class becomes a parent for another class.  
- Hierarchical Inheritance – Multiple child classes inherit from one parent.  
- Hybrid Inheritance – Combination of different inheritance types.  

Example:  
- A `Tesla` class can inherit from a `Vehicle` class, gaining its `drive()` method while adding new features like `autopilot()`.  

---

## 3. Polymorphism  
- Polymorphism means "many forms" – the ability of a function or object to behave differently in different contexts.  

Two Types of Polymorphism:  
1. Compile-Time Polymorphism (Static)  
   - Achieved via function overloading and operator overloading.  
   - Example: A `sum()` function can add integers or floats based on input.  

2. Run-Time Polymorphism (Dynamic)  
   - Achieved via function overriding using `virtual` functions.  
   - Example: An `Animal` class has a `sound()` method, but a `Dog` subclass overrides it to produce "Bark!" instead of a generic sound.  

---

## 4. Encapsulation  
- Encapsulation is the concept of bundling data (attributes) and methods (functions) that operate on the data into a single unit (class).  
- It restricts direct access to some components, promoting data security and controlled modification.  

How Encapsulation Works:  
- Private members – Only accessible within the class.  
- Public methods (getters/setters) – Used to read or modify private data safely.  

Example:  
- A `BankAccount` class keeps `balance` private and provides `deposit()` and `withdraw()` methods to modify it securely.  

---

### Summary of OOP in C++  
| Concept        | Description |  
|---------------|------------|  
| Class & Object | Blueprint (class) and its instance (object). |  
| Inheritance | Child classes inherit properties from parent classes. |  
| Polymorphism | Same function behaves differently in different contexts. |  
| Encapsulation | Data hiding and controlled access via methods. |  

These principles make C++ a flexible, efficient, and scalable language for software development. 🚀  
