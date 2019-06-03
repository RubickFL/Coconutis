/*
 * This module contains various signals that assign
 * variable 'vmerrno' values associated with called signal.

 * Last change: 03.06.2019
 *   Copyright (c): RubcikFL 2019
*/



#ifndef ERRSIG
#define ERRSIG

#include <stdlib.h>


namespace errors { namespace signal {

    const unsigned short errtypes[] = {
      0, // success
      1  // Can't run VM
    };


    inline unsigned short success() {
      vmerrno = errtypes[0];
    }

    inline unsigned short cant_run_vm() {
      vmerrno = errtypes[1];
    }



    void critical(const char* str) {
      fprintf(stderr, "FATAL ERROR: %s\n", str);
      exit(1);
    }
}}

#endif // ERRSIG
