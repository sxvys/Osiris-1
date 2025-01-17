#pragma once

#if IS_WIN32() || IS_WIN64()
#include "Windows/DynamicLibrary.h"

template <typename DynamicLibraryWrapper>
using DynamicLibrary = windows_platform::DynamicLibrary<DynamicLibraryWrapper>;
#elif IS_LINUX()
#include "Linux/SharedObject.h"

template <typename DynamicLibraryWrapper>
using DynamicLibrary = linux_platform::SharedObject<DynamicLibraryWrapper>;
#endif
