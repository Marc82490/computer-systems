#include <stdio.h>

// define a pointer to an unsigned byte
typedef unsigned char *byte_pointer;

// traverse the location in meory given by a pointer, printing the hex values in hex
void show_bytes(byte_pointer start, size_t len)
{
        int i;
                for (i=0; i < len;i++)
                printf(" %.2x", start[i]);
        printf("\n");
}

void show_int(int x)
{
        show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
        show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
        show_bytes((byte_pointer) &x, sizeof(void *));
}

// print hex values for different types of data types
void test_show_bytes(int val)
{
        int ival = val;
        float fval = (float) ival;
        int *pval = &ival;
        show_int(ival);
        show_float(fval);
        show_pointer(pval);
}

void main(void)
{
        test_show_bytes(2147483647);
}