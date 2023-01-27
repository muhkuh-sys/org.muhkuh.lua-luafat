#ifndef __PLATFORM_H__
#define __PLATFORM_H__

/* Do not provide a local "strupr" on MinGW platforms. It is already there. */
#if !defined(__MINGW32__) && !defined(__MINGW64__)
void strupr(char *pszString);
#endif

#endif  /* __PLATFORM_H__ */
