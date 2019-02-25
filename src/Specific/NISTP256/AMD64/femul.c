#include <stdint.h>
#include <stdbool.h>
#include <x86intrin.h>
#include "liblow.h"

#include "femul.h"

typedef unsigned int uint128_t __attribute__((mode(TI)));

#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__)||defined(__INTEL_COMPILER))
// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=81294
#define _subborrow_u32 __builtin_ia32_sbb_u32
#define _subborrow_u64 __builtin_ia32_sbb_u64
#endif

#undef force_inline
#define force_inline __attribute__((always_inline))

void force_inline femul(uint64_t* out, uint64_t x8, uint64_t x9, uint64_t x7, uint64_t x5, uint64_t x14, uint64_t x15, uint64_t x13, uint64_t x11)
{  uint64_t x18;  uint64_t x17 = _mulx_u64(x5, x11, &x18);
{  uint64_t x21;  uint64_t x20 = _mulx_u64(x5, x13, &x21);
{  uint64_t x24;  uint64_t x23 = _mulx_u64(x5, x15, &x24);
{  uint64_t x27;  uint64_t x26 = _mulx_u64(x5, x14, &x27);
{  uint64_t x29; uint8_t/*bool*/ x30 = _addcarryx_u64(0x0, x18, x20, &x29);
{  uint64_t x32; uint8_t/*bool*/ x33 = _addcarryx_u64(x30, x21, x23, &x32);
{  uint64_t x35; uint8_t/*bool*/ x36 = _addcarryx_u64(x33, x24, x26, &x35);
{  uint64_t x38; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x36, x27, &x38);
{  uint64_t x42;  uint64_t x41 = _mulx_u64(x17, 0xffffffffffffffffL, &x42);
{  uint64_t x45;  uint64_t x44 = _mulx_u64(x17, 0xffffffff, &x45);
{  uint64_t x48;  uint64_t x47 = _mulx_u64(x17, 0xffffffff00000001L, &x48);
{  uint64_t x50; uint8_t/*bool*/ x51 = _addcarryx_u64(0x0, x42, x44, &x50);
{  uint64_t x53; uint8_t/*bool*/ x54 = _addcarryx_u64(x51, x45, 0x0, &x53);
{  uint64_t x56; uint8_t/*bool*/ x57 = _addcarryx_u64(x54, 0x0, x47, &x56);
{  uint64_t x59; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x57, x48, &x59);
{  uint64_t _; uint8_t/*bool*/ x63 = _addcarryx_u64(0x0, x17, x41, &_);
{  uint64_t x65; uint8_t/*bool*/ x66 = _addcarryx_u64(x63, x29, x50, &x65);
{  uint64_t x68; uint8_t/*bool*/ x69 = _addcarryx_u64(x66, x32, x53, &x68);
{  uint64_t x71; uint8_t/*bool*/ x72 = _addcarryx_u64(x69, x35, x56, &x71);
{  uint64_t x74; uint8_t/*bool*/ x75 = _addcarryx_u64(x72, x38, x59, &x74);
{  uint64_t x78;  uint64_t x77 = _mulx_u64(x7, x11, &x78);
{  uint64_t x81;  uint64_t x80 = _mulx_u64(x7, x13, &x81);
{  uint64_t x84;  uint64_t x83 = _mulx_u64(x7, x15, &x84);
{  uint64_t x87;  uint64_t x86 = _mulx_u64(x7, x14, &x87);
{  uint64_t x89; uint8_t/*bool*/ x90 = _addcarryx_u64(0x0, x78, x80, &x89);
{  uint64_t x92; uint8_t/*bool*/ x93 = _addcarryx_u64(x90, x81, x83, &x92);
{  uint64_t x95; uint8_t/*bool*/ x96 = _addcarryx_u64(x93, x84, x86, &x95);
{  uint64_t x98; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x96, x87, &x98);
{  uint64_t x101; uint8_t/*bool*/ x102 = _addcarryx_u64(0x0, x65, x77, &x101);
{  uint64_t x104; uint8_t/*bool*/ x105 = _addcarryx_u64(x102, x68, x89, &x104);
{  uint64_t x107; uint8_t/*bool*/ x108 = _addcarryx_u64(x105, x71, x92, &x107);
{  uint64_t x110; uint8_t/*bool*/ x111 = _addcarryx_u64(x108, x74, x95, &x110);
{  uint64_t x113; uint8_t/*bool*/ x114 = _addcarryx_u64(x111, x75, x98, &x113);
{  uint64_t x117;  uint64_t x116 = _mulx_u64(x101, 0xffffffffffffffffL, &x117);
{  uint64_t x120;  uint64_t x119 = _mulx_u64(x101, 0xffffffff, &x120);
{  uint64_t x123;  uint64_t x122 = _mulx_u64(x101, 0xffffffff00000001L, &x123);
{  uint64_t x125; uint8_t/*bool*/ x126 = _addcarryx_u64(0x0, x117, x119, &x125);
{  uint64_t x128; uint8_t/*bool*/ x129 = _addcarryx_u64(x126, x120, 0x0, &x128);
{  uint64_t x131; uint8_t/*bool*/ x132 = _addcarryx_u64(x129, 0x0, x122, &x131);
{  uint64_t x134; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x132, x123, &x134);
{  uint64_t _; uint8_t/*bool*/ x138 = _addcarryx_u64(0x0, x101, x116, &_);
{  uint64_t x140; uint8_t/*bool*/ x141 = _addcarryx_u64(x138, x104, x125, &x140);
{  uint64_t x143; uint8_t/*bool*/ x144 = _addcarryx_u64(x141, x107, x128, &x143);
{  uint64_t x146; uint8_t/*bool*/ x147 = _addcarryx_u64(x144, x110, x131, &x146);
{  uint64_t x149; uint8_t/*bool*/ x150 = _addcarryx_u64(x147, x113, x134, &x149);
{  uint8_t x151 = ((uint8_t)x150 + x114);
{  uint64_t x154;  uint64_t x153 = _mulx_u64(x9, x11, &x154);
{  uint64_t x157;  uint64_t x156 = _mulx_u64(x9, x13, &x157);
{  uint64_t x160;  uint64_t x159 = _mulx_u64(x9, x15, &x160);
{  uint64_t x163;  uint64_t x162 = _mulx_u64(x9, x14, &x163);
{  uint64_t x165; uint8_t/*bool*/ x166 = _addcarryx_u64(0x0, x154, x156, &x165);
{  uint64_t x168; uint8_t/*bool*/ x169 = _addcarryx_u64(x166, x157, x159, &x168);
{  uint64_t x171; uint8_t/*bool*/ x172 = _addcarryx_u64(x169, x160, x162, &x171);
{  uint64_t x174; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x172, x163, &x174);
{  uint64_t x177; uint8_t/*bool*/ x178 = _addcarryx_u64(0x0, x140, x153, &x177);
{  uint64_t x180; uint8_t/*bool*/ x181 = _addcarryx_u64(x178, x143, x165, &x180);
{  uint64_t x183; uint8_t/*bool*/ x184 = _addcarryx_u64(x181, x146, x168, &x183);
{  uint64_t x186; uint8_t/*bool*/ x187 = _addcarryx_u64(x184, x149, x171, &x186);
{  uint64_t x189; uint8_t/*bool*/ x190 = _addcarryx_u64(x187, x151, x174, &x189);
{  uint64_t x193;  uint64_t x192 = _mulx_u64(x177, 0xffffffffffffffffL, &x193);
{  uint64_t x196;  uint64_t x195 = _mulx_u64(x177, 0xffffffff, &x196);
{  uint64_t x199;  uint64_t x198 = _mulx_u64(x177, 0xffffffff00000001L, &x199);
{  uint64_t x201; uint8_t/*bool*/ x202 = _addcarryx_u64(0x0, x193, x195, &x201);
{  uint64_t x204; uint8_t/*bool*/ x205 = _addcarryx_u64(x202, x196, 0x0, &x204);
{  uint64_t x207; uint8_t/*bool*/ x208 = _addcarryx_u64(x205, 0x0, x198, &x207);
{  uint64_t x210; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x208, x199, &x210);
{  uint64_t _; uint8_t/*bool*/ x214 = _addcarryx_u64(0x0, x177, x192, &_);
{  uint64_t x216; uint8_t/*bool*/ x217 = _addcarryx_u64(x214, x180, x201, &x216);
{  uint64_t x219; uint8_t/*bool*/ x220 = _addcarryx_u64(x217, x183, x204, &x219);
{  uint64_t x222; uint8_t/*bool*/ x223 = _addcarryx_u64(x220, x186, x207, &x222);
{  uint64_t x225; uint8_t/*bool*/ x226 = _addcarryx_u64(x223, x189, x210, &x225);
{  uint8_t x227 = ((uint8_t)x226 + x190);
{  uint64_t x230;  uint64_t x229 = _mulx_u64(x8, x11, &x230);
{  uint64_t x233;  uint64_t x232 = _mulx_u64(x8, x13, &x233);
{  uint64_t x236;  uint64_t x235 = _mulx_u64(x8, x15, &x236);
{  uint64_t x239;  uint64_t x238 = _mulx_u64(x8, x14, &x239);
{  uint64_t x241; uint8_t/*bool*/ x242 = _addcarryx_u64(0x0, x230, x232, &x241);
{  uint64_t x244; uint8_t/*bool*/ x245 = _addcarryx_u64(x242, x233, x235, &x244);
{  uint64_t x247; uint8_t/*bool*/ x248 = _addcarryx_u64(x245, x236, x238, &x247);
{  uint64_t x250; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x248, x239, &x250);
{  uint64_t x253; uint8_t/*bool*/ x254 = _addcarryx_u64(0x0, x216, x229, &x253);
{  uint64_t x256; uint8_t/*bool*/ x257 = _addcarryx_u64(x254, x219, x241, &x256);
{  uint64_t x259; uint8_t/*bool*/ x260 = _addcarryx_u64(x257, x222, x244, &x259);
{  uint64_t x262; uint8_t/*bool*/ x263 = _addcarryx_u64(x260, x225, x247, &x262);
{  uint64_t x265; uint8_t/*bool*/ x266 = _addcarryx_u64(x263, x227, x250, &x265);
{  uint64_t x269;  uint64_t x268 = _mulx_u64(x253, 0xffffffffffffffffL, &x269);
{  uint64_t x272;  uint64_t x271 = _mulx_u64(x253, 0xffffffff, &x272);
{  uint64_t x275;  uint64_t x274 = _mulx_u64(x253, 0xffffffff00000001L, &x275);
{  uint64_t x277; uint8_t/*bool*/ x278 = _addcarryx_u64(0x0, x269, x271, &x277);
{  uint64_t x280; uint8_t/*bool*/ x281 = _addcarryx_u64(x278, x272, 0x0, &x280);
{  uint64_t x283; uint8_t/*bool*/ x284 = _addcarryx_u64(x281, 0x0, x274, &x283);
{  uint64_t x286; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x284, x275, &x286);
{  uint64_t _; uint8_t/*bool*/ x290 = _addcarryx_u64(0x0, x253, x268, &_);
{  uint64_t x292; uint8_t/*bool*/ x293 = _addcarryx_u64(x290, x256, x277, &x292);
{  uint64_t x295; uint8_t/*bool*/ x296 = _addcarryx_u64(x293, x259, x280, &x295);
{  uint64_t x298; uint8_t/*bool*/ x299 = _addcarryx_u64(x296, x262, x283, &x298);
{  uint64_t x301; uint8_t/*bool*/ x302 = _addcarryx_u64(x299, x265, x286, &x301);
{  uint8_t x303 = ((uint8_t)x302 + x266);
{  uint64_t x305; uint8_t/*bool*/ x306 = _subborrow_u64(0x0, x292, 0xffffffffffffffffL, &x305);
{  uint64_t x308; uint8_t/*bool*/ x309 = _subborrow_u64(x306, x295, 0xffffffff, &x308);
{  uint64_t x311; uint8_t/*bool*/ x312 = _subborrow_u64(x309, x298, 0x0, &x311);
{  uint64_t x314; uint8_t/*bool*/ x315 = _subborrow_u64(x312, x301, 0xffffffff00000001L, &x314);
{  uint64_t _; uint8_t/*bool*/ x318 = _subborrow_u64(x315, x303, 0x0, &_);
{  uint64_t x319 = cmovznz64(x318, x314, x301);
{  uint64_t x320 = cmovznz64(x318, x311, x298);
{  uint64_t x321 = cmovznz64(x318, x308, x295);
{  uint64_t x322 = cmovznz64(x318, x305, x292);
out[0] = x319;
out[1] = x320;
out[2] = x321;
out[3] = x322;
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
// caller: uint64_t out[4];
