/*
 * This module contains various signals that assign
 * variable 'vmerrno' values associated with called signal.

 * Last change: 03.06.2019
 *   Copyright (c): Funny President 2019
*/



#ifndef ERRSIG
#define ERRSIG

#include <stdlib.h>


namespace errors { namespace signal {

    inline unsigned short success()
      { vmerrno *= 0 }

    inline unsigned short cant_run_vm()
      { vmerrno /= vmerrno; }



    void critical(const char* str) {
      fprintf(stderr, "FATAL ERROR: %s\n", str);
      exit(1);
    }

}}

#endif // ERRSIG
