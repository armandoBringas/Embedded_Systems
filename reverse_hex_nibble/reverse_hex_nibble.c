/*
 * Armando Bringas
 * 12/9/2022
 * Reverse a hex nibble
 */

#include <stdio.h>

int reverse_hex_nibble(int hex_input);

int main(void)
{
    /* Testing variables */
    int input_1 = 0x12;
    int input_2 = 0x85;

    /* Print original variables */
    printf("Input nibble 1: 0x%x\n", input_1);
    printf("Input nibble 2; 0x%x\n", input_2);

    /* Swap function calling */
    int inverted_input1 = 0;
    int inverted_input2 = 0;
    inverted_input1 = reverse_hex_nibble(input_1);
    inverted_input2 = reverse_hex_nibble(input_2);

    /* Print swapped numbers*/
    printf("Input nibble 1: 0x%x\n", inverted_input1);
    printf("Input nibble 2: 0x%x\n", inverted_input2);

    return 0;
}

int reverse_hex_nibble(int hex_input)
{
    unsigned int rev_num = 0;
    while (hex_input)
    {
        rev_num <<= 4;
        rev_num |= hex_input & 0xF;
        hex_input >>= 4;
    }

  return rev_num;
}