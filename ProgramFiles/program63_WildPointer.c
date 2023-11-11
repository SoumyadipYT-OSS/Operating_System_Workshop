/*
Uninitialized pointers are known as wild pointers because they point to some arbitrary memory location and may cause a program to crash or behave unexpectedly.

Example of Wild Pointers
In the below code, p is a wild pointer.
*/

int main()
{
    /* wild pointer */
    int* p;
    /* Some unknown memory location is being corrupted.
    This should never be done. */
    *p = 12;
}
