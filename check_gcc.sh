#!/usr/bin/env bash
set -euo pipefail

# Usage: ./check_gcc.sh [MSYS2_UCRT64_BIN]
# Default MSYS2 UCRT64 bin path: /c/msys64/ucrt64/bin

MSYS_BIN=${1:-/c/msys64/ucrt64/bin}

if [ ! -d "$MSYS_BIN" ]; then
  echo "ERROR: MSYS2 bin path not found: $MSYS_BIN"
  echo "Pass the correct path as the first argument, e.g.: ./check_gcc.sh /c/msys64/mingw64/bin"
  exit 2
fi

export PATH="$MSYS_BIN:$PATH"

echo "Using MSYS2 bin: $MSYS_BIN"

echo
echo "--- which gcc ---"
if which gcc >/dev/null 2>&1; then
  which gcc
else
  echo "gcc not found in PATH"
fi

echo
echo "--- gcc --version ---"
if gcc --version >/dev/null 2>&1; then
  gcc --version
else
  echo "gcc not runnable (maybe missing or not executable)"
fi

echo
echo "--- gcc -v (verbose) ---"
# run verbose and show exit code if non-zero (don't fail script on this)
gcc -v 2>&1 || true

echo
echo "--- uname -a ---"
uname -a || true

echo
echo "Done. If gcc was found and returned version info, try compiling like:"
echo "  gcc -v -Wall -Wextra -g /d/hulusio/algorithms/DSA/ds1/ds.c -o /d/hulusio/algorithms/DSA/ds1/ds.exe"
