/*
 * This module contains numbers of errors of the virtual machine,
 *  their text description and interface for accessing them.

 * Global vmerrno variable contains last VM operation error code (0 is success).
 * Vmerrors array contains string implementation of any VM error code.

 * Error_str method returns pointer to text description of the last VM error,
 * Perror function prints last error text in standart error output (terminal usually).

 * Last change: 03.06.2019
 *   Copyright (c): RubickFL 2019
*/



#ifndef PVMERROR
#define PVMERROR

#include <stdio.h>


static unsigned short vmerrno = 0;

namespace errors { namespace str {

  static const char* strs[] = {
    "Success",
    "Can't run Coconutis virtual machine"
  };


  const char* error_str() {
    return strs[vmerrno];
  }

  void perror() {
    fprintf(stderr, "%s\n", error_str());
    return;
  }
}}


#endif // PVMERROR
