/*File Name: std_types.h
   Date:     15th Nov 2024
   Author:   Sourav Dey
   Description: Header file for standard types.
   */

/* Global conventions*/
# define UINT_8_T    uint8_t
# define UINT_16_T   uint16_t
# define UINT_32_T   uint32_t
# define UINT_64_T   uint64_t


typedef enum
{
  RESET = 0U,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0U,
  ENABLE = !DISABLE
} FunctionalState;

#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum
{
  SUCCESS = 0U,
  ERROR = !SUCCESS
} ErrorStatus;

