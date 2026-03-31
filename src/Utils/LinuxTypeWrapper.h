#ifndef LINUX_TYPE_WRAPPER
#define LINUX_TYPE_WRAPPER

// This file will be used as a catch all wrapper for wrapping windows type names with whatever the underlying type is

#include <cstdint>
#ifndef LPCWSTR
typedef const wchar_t* LPCWSTR;
#endif

#ifndef UINT
typedef unsigned int UINT;
#endif

#ifndef DWORD
typedef uint64_t DWORD;
#endif

#ifndef BOOL
typedef bool BOOL;
#endif

#endif