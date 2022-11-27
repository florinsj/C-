// JavaTPoint
// Storage classes = visibility and scope of a variable

// Register
// keyword -- "register"
// "register" allocates memory in register not in Ram; register memory faster;
// we can't get register address
// recommended to use register with counter variables for quick access
// lifetime -- block
// visibility -- local

int main()
{
    register int conter = 0;
    return 0;
}