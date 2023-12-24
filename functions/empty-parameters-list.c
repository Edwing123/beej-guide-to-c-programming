// The author advises to using `void` to indicate that a function
// takes no parameters.
//
// For function declarations, not using void and having an empty
// parameter list is implictly considered to be using `void`:
// 
// > While the spec spells out that the behavior in this instance
// > is as-if you’d indicated void (C11 §6.7.6.3¶14), the void type
// > is there for a reason. Use it.

void foo() // A `void` is missing, and it's recommended to be used!
{

}

void bar(void) // Good.
{

}

// For function prototypes, not adding `void` means something different,
// and the following two declarations have different semantics.

void baz();
// void baz(void);

// From the author: Leaving `void` out of the prototype indicates
// to the compiler that there is no additional information about
// the parameters to the function. It effectively turns off all
// that type checking.
// 
// By reading answers from StackOverflow, I understand that a prototype
// without `void` tells the compiler that this function could accept any
// parameters list.
//

// This works if we don't use `void` in the prototype.
void baz(int x)
{
    x++;
}

int main(void)
{
    baz(123);
}