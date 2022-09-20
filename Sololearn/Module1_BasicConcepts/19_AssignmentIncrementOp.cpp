// Assignment/Increment Operators

int main()
{

    // assignement operator "="
    // assignment operator "=" assigns the right side to the left side
    // ex. a=4 --> value 4 is assigned to a
    int x = 10; // right side (10) is assigned to left side (x)

    // shorthand operator
    x += 5; // equivalent with x=x+5;
    x -= 5; // equivalent with x=x-5;
    x *= 5; // equivalent with x=x*5;
    x /= 5; // equivalent with x=x/5;
    x %= 5; // ewuivalent wiyh x=x%5;

    // increment/decrement operator
    // increment operator is used to increase value by 1
    // decrement operator used to decrease value by 1

    x++; // equivalent with x=x+1;
    x--; // equivalent with x=x-1;

    // to forms of increment/decrement : prefix and postfix

    // prefix (preincrement/predecrement) - first increment the variable and after that use it
    ++x;
    --x;

    // postfix (postincrement/postdecrement) -first use the variable and after that use it
    x++;
    x--;

    int y = 1;
    int z = 1;
    x = y++; // x=1, y=2
    x = --z; // x=0, z=0

    return 0;
}