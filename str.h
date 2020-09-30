/*--------------------------------------------------------------------*/
/* str.h                                                              */
/* Author: Hien Pham                                                  */
/*--------------------------------------------------------------------*/

#include <stddef.h>

#ifndef STR_INCLUDED
#define STR_INCLUDED

/*--------------------------------------------------------------------*/

/* Return the length of the string                                    */

size_t Str_getLength(const char *pcSrc);
/* size_t Str_getLength(const char pcSrc[]); */

/*--------------------------------------------------------------------*/

/* Copy a string to a specified location. Return the address of the   */
/* first character of the copied string                               */

char *Str_copy(char *pcDest, const char *pcSrc);
/* char *Str_copy(char pcDest[], const char pcSrc[]); */

/*--------------------------------------------------------------------*/

/* Append a string to a specified string. Return the address of the   */
/* first character of the destination string.                         */

char *Str_concat(char *pcDest, const char *pcSrc);
/* char *Str_concat(char pcDest[], const char pcSrc[]); */

/*--------------------------------------------------------------------*/

/* Compare two strings. Returns an integer less than, equal to, or    */
/* greater than zero if pcS1 is found, respectively, to be less than, */
/* to match, or be greater than pcS2.                                 */

int Str_compare(const char *pcS1, const char *pcS2);
/* int Str_compare(const char pcS1[], const char pcS2[]); */

#endif
