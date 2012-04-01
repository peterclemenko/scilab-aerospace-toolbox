/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2011-2011 - DIGITEO - Clément DAVID
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include <aerospace.h>
#include <scicos_block4.h>

#include "stack-c.h" /* Provide functions to access to the memory of Scilab */
#include "call_scilab.h" /* Provide functions to call Scilab engine */


void block_reynolds_number(scicos_block* block, scicos_flag flag) {
    double* y;
    double* u1;
    double* u2;
    double* u3;
    
    if (flag == OutputUpdate) {
        // output
        y = (double *) block->outptr[0];
        
        // input are indexed in order
        u1 = (double *) block->inptr[0];
        u2 = (double *) block->inptr[1];
        u3 = (double *) block->inptr[2];
        
        // call reynolds layer
        *y = reynolds_number(*u1, *u2, *u3);
    }
}

