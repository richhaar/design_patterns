# The Strategy Pattern

Run online with godbolt: [https://godbolt.org/z/KWvn8j7qs](https://godbolt.org/z/KWvn8j7qs.)
## Definition:

From *Head First Design Patterns*:

> The **Strategy Pattern** defines a family of algorithms, encapsulates each one, and makes them interchangeable.
> Strategy lets the algorithm vary independently of clients that use it.

## Example:

In this case we have created a `Duck` class which has `Fly()` and `Quack()` methods.

Rather than making `Fly()` abstract in `Duck()` we can provide a set of behaviours for both `Fly` and `Quack`
and use composition to create concrete subclasses of `Duck`.

## Design Principles:

* Identify the aspects of your application that vary and separate them from what stays the same.
* Program to an interface, not an implementation.
* Favour composition over inheritance.