#  Design patterns



## STRATEGY PATTERN

### Definition : defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algoroithm vary indepndently from clients that use it


- Take what varries and encapsualte it so it won't affect the rest of your code
- Program to an interface not an implementation -> means program to a supertype
    - the declared type of the variables should be a supertype, usually an abstract class or interface, so that the objects assigned to those variables can be of any concrete implementations of the supertype, which manes the class declaring them doesn't have to know about the actual object types
    - Duck delegates its flying and quacking behavior, instead of using quacking and flying methods defined in the Duck class
- Favor composition over inheritance -> let's you change behavior at runtime








