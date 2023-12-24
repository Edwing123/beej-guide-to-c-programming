// Experimenting with function prototypes.

// Functions really need to be declared/defined before
// they get called in other places.
//
// For example, moving `noop` prototype below
// the definition of `foo` triggers a compiler error.
void noop(void);

void foo(void) {
    noop();
}


int main()
{
    foo();
}

void noop(void) {}
