#ifndef LINUX_TYPE_WRAPPER
#define LINUX_TYPE_WRAPPER

// This file will be used as a catch all wrapper for wrapping Microsoft types with a Linux compatible type

#include <X11/X.h>
#include <cstdint>
#ifndef LPCWSTR
typedef const wchar_t* LPCWSTR;
#endif

#ifndef UINT
typedef unsigned int UINT;
#endif

#ifndef DWORD
typedef unsigned long DWORD;
#endif

#ifndef BOOL
typedef bool BOOL;
#endif

#ifndef HRESULT
typedef int32_t HRESULT; // This is a 32 bit value that has 'success' defined as 0 or greater
#endif

#ifndef HWND
typedef Window HWND; // The GUI window
#endif

#ifndef ULONGLONG
typedef unsigned long long ULONGLONG;
#endif

#endif