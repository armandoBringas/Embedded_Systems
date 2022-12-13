#include <stdio.h>
#include "reverse_hex_nibble.h"

int main(void)
{
    /* Testing nibbles */
    int input_1 = 0x12;
    int input_2 = 0x85;
    printf("Input nibble 1: 0x%x\n", input_1);
    printf("Input nibble 2: 0x%x\n", input_2);

    /* Invert nibbles */
    reverse_hex_nibble(&input_1);
    reverse_hex_nibble(&input_2);
    printf("Inverted nibble 1: 0x%x\n", input_1);
    printf("Inverted nibble 2: 0x%x\n", input_2);

    return 0;
}