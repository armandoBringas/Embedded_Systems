/*
 * Armando Bringas
 * 12/9/2022
 * Reverse a hex nibble
 * Solution based on: https://www.codeproject.com/Questions/738421/Logic-for-reverse-an-integer-byte-by-byte
 */

#include <stdio.h>

void reverse_hex_nibble(int *hex_input);

int main(void)
{
    /* Testing nibbles */
    int input_1 = 0x12;
    int input_2 = 0x85;
    printf("Input nibble 1: 0x%x\n", input_1);
    printf("Input nibble 2; 0x%x\n", input_2);

    /* Invert nibbles */
    reverse_hex_nibble(&input_1);
    reverse_hex_nibble(&input_2);
    printf("Inverted nibble 1: 0x%x\n", input_1);
    printf("Inverted nibble 2: 0x%x\n", input_2);

    return 0;
}


void reverse_hex_nibble(int *hex_input_pntr)
{
    unsigned int rev_num = 0;

    while (*hex_input_pntr)
    {
        rev_num <<= 4;
        rev_num |= *hex_input_pntr & 0xF;
        *hex_input_pntr >>= 4;        
    }

    *hex_input_pntr = rev_num;
}

/*
void reverse_hex_nibble(int *hex_input_pntr)
{
    unsigned int rev_num = 0;
    
    printf("--------------------\n");
    while (*hex_input_pntr)
    {
        printf("rev_num: 0x%x\n", rev_num);
        printf("hex_input_pntr: 0x%x\n", *hex_input_pntr);
        rev_num <<= 4;
        printf("rev_num <<= 4: 0x%x\n", rev_num);
        rev_num |= *hex_input_pntr & 0xF;
        printf("rev_num |= *hex_input_pntr & 0xF: 0x%x\n", rev_num);
        *hex_input_pntr >>= 4;
        printf("*hex_input_pntr >>= 4: 0x%x\n", rev_num);
        printf("--------------------\n");
    }
    printf("--------------------\n");

    *hex_input_pntr = rev_num;
}
*/