/*File Name: std_types.h
   Date:     15th Nov 2024
   Author:   Sourav Dey
   Description: Header file for standard types.
   */

# include <stdint.h>
# include <stddef.h>
/* Global conventions*/
# define FALSE                0
# define TRUE                 1





/*Typedefs*/
typedef uint8_t   boolean;




/*Structures*/
typedef struct
{
   /* data */
   uint8_t mask8_t;
   uint16_t mask16_t;
   uint32_t mask32_t;
}mask_types;





