#include <stdio.h>
#include "reverse_hex_nibble.h"

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

void reverse_hex_nibble_DEBUG(int *hex_input_pntr)
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
