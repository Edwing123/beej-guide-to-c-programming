/*
	Structs.
*/

#include <stdio.h>

// Declare a struct at the global scope in order for it to be
// globally availably.
struct car
{
	char *name;
	float price;
	int speed;
};

void display_car(struct car car)
{
	printf("Name: %s.\n", car.name);
	printf("Price: %f.\n", car.price);
	printf("Speed: %d.\n", car.speed);
}

int main(void)
{
	// We created a new data type, and its full name is [struct car].
	//
	// Let's declare variables whose type is the newly created type.
	struct car corolla;

	// corolla is uninitialized.
	//
	// We can access each field of the struct using
	// the dot operator.
	corolla.name = "Corolla";
	corolla.price = 4500.0;
	corolla.speed = 110;

	display_car(corolla);

	// Structs also have in-place initializers.
	struct car serpento = {"Serpento", 1200.99, 100};

	display_car(serpento);

	// Each value will be set to the corresponding member
	// based on the order they were defined.
	//
	// Also, initializers feature similar behaviour as arrays
	// when you omit values: they are zero out.

	// Alright, that's an improvements, but there's more:
	// we can explictly refer to member names in the initializer.
	// This leaves out the situation where we could place the values
	// in the wrong order.

	struct car honda = {
		.name = "Holda",
		.price = 8600.99,
		.speed = 140,
	};

	// Using this form, you can still omit values and the
	// compiler will zero them out.

	display_car(honda);
}
