## Access Control in Classes

C++ allows you to control the level of access that users of a class have to its members through **access specifiers**.

### Three Levels of Access:

1. **Public**  
   - Members can be accessed by **any code**
   - Public members constitute the **class interface**

2. **Private**  
   - Members can only be accessed by:
     - Other members of the same class
     - Friends of the class (to be discussed later)
   - Private members constitute the **class implementation**

3. **Protected**  
   - Similar to private, but with special rules for inheritance
   - Detailed discussion deferred until covering inheritance

### Key Concepts:
- The **interface** (public members) is what class users interact with
- The **implementation** (private members) is hidden from users
## Class Structure

A typical class in C++ follows this general form:

```cpp
class Widget  // The class is named Widget
{
public:
    // Public members (interface accessible to users)
    // - Typically contains member functions and type definitions
    // - Usually does NOT contain data members
    
private:
    // Private members (implementation details)
    // - Accessible only by class members and friends
    // - Typically contains:
    //   * Member functions (helper methods)
    //   * Type definitions
    //   * Data members (member variables)
};
