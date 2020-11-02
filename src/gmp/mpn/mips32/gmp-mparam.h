/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999-2002 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */


#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4


/* Generated by tuneup.c, 2002-02-20, gcc 2.95 (R3000) */

#define MUL_TOOM22_THRESHOLD             20
#define MUL_TOOM33_THRESHOLD             50

#define SQR_BASECASE_THRESHOLD            7
#define SQR_TOOM2_THRESHOLD              57
#define SQR_TOOM3_THRESHOLD              78

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 57
#define POWM_THRESHOLD                   78

#define GCD_ACCEL_THRESHOLD               3
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD           0  /* always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             19
#define GET_STR_PRECOMPUTE_THRESHOLD     25
#define SET_STR_THRESHOLD               309

#define MUL_FFT_TABLE  { 496, 1056, 2176, 5632, 14336, 40960, 0 }
#define MUL_FFT_MODF_THRESHOLD          624
#define MUL_FFT_THRESHOLD              5888

#define SQR_FFT_TABLE  { 496, 1184, 2176, 5632, 14336, 40960, 0 }
#define SQR_FFT_MODF_THRESHOLD          560
#define SQR_FFT_THRESHOLD              5376
