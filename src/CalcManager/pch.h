// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

// Windows headers define min/max macros.
// Disable it for project code.
#define NOMINMAX

#include <assert.h>
//#include <windows.h>
//#include <winerror.h>
#include <sstream>
#include <iostream>
#include <iterator>
#include <string>
#include <memory>
#include <vector>
#include <limits>
#include <list>
#include <regex>
#include <unordered_map>
//#include <intsafe.h>
#include <array>
//#include <ppltasks.h>

#define _In_
#define _Out_
#define _Inout_
#define _In_opt_
#define __in_opt
#define E_ACCESSDENIED 0x80070005
#define E_FAIL 0x80004005
#define E_INVALIDARG 0x80070057
#define E_OUTOFMEMORY 0x8007000E
#define E_POINTER 0x80004003
#define E_UNEXPECTED 0x8000FFFF
#define E_BOUNDS 0x8000000B
#define S_OK 0x0
#define S_FALSE 0x1
#define SUCCEEDED(hr) (((int32_t)(hr)) >= 0)
#define FAILED(hr) (((int32_t)(hr)) < 0)
#define SCODE_CODE(sc) ((sc) & 0xFFFF)
#ifdef __GNUC__
#define DECLSPEC_SELECTANY __attribute__((selectany))
#else
#define DECLSPEC_SELECTANY __declspec(selectany)
#endif
#define LOWORD(dw) ((WORD)(((DWORD_PTR)(dw)) & 0xffff))
#define HIWORD(dw) ((WORD)((((DWORD_PTR)(dw)) >> 16) & 0xffff))
#define LODWORD(qw) ((uint32_t)(qw))
#define HIDWORD(qw) ((uint32_t)(((qw) >> 32) & 0xffffffff))
