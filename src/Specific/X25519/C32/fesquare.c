#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "fesquare.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline fesquare(uint32_t* out, uint32_t x17, uint32_t x18, uint32_t x16, uint32_t x14, uint32_t x12, uint32_t x10, uint32_t x8, uint32_t x6, uint32_t x4, uint32_t x2)
{  uint64_t x19 = ((uint64_t)x2 * x2);
{  uint64_t x20 = ((uint64_t)(0x2 * x2) * x4);
{  uint64_t x21 = (0x2 * (((uint64_t)x4 * x4) + ((uint64_t)x2 * x6)));
{  uint64_t x22 = (0x2 * (((uint64_t)x4 * x6) + ((uint64_t)x2 * x8)));
{  uint64_t x23 = ((((uint64_t)x6 * x6) + ((uint64_t)(0x4 * x4) * x8)) + ((uint64_t)(0x2 * x2) * x10));
{  uint64_t x24 = (0x2 * ((((uint64_t)x6 * x8) + ((uint64_t)x4 * x10)) + ((uint64_t)x2 * x12)));
{  uint64_t x25 = (0x2 * (((((uint64_t)x8 * x8) + ((uint64_t)x6 * x10)) + ((uint64_t)x2 * x14)) + ((uint64_t)(0x2 * x4) * x12)));
{  uint64_t x26 = (0x2 * (((((uint64_t)x8 * x10) + ((uint64_t)x6 * x12)) + ((uint64_t)x4 * x14)) + ((uint64_t)x2 * x16)));
{  uint64_t x27 = (((uint64_t)x10 * x10) + (0x2 * ((((uint64_t)x6 * x14) + ((uint64_t)x2 * x18)) + (0x2 * (((uint64_t)x4 * x16) + ((uint64_t)x8 * x12))))));
{  uint64_t x28 = (0x2 * ((((((uint64_t)x10 * x12) + ((uint64_t)x8 * x14)) + ((uint64_t)x6 * x16)) + ((uint64_t)x4 * x18)) + ((uint64_t)x2 * x17)));
{  uint64_t x29 = (0x2 * (((((uint64_t)x12 * x12) + ((uint64_t)x10 * x14)) + ((uint64_t)x6 * x18)) + (0x2 * (((uint64_t)x8 * x16) + ((uint64_t)x4 * x17)))));
{  uint64_t x30 = (0x2 * (((((uint64_t)x12 * x14) + ((uint64_t)x10 * x16)) + ((uint64_t)x8 * x18)) + ((uint64_t)x6 * x17)));
{  uint64_t x31 = (((uint64_t)x14 * x14) + (0x2 * (((uint64_t)x10 * x18) + (0x2 * (((uint64_t)x12 * x16) + ((uint64_t)x8 * x17))))));
{  uint64_t x32 = (0x2 * ((((uint64_t)x14 * x16) + ((uint64_t)x12 * x18)) + ((uint64_t)x10 * x17)));
{  uint64_t x33 = (0x2 * ((((uint64_t)x16 * x16) + ((uint64_t)x14 * x18)) + ((uint64_t)(0x2 * x12) * x17)));
{  uint64_t x34 = (0x2 * (((uint64_t)x16 * x18) + ((uint64_t)x14 * x17)));
{  uint64_t x35 = (((uint64_t)x18 * x18) + ((uint64_t)(0x4 * x16) * x17));
{  uint64_t x36 = ((uint64_t)(0x2 * x18) * x17);
{  uint64_t x37 = ((uint64_t)(0x2 * x17) * x17);
{  uint64_t x38 = (x27 + (x37 << 0x4));
{  uint64_t x39 = (x38 + (x37 << 0x1));
{  uint64_t x40 = (x39 + x37);
{  uint64_t x41 = (x26 + (x36 << 0x4));
{  uint64_t x42 = (x41 + (x36 << 0x1));
{  uint64_t x43 = (x42 + x36);
{  uint64_t x44 = (x25 + (x35 << 0x4));
{  uint64_t x45 = (x44 + (x35 << 0x1));
{  uint64_t x46 = (x45 + x35);
{  uint64_t x47 = (x24 + (x34 << 0x4));
{  uint64_t x48 = (x47 + (x34 << 0x1));
{  uint64_t x49 = (x48 + x34);
{  uint64_t x50 = (x23 + (x33 << 0x4));
{  uint64_t x51 = (x50 + (x33 << 0x1));
{  uint64_t x52 = (x51 + x33);
{  uint64_t x53 = (x22 + (x32 << 0x4));
{  uint64_t x54 = (x53 + (x32 << 0x1));
{  uint64_t x55 = (x54 + x32);
{  uint64_t x56 = (x21 + (x31 << 0x4));
{  uint64_t x57 = (x56 + (x31 << 0x1));
{  uint64_t x58 = (x57 + x31);
{  uint64_t x59 = (x20 + (x30 << 0x4));
{  uint64_t x60 = (x59 + (x30 << 0x1));
{  uint64_t x61 = (x60 + x30);
{  uint64_t x62 = (x19 + (x29 << 0x4));
{  uint64_t x63 = (x62 + (x29 << 0x1));
{  uint64_t x64 = (x63 + x29);
{  uint64_t x65 = (x64 >> 0x1a);
{  uint32_t x66 = ((uint32_t)x64 & 0x3ffffff);
{  uint64_t x67 = (x65 + x61);
{  uint64_t x68 = (x67 >> 0x19);
{  uint32_t x69 = ((uint32_t)x67 & 0x1ffffff);
{  uint64_t x70 = (x68 + x58);
{  uint64_t x71 = (x70 >> 0x1a);
{  uint32_t x72 = ((uint32_t)x70 & 0x3ffffff);
{  uint64_t x73 = (x71 + x55);
{  uint64_t x74 = (x73 >> 0x19);
{  uint32_t x75 = ((uint32_t)x73 & 0x1ffffff);
{  uint64_t x76 = (x74 + x52);
{  uint64_t x77 = (x76 >> 0x1a);
{  uint32_t x78 = ((uint32_t)x76 & 0x3ffffff);
{  uint64_t x79 = (x77 + x49);
{  uint64_t x80 = (x79 >> 0x19);
{  uint32_t x81 = ((uint32_t)x79 & 0x1ffffff);
{  uint64_t x82 = (x80 + x46);
{  uint64_t x83 = (x82 >> 0x1a);
{  uint32_t x84 = ((uint32_t)x82 & 0x3ffffff);
{  uint64_t x85 = (x83 + x43);
{  uint64_t x86 = (x85 >> 0x19);
{  uint32_t x87 = ((uint32_t)x85 & 0x1ffffff);
{  uint64_t x88 = (x86 + x40);
{  uint64_t x89 = (x88 >> 0x1a);
{  uint32_t x90 = ((uint32_t)x88 & 0x3ffffff);
{  uint64_t x91 = (x89 + x28);
{  uint64_t x92 = (x91 >> 0x19);
{  uint32_t x93 = ((uint32_t)x91 & 0x1ffffff);
{  uint64_t x94 = (x66 + (0x13 * x92));
{  uint32_t x95 = (uint32_t) (x94 >> 0x1a);
{  uint32_t x96 = ((uint32_t)x94 & 0x3ffffff);
{  uint32_t x97 = (x95 + x69);
{  uint32_t x98 = (x97 >> 0x19);
{  uint32_t x99 = (x97 & 0x1ffffff);
out[0] = x93;
out[1] = x90;
out[2] = x87;
out[3] = x84;
out[4] = x81;
out[5] = x78;
out[6] = x75;
out[7] = x98 + x72;
out[8] = x99;
out[9] = x96;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint32_t out[10];
