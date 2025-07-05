#pragma once

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <charconv>
#include <disasm.h>
#include <file.h>
#include <filesystem>
#include <fstream>
#include <function.h>
#include <image.h>
#include <toml++/toml.hpp>
#include <unordered_map>
#include <unordered_set>
#include <xbox.h>
#include <xxhash.h>
#include <fmt/core.h>
#if defined(__x86_64__) || defined(_M_X64) || defined(_M_IX86)
#  include <x86intrin.h>
#else
#  define SIMDE_ENABLE_NATIVE_ALIASES
#  include <simde/x86/xmmintrin.h>
#  include <simde/x86/sse2.h>
#  include <simde/x86/ssse3.h>
#  include <simde/x86/sse4.1.h>
#endif
