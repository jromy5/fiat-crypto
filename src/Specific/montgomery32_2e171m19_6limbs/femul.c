static void femul(uint32_t out[6], const uint32_t in1[6], const uint32_t in2[6]) {
  { const uint32_t x12 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x22 = in2[5];
  { const uint32_t x23 = in2[4];
  { const uint32_t x21 = in2[3];
  { const uint32_t x19 = in2[2];
  { const uint32_t x17 = in2[1];
  { const uint32_t x15 = in2[0];
  { uint32_t x26;  uint32_t x25 = _mulx_u32(x5, x15, &x26);
  { uint32_t x29;  uint32_t x28 = _mulx_u32(x5, x17, &x29);
  { uint32_t x32;  uint32_t x31 = _mulx_u32(x5, x19, &x32);
  { uint32_t x35;  uint32_t x34 = _mulx_u32(x5, x21, &x35);
  { uint32_t x38;  uint32_t x37 = _mulx_u32(x5, x23, &x38);
  { uint32_t x41;  uint32_t x40 = _mulx_u32(x5, x22, &x41);
  { uint32_t x43; uint8_t/*bool*/ x44 = _addcarryx_u32(0x0, x26, x28, &x43);
  { uint32_t x46; uint8_t/*bool*/ x47 = _addcarryx_u32(x44, x29, x31, &x46);
  { uint32_t x49; uint8_t/*bool*/ x50 = _addcarryx_u32(x47, x32, x34, &x49);
  { uint32_t x52; uint8_t/*bool*/ x53 = _addcarryx_u32(x50, x35, x37, &x52);
  { uint32_t x55; uint8_t/*bool*/ x56 = _addcarryx_u32(x53, x38, x40, &x55);
  { uint32_t x58; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x56, x41, &x58);
  { uint32_t _;  uint32_t x61 = _mulx_u32(x25, 0x286bca1b, &_);
  { uint32_t x65;  uint32_t x64 = _mulx_u32(x61, 0xffffffed, &x65);
  { uint32_t x68;  uint32_t x67 = _mulx_u32(x61, 0xffffffff, &x68);
  { uint32_t x71;  uint32_t x70 = _mulx_u32(x61, 0xffffffff, &x71);
  { uint32_t x74;  uint32_t x73 = _mulx_u32(x61, 0xffffffff, &x74);
  { uint32_t x77;  uint32_t x76 = _mulx_u32(x61, 0xffffffff, &x77);
  { uint32_t x80;  uint32_t x79 = _mulx_u32(x61, 0x7ff, &x80);
  { uint32_t x82; uint8_t/*bool*/ x83 = _addcarryx_u32(0x0, x65, x67, &x82);
  { uint32_t x85; uint8_t/*bool*/ x86 = _addcarryx_u32(x83, x68, x70, &x85);
  { uint32_t x88; uint8_t/*bool*/ x89 = _addcarryx_u32(x86, x71, x73, &x88);
  { uint32_t x91; uint8_t/*bool*/ x92 = _addcarryx_u32(x89, x74, x76, &x91);
  { uint32_t x94; uint8_t/*bool*/ x95 = _addcarryx_u32(x92, x77, x79, &x94);
  { uint32_t x97; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x95, x80, &x97);
  { uint32_t _; uint8_t/*bool*/ x101 = _addcarryx_u32(0x0, x25, x64, &_);
  { uint32_t x103; uint8_t/*bool*/ x104 = _addcarryx_u32(x101, x43, x82, &x103);
  { uint32_t x106; uint8_t/*bool*/ x107 = _addcarryx_u32(x104, x46, x85, &x106);
  { uint32_t x109; uint8_t/*bool*/ x110 = _addcarryx_u32(x107, x49, x88, &x109);
  { uint32_t x112; uint8_t/*bool*/ x113 = _addcarryx_u32(x110, x52, x91, &x112);
  { uint32_t x115; uint8_t/*bool*/ x116 = _addcarryx_u32(x113, x55, x94, &x115);
  { uint32_t x118; uint8_t/*bool*/ x119 = _addcarryx_u32(x116, x58, x97, &x118);
  { uint32_t x122;  uint32_t x121 = _mulx_u32(x7, x15, &x122);
  { uint32_t x125;  uint32_t x124 = _mulx_u32(x7, x17, &x125);
  { uint32_t x128;  uint32_t x127 = _mulx_u32(x7, x19, &x128);
  { uint32_t x131;  uint32_t x130 = _mulx_u32(x7, x21, &x131);
  { uint32_t x134;  uint32_t x133 = _mulx_u32(x7, x23, &x134);
  { uint32_t x137;  uint32_t x136 = _mulx_u32(x7, x22, &x137);
  { uint32_t x139; uint8_t/*bool*/ x140 = _addcarryx_u32(0x0, x122, x124, &x139);
  { uint32_t x142; uint8_t/*bool*/ x143 = _addcarryx_u32(x140, x125, x127, &x142);
  { uint32_t x145; uint8_t/*bool*/ x146 = _addcarryx_u32(x143, x128, x130, &x145);
  { uint32_t x148; uint8_t/*bool*/ x149 = _addcarryx_u32(x146, x131, x133, &x148);
  { uint32_t x151; uint8_t/*bool*/ x152 = _addcarryx_u32(x149, x134, x136, &x151);
  { uint32_t x154; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x152, x137, &x154);
  { uint32_t x157; uint8_t/*bool*/ x158 = _addcarryx_u32(0x0, x103, x121, &x157);
  { uint32_t x160; uint8_t/*bool*/ x161 = _addcarryx_u32(x158, x106, x139, &x160);
  { uint32_t x163; uint8_t/*bool*/ x164 = _addcarryx_u32(x161, x109, x142, &x163);
  { uint32_t x166; uint8_t/*bool*/ x167 = _addcarryx_u32(x164, x112, x145, &x166);
  { uint32_t x169; uint8_t/*bool*/ x170 = _addcarryx_u32(x167, x115, x148, &x169);
  { uint32_t x172; uint8_t/*bool*/ x173 = _addcarryx_u32(x170, x118, x151, &x172);
  { uint32_t x175; uint8_t/*bool*/ x176 = _addcarryx_u32(x173, x119, x154, &x175);
  { uint32_t _;  uint32_t x178 = _mulx_u32(x157, 0x286bca1b, &_);
  { uint32_t x182;  uint32_t x181 = _mulx_u32(x178, 0xffffffed, &x182);
  { uint32_t x185;  uint32_t x184 = _mulx_u32(x178, 0xffffffff, &x185);
  { uint32_t x188;  uint32_t x187 = _mulx_u32(x178, 0xffffffff, &x188);
  { uint32_t x191;  uint32_t x190 = _mulx_u32(x178, 0xffffffff, &x191);
  { uint32_t x194;  uint32_t x193 = _mulx_u32(x178, 0xffffffff, &x194);
  { uint32_t x197;  uint32_t x196 = _mulx_u32(x178, 0x7ff, &x197);
  { uint32_t x199; uint8_t/*bool*/ x200 = _addcarryx_u32(0x0, x182, x184, &x199);
  { uint32_t x202; uint8_t/*bool*/ x203 = _addcarryx_u32(x200, x185, x187, &x202);
  { uint32_t x205; uint8_t/*bool*/ x206 = _addcarryx_u32(x203, x188, x190, &x205);
  { uint32_t x208; uint8_t/*bool*/ x209 = _addcarryx_u32(x206, x191, x193, &x208);
  { uint32_t x211; uint8_t/*bool*/ x212 = _addcarryx_u32(x209, x194, x196, &x211);
  { uint32_t x214; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x212, x197, &x214);
  { uint32_t _; uint8_t/*bool*/ x218 = _addcarryx_u32(0x0, x157, x181, &_);
  { uint32_t x220; uint8_t/*bool*/ x221 = _addcarryx_u32(x218, x160, x199, &x220);
  { uint32_t x223; uint8_t/*bool*/ x224 = _addcarryx_u32(x221, x163, x202, &x223);
  { uint32_t x226; uint8_t/*bool*/ x227 = _addcarryx_u32(x224, x166, x205, &x226);
  { uint32_t x229; uint8_t/*bool*/ x230 = _addcarryx_u32(x227, x169, x208, &x229);
  { uint32_t x232; uint8_t/*bool*/ x233 = _addcarryx_u32(x230, x172, x211, &x232);
  { uint32_t x235; uint8_t/*bool*/ x236 = _addcarryx_u32(x233, x175, x214, &x235);
  { uint8_t x237 = ((uint8_t)x236 + x176);
  { uint32_t x240;  uint32_t x239 = _mulx_u32(x9, x15, &x240);
  { uint32_t x243;  uint32_t x242 = _mulx_u32(x9, x17, &x243);
  { uint32_t x246;  uint32_t x245 = _mulx_u32(x9, x19, &x246);
  { uint32_t x249;  uint32_t x248 = _mulx_u32(x9, x21, &x249);
  { uint32_t x252;  uint32_t x251 = _mulx_u32(x9, x23, &x252);
  { uint32_t x255;  uint32_t x254 = _mulx_u32(x9, x22, &x255);
  { uint32_t x257; uint8_t/*bool*/ x258 = _addcarryx_u32(0x0, x240, x242, &x257);
  { uint32_t x260; uint8_t/*bool*/ x261 = _addcarryx_u32(x258, x243, x245, &x260);
  { uint32_t x263; uint8_t/*bool*/ x264 = _addcarryx_u32(x261, x246, x248, &x263);
  { uint32_t x266; uint8_t/*bool*/ x267 = _addcarryx_u32(x264, x249, x251, &x266);
  { uint32_t x269; uint8_t/*bool*/ x270 = _addcarryx_u32(x267, x252, x254, &x269);
  { uint32_t x272; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x270, x255, &x272);
  { uint32_t x275; uint8_t/*bool*/ x276 = _addcarryx_u32(0x0, x220, x239, &x275);
  { uint32_t x278; uint8_t/*bool*/ x279 = _addcarryx_u32(x276, x223, x257, &x278);
  { uint32_t x281; uint8_t/*bool*/ x282 = _addcarryx_u32(x279, x226, x260, &x281);
  { uint32_t x284; uint8_t/*bool*/ x285 = _addcarryx_u32(x282, x229, x263, &x284);
  { uint32_t x287; uint8_t/*bool*/ x288 = _addcarryx_u32(x285, x232, x266, &x287);
  { uint32_t x290; uint8_t/*bool*/ x291 = _addcarryx_u32(x288, x235, x269, &x290);
  { uint32_t x293; uint8_t/*bool*/ x294 = _addcarryx_u32(x291, x237, x272, &x293);
  { uint32_t _;  uint32_t x296 = _mulx_u32(x275, 0x286bca1b, &_);
  { uint32_t x300;  uint32_t x299 = _mulx_u32(x296, 0xffffffed, &x300);
  { uint32_t x303;  uint32_t x302 = _mulx_u32(x296, 0xffffffff, &x303);
  { uint32_t x306;  uint32_t x305 = _mulx_u32(x296, 0xffffffff, &x306);
  { uint32_t x309;  uint32_t x308 = _mulx_u32(x296, 0xffffffff, &x309);
  { uint32_t x312;  uint32_t x311 = _mulx_u32(x296, 0xffffffff, &x312);
  { uint32_t x315;  uint32_t x314 = _mulx_u32(x296, 0x7ff, &x315);
  { uint32_t x317; uint8_t/*bool*/ x318 = _addcarryx_u32(0x0, x300, x302, &x317);
  { uint32_t x320; uint8_t/*bool*/ x321 = _addcarryx_u32(x318, x303, x305, &x320);
  { uint32_t x323; uint8_t/*bool*/ x324 = _addcarryx_u32(x321, x306, x308, &x323);
  { uint32_t x326; uint8_t/*bool*/ x327 = _addcarryx_u32(x324, x309, x311, &x326);
  { uint32_t x329; uint8_t/*bool*/ x330 = _addcarryx_u32(x327, x312, x314, &x329);
  { uint32_t x332; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x330, x315, &x332);
  { uint32_t _; uint8_t/*bool*/ x336 = _addcarryx_u32(0x0, x275, x299, &_);
  { uint32_t x338; uint8_t/*bool*/ x339 = _addcarryx_u32(x336, x278, x317, &x338);
  { uint32_t x341; uint8_t/*bool*/ x342 = _addcarryx_u32(x339, x281, x320, &x341);
  { uint32_t x344; uint8_t/*bool*/ x345 = _addcarryx_u32(x342, x284, x323, &x344);
  { uint32_t x347; uint8_t/*bool*/ x348 = _addcarryx_u32(x345, x287, x326, &x347);
  { uint32_t x350; uint8_t/*bool*/ x351 = _addcarryx_u32(x348, x290, x329, &x350);
  { uint32_t x353; uint8_t/*bool*/ x354 = _addcarryx_u32(x351, x293, x332, &x353);
  { uint8_t x355 = ((uint8_t)x354 + x294);
  { uint32_t x358;  uint32_t x357 = _mulx_u32(x11, x15, &x358);
  { uint32_t x361;  uint32_t x360 = _mulx_u32(x11, x17, &x361);
  { uint32_t x364;  uint32_t x363 = _mulx_u32(x11, x19, &x364);
  { uint32_t x367;  uint32_t x366 = _mulx_u32(x11, x21, &x367);
  { uint32_t x370;  uint32_t x369 = _mulx_u32(x11, x23, &x370);
  { uint32_t x373;  uint32_t x372 = _mulx_u32(x11, x22, &x373);
  { uint32_t x375; uint8_t/*bool*/ x376 = _addcarryx_u32(0x0, x358, x360, &x375);
  { uint32_t x378; uint8_t/*bool*/ x379 = _addcarryx_u32(x376, x361, x363, &x378);
  { uint32_t x381; uint8_t/*bool*/ x382 = _addcarryx_u32(x379, x364, x366, &x381);
  { uint32_t x384; uint8_t/*bool*/ x385 = _addcarryx_u32(x382, x367, x369, &x384);
  { uint32_t x387; uint8_t/*bool*/ x388 = _addcarryx_u32(x385, x370, x372, &x387);
  { uint32_t x390; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x388, x373, &x390);
  { uint32_t x393; uint8_t/*bool*/ x394 = _addcarryx_u32(0x0, x338, x357, &x393);
  { uint32_t x396; uint8_t/*bool*/ x397 = _addcarryx_u32(x394, x341, x375, &x396);
  { uint32_t x399; uint8_t/*bool*/ x400 = _addcarryx_u32(x397, x344, x378, &x399);
  { uint32_t x402; uint8_t/*bool*/ x403 = _addcarryx_u32(x400, x347, x381, &x402);
  { uint32_t x405; uint8_t/*bool*/ x406 = _addcarryx_u32(x403, x350, x384, &x405);
  { uint32_t x408; uint8_t/*bool*/ x409 = _addcarryx_u32(x406, x353, x387, &x408);
  { uint32_t x411; uint8_t/*bool*/ x412 = _addcarryx_u32(x409, x355, x390, &x411);
  { uint32_t _;  uint32_t x414 = _mulx_u32(x393, 0x286bca1b, &_);
  { uint32_t x418;  uint32_t x417 = _mulx_u32(x414, 0xffffffed, &x418);
  { uint32_t x421;  uint32_t x420 = _mulx_u32(x414, 0xffffffff, &x421);
  { uint32_t x424;  uint32_t x423 = _mulx_u32(x414, 0xffffffff, &x424);
  { uint32_t x427;  uint32_t x426 = _mulx_u32(x414, 0xffffffff, &x427);
  { uint32_t x430;  uint32_t x429 = _mulx_u32(x414, 0xffffffff, &x430);
  { uint32_t x433;  uint32_t x432 = _mulx_u32(x414, 0x7ff, &x433);
  { uint32_t x435; uint8_t/*bool*/ x436 = _addcarryx_u32(0x0, x418, x420, &x435);
  { uint32_t x438; uint8_t/*bool*/ x439 = _addcarryx_u32(x436, x421, x423, &x438);
  { uint32_t x441; uint8_t/*bool*/ x442 = _addcarryx_u32(x439, x424, x426, &x441);
  { uint32_t x444; uint8_t/*bool*/ x445 = _addcarryx_u32(x442, x427, x429, &x444);
  { uint32_t x447; uint8_t/*bool*/ x448 = _addcarryx_u32(x445, x430, x432, &x447);
  { uint32_t x450; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x448, x433, &x450);
  { uint32_t _; uint8_t/*bool*/ x454 = _addcarryx_u32(0x0, x393, x417, &_);
  { uint32_t x456; uint8_t/*bool*/ x457 = _addcarryx_u32(x454, x396, x435, &x456);
  { uint32_t x459; uint8_t/*bool*/ x460 = _addcarryx_u32(x457, x399, x438, &x459);
  { uint32_t x462; uint8_t/*bool*/ x463 = _addcarryx_u32(x460, x402, x441, &x462);
  { uint32_t x465; uint8_t/*bool*/ x466 = _addcarryx_u32(x463, x405, x444, &x465);
  { uint32_t x468; uint8_t/*bool*/ x469 = _addcarryx_u32(x466, x408, x447, &x468);
  { uint32_t x471; uint8_t/*bool*/ x472 = _addcarryx_u32(x469, x411, x450, &x471);
  { uint8_t x473 = ((uint8_t)x472 + x412);
  { uint32_t x476;  uint32_t x475 = _mulx_u32(x13, x15, &x476);
  { uint32_t x479;  uint32_t x478 = _mulx_u32(x13, x17, &x479);
  { uint32_t x482;  uint32_t x481 = _mulx_u32(x13, x19, &x482);
  { uint32_t x485;  uint32_t x484 = _mulx_u32(x13, x21, &x485);
  { uint32_t x488;  uint32_t x487 = _mulx_u32(x13, x23, &x488);
  { uint32_t x491;  uint32_t x490 = _mulx_u32(x13, x22, &x491);
  { uint32_t x493; uint8_t/*bool*/ x494 = _addcarryx_u32(0x0, x476, x478, &x493);
  { uint32_t x496; uint8_t/*bool*/ x497 = _addcarryx_u32(x494, x479, x481, &x496);
  { uint32_t x499; uint8_t/*bool*/ x500 = _addcarryx_u32(x497, x482, x484, &x499);
  { uint32_t x502; uint8_t/*bool*/ x503 = _addcarryx_u32(x500, x485, x487, &x502);
  { uint32_t x505; uint8_t/*bool*/ x506 = _addcarryx_u32(x503, x488, x490, &x505);
  { uint32_t x508; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x506, x491, &x508);
  { uint32_t x511; uint8_t/*bool*/ x512 = _addcarryx_u32(0x0, x456, x475, &x511);
  { uint32_t x514; uint8_t/*bool*/ x515 = _addcarryx_u32(x512, x459, x493, &x514);
  { uint32_t x517; uint8_t/*bool*/ x518 = _addcarryx_u32(x515, x462, x496, &x517);
  { uint32_t x520; uint8_t/*bool*/ x521 = _addcarryx_u32(x518, x465, x499, &x520);
  { uint32_t x523; uint8_t/*bool*/ x524 = _addcarryx_u32(x521, x468, x502, &x523);
  { uint32_t x526; uint8_t/*bool*/ x527 = _addcarryx_u32(x524, x471, x505, &x526);
  { uint32_t x529; uint8_t/*bool*/ x530 = _addcarryx_u32(x527, x473, x508, &x529);
  { uint32_t _;  uint32_t x532 = _mulx_u32(x511, 0x286bca1b, &_);
  { uint32_t x536;  uint32_t x535 = _mulx_u32(x532, 0xffffffed, &x536);
  { uint32_t x539;  uint32_t x538 = _mulx_u32(x532, 0xffffffff, &x539);
  { uint32_t x542;  uint32_t x541 = _mulx_u32(x532, 0xffffffff, &x542);
  { uint32_t x545;  uint32_t x544 = _mulx_u32(x532, 0xffffffff, &x545);
  { uint32_t x548;  uint32_t x547 = _mulx_u32(x532, 0xffffffff, &x548);
  { uint32_t x551;  uint32_t x550 = _mulx_u32(x532, 0x7ff, &x551);
  { uint32_t x553; uint8_t/*bool*/ x554 = _addcarryx_u32(0x0, x536, x538, &x553);
  { uint32_t x556; uint8_t/*bool*/ x557 = _addcarryx_u32(x554, x539, x541, &x556);
  { uint32_t x559; uint8_t/*bool*/ x560 = _addcarryx_u32(x557, x542, x544, &x559);
  { uint32_t x562; uint8_t/*bool*/ x563 = _addcarryx_u32(x560, x545, x547, &x562);
  { uint32_t x565; uint8_t/*bool*/ x566 = _addcarryx_u32(x563, x548, x550, &x565);
  { uint32_t x568; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x566, x551, &x568);
  { uint32_t _; uint8_t/*bool*/ x572 = _addcarryx_u32(0x0, x511, x535, &_);
  { uint32_t x574; uint8_t/*bool*/ x575 = _addcarryx_u32(x572, x514, x553, &x574);
  { uint32_t x577; uint8_t/*bool*/ x578 = _addcarryx_u32(x575, x517, x556, &x577);
  { uint32_t x580; uint8_t/*bool*/ x581 = _addcarryx_u32(x578, x520, x559, &x580);
  { uint32_t x583; uint8_t/*bool*/ x584 = _addcarryx_u32(x581, x523, x562, &x583);
  { uint32_t x586; uint8_t/*bool*/ x587 = _addcarryx_u32(x584, x526, x565, &x586);
  { uint32_t x589; uint8_t/*bool*/ x590 = _addcarryx_u32(x587, x529, x568, &x589);
  { uint8_t x591 = ((uint8_t)x590 + x530);
  { uint32_t x594;  uint32_t x593 = _mulx_u32(x12, x15, &x594);
  { uint32_t x597;  uint32_t x596 = _mulx_u32(x12, x17, &x597);
  { uint32_t x600;  uint32_t x599 = _mulx_u32(x12, x19, &x600);
  { uint32_t x603;  uint32_t x602 = _mulx_u32(x12, x21, &x603);
  { uint32_t x606;  uint32_t x605 = _mulx_u32(x12, x23, &x606);
  { uint32_t x609;  uint32_t x608 = _mulx_u32(x12, x22, &x609);
  { uint32_t x611; uint8_t/*bool*/ x612 = _addcarryx_u32(0x0, x594, x596, &x611);
  { uint32_t x614; uint8_t/*bool*/ x615 = _addcarryx_u32(x612, x597, x599, &x614);
  { uint32_t x617; uint8_t/*bool*/ x618 = _addcarryx_u32(x615, x600, x602, &x617);
  { uint32_t x620; uint8_t/*bool*/ x621 = _addcarryx_u32(x618, x603, x605, &x620);
  { uint32_t x623; uint8_t/*bool*/ x624 = _addcarryx_u32(x621, x606, x608, &x623);
  { uint32_t x626; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x624, x609, &x626);
  { uint32_t x629; uint8_t/*bool*/ x630 = _addcarryx_u32(0x0, x574, x593, &x629);
  { uint32_t x632; uint8_t/*bool*/ x633 = _addcarryx_u32(x630, x577, x611, &x632);
  { uint32_t x635; uint8_t/*bool*/ x636 = _addcarryx_u32(x633, x580, x614, &x635);
  { uint32_t x638; uint8_t/*bool*/ x639 = _addcarryx_u32(x636, x583, x617, &x638);
  { uint32_t x641; uint8_t/*bool*/ x642 = _addcarryx_u32(x639, x586, x620, &x641);
  { uint32_t x644; uint8_t/*bool*/ x645 = _addcarryx_u32(x642, x589, x623, &x644);
  { uint32_t x647; uint8_t/*bool*/ x648 = _addcarryx_u32(x645, x591, x626, &x647);
  { uint32_t _;  uint32_t x650 = _mulx_u32(x629, 0x286bca1b, &_);
  { uint32_t x654;  uint32_t x653 = _mulx_u32(x650, 0xffffffed, &x654);
  { uint32_t x657;  uint32_t x656 = _mulx_u32(x650, 0xffffffff, &x657);
  { uint32_t x660;  uint32_t x659 = _mulx_u32(x650, 0xffffffff, &x660);
  { uint32_t x663;  uint32_t x662 = _mulx_u32(x650, 0xffffffff, &x663);
  { uint32_t x666;  uint32_t x665 = _mulx_u32(x650, 0xffffffff, &x666);
  { uint32_t x669;  uint32_t x668 = _mulx_u32(x650, 0x7ff, &x669);
  { uint32_t x671; uint8_t/*bool*/ x672 = _addcarryx_u32(0x0, x654, x656, &x671);
  { uint32_t x674; uint8_t/*bool*/ x675 = _addcarryx_u32(x672, x657, x659, &x674);
  { uint32_t x677; uint8_t/*bool*/ x678 = _addcarryx_u32(x675, x660, x662, &x677);
  { uint32_t x680; uint8_t/*bool*/ x681 = _addcarryx_u32(x678, x663, x665, &x680);
  { uint32_t x683; uint8_t/*bool*/ x684 = _addcarryx_u32(x681, x666, x668, &x683);
  { uint32_t x686; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x684, x669, &x686);
  { uint32_t _; uint8_t/*bool*/ x690 = _addcarryx_u32(0x0, x629, x653, &_);
  { uint32_t x692; uint8_t/*bool*/ x693 = _addcarryx_u32(x690, x632, x671, &x692);
  { uint32_t x695; uint8_t/*bool*/ x696 = _addcarryx_u32(x693, x635, x674, &x695);
  { uint32_t x698; uint8_t/*bool*/ x699 = _addcarryx_u32(x696, x638, x677, &x698);
  { uint32_t x701; uint8_t/*bool*/ x702 = _addcarryx_u32(x699, x641, x680, &x701);
  { uint32_t x704; uint8_t/*bool*/ x705 = _addcarryx_u32(x702, x644, x683, &x704);
  { uint32_t x707; uint8_t/*bool*/ x708 = _addcarryx_u32(x705, x647, x686, &x707);
  { uint8_t x709 = ((uint8_t)x708 + x648);
  { uint32_t x711; uint8_t/*bool*/ x712 = _subborrow_u32(0x0, x692, 0xffffffed, &x711);
  { uint32_t x714; uint8_t/*bool*/ x715 = _subborrow_u32(x712, x695, 0xffffffff, &x714);
  { uint32_t x717; uint8_t/*bool*/ x718 = _subborrow_u32(x715, x698, 0xffffffff, &x717);
  { uint32_t x720; uint8_t/*bool*/ x721 = _subborrow_u32(x718, x701, 0xffffffff, &x720);
  { uint32_t x723; uint8_t/*bool*/ x724 = _subborrow_u32(x721, x704, 0xffffffff, &x723);
  { uint32_t x726; uint8_t/*bool*/ x727 = _subborrow_u32(x724, x707, 0x7ff, &x726);
  { uint32_t _; uint8_t/*bool*/ x730 = _subborrow_u32(x727, x709, 0x0, &_);
  { uint32_t x731 = cmovznz32(x730, x726, x707);
  { uint32_t x732 = cmovznz32(x730, x723, x704);
  { uint32_t x733 = cmovznz32(x730, x720, x701);
  { uint32_t x734 = cmovznz32(x730, x717, x698);
  { uint32_t x735 = cmovznz32(x730, x714, x695);
  { uint32_t x736 = cmovznz32(x730, x711, x692);
  out[0] = x736;
  out[1] = x735;
  out[2] = x734;
  out[3] = x733;
  out[4] = x732;
  out[5] = x731;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
