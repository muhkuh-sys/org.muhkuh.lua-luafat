#include <string.h>
#include <ctype.h>

#include "platform.h"

/* Do not provide a local "strupr" on MinGW platforms. It is already there. */
#if !defined(__MINGW32__) && !defined(__MINGW64__)
void strupr(char *pszString)
{
	if( pszString!=NULL )
	{
		while( *pszString!=0 )
		{
			*pszString = toupper(*pszString);
			++pszString;
		}
	}
}
#endif
