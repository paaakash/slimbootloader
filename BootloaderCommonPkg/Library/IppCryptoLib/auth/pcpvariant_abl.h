/** @file

  Copyright (c) 2018-2019, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#if !defined(_CP_VARIANT_ABL_H)
#define _CP_VARIANT_ABL_H

#define _DISABLE_ALG_SHA224_
#define _DISABLE_ALG_SHA512_224_
#define _DISABLE_ALG_SHA512_256_
#define _DISABLE_ALG_MD5_

#if defined(_SLIMBOOT_OPT)
  #define _SHA_NI_ENABLING_   _FEATURE_OFF_
  #define _DISABLE_ALG_SHA1_
  //#define _ALG_SHA256_COMPACT_
  #define _ALG_SM3_COMPACT_
#else
  #define _SHA_NI_ENABLING_ _FEATURE_ON_
#endif


#define IPP_CRYPTO_SHA256_V8    0x0001
#define IPP_CRYPTO_SHA256_NI    0x0002
#define IPP_CRYPTO_SHA384_W7    0x0004
#define IPP_CRYPTO_SHA384_G9    0x0008

#endif /* _CP_VARIANT_ABL_H */
