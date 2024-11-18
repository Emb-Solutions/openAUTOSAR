/*File Name: std_types.h
   Date:     15th Nov 2024
   Author:   Sourav Dey
   Description: Header file for standard types.
   */

# include <stdint.h>

/* Global conventions*/
# define UINT_8_T    uint8_t
# define UINT_16_T   uint16_t
# define UINT_32_T   uint32_t
# define UINT_64_T   uint64_t

typedef struct
{
   /* data */
   uint8_t mask8_t;
   uint16_t mask16_t;
   uint32_t mask32_t;
}mask_types;

