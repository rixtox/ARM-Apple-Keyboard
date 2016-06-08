/* This is a template file for pins configuration */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include <stdbool.h>

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief Initialize all pins used in this example
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _PIN_MUX_H_  */
