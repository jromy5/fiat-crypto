static void femul(uint32_t out[7], const uint32_t in1[7], const uint32_t in2[7]) {
  { const uint32_t x14 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x26 = in2[6];
  { const uint32_t x27 = in2[5];
  { const uint32_t x25 = in2[4];
  { const uint32_t x23 = in2[3];
  { const uint32_t x21 = in2[2];
  { const uint32_t x19 = in2[1];
  { const uint32_t x17 = in2[0];
  { uint32_t x30;  uint32_t x29 = _mulx_u32(x5, x17, &x30);
  { uint32_t x33;  uint32_t x32 = _mulx_u32(x5, x19, &x33);
  { uint32_t x36;  uint32_t x35 = _mulx_u32(x5, x21, &x36);
  { uint32_t x39;  uint32_t x38 = _mulx_u32(x5, x23, &x39);
  { uint32_t x42;  uint32_t x41 = _mulx_u32(x5, x25, &x42);
  { uint32_t x45;  uint32_t x44 = _mulx_u32(x5, x27, &x45);
  { uint32_t x48;  uint32_t x47 = _mulx_u32(x5, x26, &x48);
  { uint32_t x50; uint8_t/*bool*/ x51 = _addcarryx_u32(0x0, x30, x32, &x50);
  { uint32_t x53; uint8_t/*bool*/ x54 = _addcarryx_u32(x51, x33, x35, &x53);
  { uint32_t x56; uint8_t/*bool*/ x57 = _addcarryx_u32(x54, x36, x38, &x56);
  { uint32_t x59; uint8_t/*bool*/ x60 = _addcarryx_u32(x57, x39, x41, &x59);
  { uint32_t x62; uint8_t/*bool*/ x63 = _addcarryx_u32(x60, x42, x44, &x62);
  { uint32_t x65; uint8_t/*bool*/ x66 = _addcarryx_u32(x63, x45, x47, &x65);
  { uint32_t x68; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x66, x48, &x68);
  { uint32_t _;  uint32_t x71 = _mulx_u32(x29, 0xf0f0f0f1, &_);
  { uint32_t x75;  uint32_t x74 = _mulx_u32(x71, 0xffffffef, &x75);
  { uint32_t x78;  uint32_t x77 = _mulx_u32(x71, 0xffffffff, &x78);
  { uint32_t x81;  uint32_t x80 = _mulx_u32(x71, 0xffffffff, &x81);
  { uint32_t x84;  uint32_t x83 = _mulx_u32(x71, 0xffffffff, &x84);
  { uint32_t x87;  uint32_t x86 = _mulx_u32(x71, 0xffffffff, &x87);
  { uint32_t x90;  uint32_t x89 = _mulx_u32(x71, 0xffffffff, &x90);
  { uint8_t x93;  uint32_t x92 = _mulx_u32_out_u8(x71, 0x3f, &x93);
  { uint32_t x95; uint8_t/*bool*/ x96 = _addcarryx_u32(0x0, x75, x77, &x95);
  { uint32_t x98; uint8_t/*bool*/ x99 = _addcarryx_u32(x96, x78, x80, &x98);
  { uint32_t x101; uint8_t/*bool*/ x102 = _addcarryx_u32(x99, x81, x83, &x101);
  { uint32_t x104; uint8_t/*bool*/ x105 = _addcarryx_u32(x102, x84, x86, &x104);
  { uint32_t x107; uint8_t/*bool*/ x108 = _addcarryx_u32(x105, x87, x89, &x107);
  { uint32_t x110; uint8_t/*bool*/ x111 = _addcarryx_u32(x108, x90, x92, &x110);
  { uint8_t x112 = ((uint8_t)0x0 + x111);
  { uint8_t x113 = (x112 + x93);
  { uint32_t _; uint8_t/*bool*/ x116 = _addcarryx_u32(0x0, x29, x74, &_);
  { uint32_t x118; uint8_t/*bool*/ x119 = _addcarryx_u32(x116, x50, x95, &x118);
  { uint32_t x121; uint8_t/*bool*/ x122 = _addcarryx_u32(x119, x53, x98, &x121);
  { uint32_t x124; uint8_t/*bool*/ x125 = _addcarryx_u32(x122, x56, x101, &x124);
  { uint32_t x127; uint8_t/*bool*/ x128 = _addcarryx_u32(x125, x59, x104, &x127);
  { uint32_t x130; uint8_t/*bool*/ x131 = _addcarryx_u32(x128, x62, x107, &x130);
  { uint32_t x133; uint8_t/*bool*/ x134 = _addcarryx_u32(x131, x65, x110, &x133);
  { uint32_t x136; uint8_t/*bool*/ x137 = _addcarryx_u32(x134, x68, x113, &x136);
  { uint32_t x140;  uint32_t x139 = _mulx_u32(x7, x17, &x140);
  { uint32_t x143;  uint32_t x142 = _mulx_u32(x7, x19, &x143);
  { uint32_t x146;  uint32_t x145 = _mulx_u32(x7, x21, &x146);
  { uint32_t x149;  uint32_t x148 = _mulx_u32(x7, x23, &x149);
  { uint32_t x152;  uint32_t x151 = _mulx_u32(x7, x25, &x152);
  { uint32_t x155;  uint32_t x154 = _mulx_u32(x7, x27, &x155);
  { uint32_t x158;  uint32_t x157 = _mulx_u32(x7, x26, &x158);
  { uint32_t x160; uint8_t/*bool*/ x161 = _addcarryx_u32(0x0, x140, x142, &x160);
  { uint32_t x163; uint8_t/*bool*/ x164 = _addcarryx_u32(x161, x143, x145, &x163);
  { uint32_t x166; uint8_t/*bool*/ x167 = _addcarryx_u32(x164, x146, x148, &x166);
  { uint32_t x169; uint8_t/*bool*/ x170 = _addcarryx_u32(x167, x149, x151, &x169);
  { uint32_t x172; uint8_t/*bool*/ x173 = _addcarryx_u32(x170, x152, x154, &x172);
  { uint32_t x175; uint8_t/*bool*/ x176 = _addcarryx_u32(x173, x155, x157, &x175);
  { uint32_t x178; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x176, x158, &x178);
  { uint32_t x181; uint8_t/*bool*/ x182 = _addcarryx_u32(0x0, x118, x139, &x181);
  { uint32_t x184; uint8_t/*bool*/ x185 = _addcarryx_u32(x182, x121, x160, &x184);
  { uint32_t x187; uint8_t/*bool*/ x188 = _addcarryx_u32(x185, x124, x163, &x187);
  { uint32_t x190; uint8_t/*bool*/ x191 = _addcarryx_u32(x188, x127, x166, &x190);
  { uint32_t x193; uint8_t/*bool*/ x194 = _addcarryx_u32(x191, x130, x169, &x193);
  { uint32_t x196; uint8_t/*bool*/ x197 = _addcarryx_u32(x194, x133, x172, &x196);
  { uint32_t x199; uint8_t/*bool*/ x200 = _addcarryx_u32(x197, x136, x175, &x199);
  { uint32_t x202; uint8_t/*bool*/ x203 = _addcarryx_u32(x200, x137, x178, &x202);
  { uint32_t _;  uint32_t x205 = _mulx_u32(x181, 0xf0f0f0f1, &_);
  { uint32_t x209;  uint32_t x208 = _mulx_u32(x205, 0xffffffef, &x209);
  { uint32_t x212;  uint32_t x211 = _mulx_u32(x205, 0xffffffff, &x212);
  { uint32_t x215;  uint32_t x214 = _mulx_u32(x205, 0xffffffff, &x215);
  { uint32_t x218;  uint32_t x217 = _mulx_u32(x205, 0xffffffff, &x218);
  { uint32_t x221;  uint32_t x220 = _mulx_u32(x205, 0xffffffff, &x221);
  { uint32_t x224;  uint32_t x223 = _mulx_u32(x205, 0xffffffff, &x224);
  { uint8_t x227;  uint32_t x226 = _mulx_u32_out_u8(x205, 0x3f, &x227);
  { uint32_t x229; uint8_t/*bool*/ x230 = _addcarryx_u32(0x0, x209, x211, &x229);
  { uint32_t x232; uint8_t/*bool*/ x233 = _addcarryx_u32(x230, x212, x214, &x232);
  { uint32_t x235; uint8_t/*bool*/ x236 = _addcarryx_u32(x233, x215, x217, &x235);
  { uint32_t x238; uint8_t/*bool*/ x239 = _addcarryx_u32(x236, x218, x220, &x238);
  { uint32_t x241; uint8_t/*bool*/ x242 = _addcarryx_u32(x239, x221, x223, &x241);
  { uint32_t x244; uint8_t/*bool*/ x245 = _addcarryx_u32(x242, x224, x226, &x244);
  { uint8_t x246 = ((uint8_t)0x0 + x245);
  { uint8_t x247 = (x246 + x227);
  { uint32_t _; uint8_t/*bool*/ x250 = _addcarryx_u32(0x0, x181, x208, &_);
  { uint32_t x252; uint8_t/*bool*/ x253 = _addcarryx_u32(x250, x184, x229, &x252);
  { uint32_t x255; uint8_t/*bool*/ x256 = _addcarryx_u32(x253, x187, x232, &x255);
  { uint32_t x258; uint8_t/*bool*/ x259 = _addcarryx_u32(x256, x190, x235, &x258);
  { uint32_t x261; uint8_t/*bool*/ x262 = _addcarryx_u32(x259, x193, x238, &x261);
  { uint32_t x264; uint8_t/*bool*/ x265 = _addcarryx_u32(x262, x196, x241, &x264);
  { uint32_t x267; uint8_t/*bool*/ x268 = _addcarryx_u32(x265, x199, x244, &x267);
  { uint32_t x270; uint8_t/*bool*/ x271 = _addcarryx_u32(x268, x202, x247, &x270);
  { uint8_t x272 = ((uint8_t)x271 + x203);
  { uint32_t x275;  uint32_t x274 = _mulx_u32(x9, x17, &x275);
  { uint32_t x278;  uint32_t x277 = _mulx_u32(x9, x19, &x278);
  { uint32_t x281;  uint32_t x280 = _mulx_u32(x9, x21, &x281);
  { uint32_t x284;  uint32_t x283 = _mulx_u32(x9, x23, &x284);
  { uint32_t x287;  uint32_t x286 = _mulx_u32(x9, x25, &x287);
  { uint32_t x290;  uint32_t x289 = _mulx_u32(x9, x27, &x290);
  { uint32_t x293;  uint32_t x292 = _mulx_u32(x9, x26, &x293);
  { uint32_t x295; uint8_t/*bool*/ x296 = _addcarryx_u32(0x0, x275, x277, &x295);
  { uint32_t x298; uint8_t/*bool*/ x299 = _addcarryx_u32(x296, x278, x280, &x298);
  { uint32_t x301; uint8_t/*bool*/ x302 = _addcarryx_u32(x299, x281, x283, &x301);
  { uint32_t x304; uint8_t/*bool*/ x305 = _addcarryx_u32(x302, x284, x286, &x304);
  { uint32_t x307; uint8_t/*bool*/ x308 = _addcarryx_u32(x305, x287, x289, &x307);
  { uint32_t x310; uint8_t/*bool*/ x311 = _addcarryx_u32(x308, x290, x292, &x310);
  { uint32_t x313; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x311, x293, &x313);
  { uint32_t x316; uint8_t/*bool*/ x317 = _addcarryx_u32(0x0, x252, x274, &x316);
  { uint32_t x319; uint8_t/*bool*/ x320 = _addcarryx_u32(x317, x255, x295, &x319);
  { uint32_t x322; uint8_t/*bool*/ x323 = _addcarryx_u32(x320, x258, x298, &x322);
  { uint32_t x325; uint8_t/*bool*/ x326 = _addcarryx_u32(x323, x261, x301, &x325);
  { uint32_t x328; uint8_t/*bool*/ x329 = _addcarryx_u32(x326, x264, x304, &x328);
  { uint32_t x331; uint8_t/*bool*/ x332 = _addcarryx_u32(x329, x267, x307, &x331);
  { uint32_t x334; uint8_t/*bool*/ x335 = _addcarryx_u32(x332, x270, x310, &x334);
  { uint32_t x337; uint8_t/*bool*/ x338 = _addcarryx_u32(x335, x272, x313, &x337);
  { uint32_t _;  uint32_t x340 = _mulx_u32(x316, 0xf0f0f0f1, &_);
  { uint32_t x344;  uint32_t x343 = _mulx_u32(x340, 0xffffffef, &x344);
  { uint32_t x347;  uint32_t x346 = _mulx_u32(x340, 0xffffffff, &x347);
  { uint32_t x350;  uint32_t x349 = _mulx_u32(x340, 0xffffffff, &x350);
  { uint32_t x353;  uint32_t x352 = _mulx_u32(x340, 0xffffffff, &x353);
  { uint32_t x356;  uint32_t x355 = _mulx_u32(x340, 0xffffffff, &x356);
  { uint32_t x359;  uint32_t x358 = _mulx_u32(x340, 0xffffffff, &x359);
  { uint8_t x362;  uint32_t x361 = _mulx_u32_out_u8(x340, 0x3f, &x362);
  { uint32_t x364; uint8_t/*bool*/ x365 = _addcarryx_u32(0x0, x344, x346, &x364);
  { uint32_t x367; uint8_t/*bool*/ x368 = _addcarryx_u32(x365, x347, x349, &x367);
  { uint32_t x370; uint8_t/*bool*/ x371 = _addcarryx_u32(x368, x350, x352, &x370);
  { uint32_t x373; uint8_t/*bool*/ x374 = _addcarryx_u32(x371, x353, x355, &x373);
  { uint32_t x376; uint8_t/*bool*/ x377 = _addcarryx_u32(x374, x356, x358, &x376);
  { uint32_t x379; uint8_t/*bool*/ x380 = _addcarryx_u32(x377, x359, x361, &x379);
  { uint8_t x381 = ((uint8_t)0x0 + x380);
  { uint8_t x382 = (x381 + x362);
  { uint32_t _; uint8_t/*bool*/ x385 = _addcarryx_u32(0x0, x316, x343, &_);
  { uint32_t x387; uint8_t/*bool*/ x388 = _addcarryx_u32(x385, x319, x364, &x387);
  { uint32_t x390; uint8_t/*bool*/ x391 = _addcarryx_u32(x388, x322, x367, &x390);
  { uint32_t x393; uint8_t/*bool*/ x394 = _addcarryx_u32(x391, x325, x370, &x393);
  { uint32_t x396; uint8_t/*bool*/ x397 = _addcarryx_u32(x394, x328, x373, &x396);
  { uint32_t x399; uint8_t/*bool*/ x400 = _addcarryx_u32(x397, x331, x376, &x399);
  { uint32_t x402; uint8_t/*bool*/ x403 = _addcarryx_u32(x400, x334, x379, &x402);
  { uint32_t x405; uint8_t/*bool*/ x406 = _addcarryx_u32(x403, x337, x382, &x405);
  { uint8_t x407 = ((uint8_t)x406 + x338);
  { uint32_t x410;  uint32_t x409 = _mulx_u32(x11, x17, &x410);
  { uint32_t x413;  uint32_t x412 = _mulx_u32(x11, x19, &x413);
  { uint32_t x416;  uint32_t x415 = _mulx_u32(x11, x21, &x416);
  { uint32_t x419;  uint32_t x418 = _mulx_u32(x11, x23, &x419);
  { uint32_t x422;  uint32_t x421 = _mulx_u32(x11, x25, &x422);
  { uint32_t x425;  uint32_t x424 = _mulx_u32(x11, x27, &x425);
  { uint32_t x428;  uint32_t x427 = _mulx_u32(x11, x26, &x428);
  { uint32_t x430; uint8_t/*bool*/ x431 = _addcarryx_u32(0x0, x410, x412, &x430);
  { uint32_t x433; uint8_t/*bool*/ x434 = _addcarryx_u32(x431, x413, x415, &x433);
  { uint32_t x436; uint8_t/*bool*/ x437 = _addcarryx_u32(x434, x416, x418, &x436);
  { uint32_t x439; uint8_t/*bool*/ x440 = _addcarryx_u32(x437, x419, x421, &x439);
  { uint32_t x442; uint8_t/*bool*/ x443 = _addcarryx_u32(x440, x422, x424, &x442);
  { uint32_t x445; uint8_t/*bool*/ x446 = _addcarryx_u32(x443, x425, x427, &x445);
  { uint32_t x448; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x446, x428, &x448);
  { uint32_t x451; uint8_t/*bool*/ x452 = _addcarryx_u32(0x0, x387, x409, &x451);
  { uint32_t x454; uint8_t/*bool*/ x455 = _addcarryx_u32(x452, x390, x430, &x454);
  { uint32_t x457; uint8_t/*bool*/ x458 = _addcarryx_u32(x455, x393, x433, &x457);
  { uint32_t x460; uint8_t/*bool*/ x461 = _addcarryx_u32(x458, x396, x436, &x460);
  { uint32_t x463; uint8_t/*bool*/ x464 = _addcarryx_u32(x461, x399, x439, &x463);
  { uint32_t x466; uint8_t/*bool*/ x467 = _addcarryx_u32(x464, x402, x442, &x466);
  { uint32_t x469; uint8_t/*bool*/ x470 = _addcarryx_u32(x467, x405, x445, &x469);
  { uint32_t x472; uint8_t/*bool*/ x473 = _addcarryx_u32(x470, x407, x448, &x472);
  { uint32_t _;  uint32_t x475 = _mulx_u32(x451, 0xf0f0f0f1, &_);
  { uint32_t x479;  uint32_t x478 = _mulx_u32(x475, 0xffffffef, &x479);
  { uint32_t x482;  uint32_t x481 = _mulx_u32(x475, 0xffffffff, &x482);
  { uint32_t x485;  uint32_t x484 = _mulx_u32(x475, 0xffffffff, &x485);
  { uint32_t x488;  uint32_t x487 = _mulx_u32(x475, 0xffffffff, &x488);
  { uint32_t x491;  uint32_t x490 = _mulx_u32(x475, 0xffffffff, &x491);
  { uint32_t x494;  uint32_t x493 = _mulx_u32(x475, 0xffffffff, &x494);
  { uint8_t x497;  uint32_t x496 = _mulx_u32_out_u8(x475, 0x3f, &x497);
  { uint32_t x499; uint8_t/*bool*/ x500 = _addcarryx_u32(0x0, x479, x481, &x499);
  { uint32_t x502; uint8_t/*bool*/ x503 = _addcarryx_u32(x500, x482, x484, &x502);
  { uint32_t x505; uint8_t/*bool*/ x506 = _addcarryx_u32(x503, x485, x487, &x505);
  { uint32_t x508; uint8_t/*bool*/ x509 = _addcarryx_u32(x506, x488, x490, &x508);
  { uint32_t x511; uint8_t/*bool*/ x512 = _addcarryx_u32(x509, x491, x493, &x511);
  { uint32_t x514; uint8_t/*bool*/ x515 = _addcarryx_u32(x512, x494, x496, &x514);
  { uint8_t x516 = ((uint8_t)0x0 + x515);
  { uint8_t x517 = (x516 + x497);
  { uint32_t _; uint8_t/*bool*/ x520 = _addcarryx_u32(0x0, x451, x478, &_);
  { uint32_t x522; uint8_t/*bool*/ x523 = _addcarryx_u32(x520, x454, x499, &x522);
  { uint32_t x525; uint8_t/*bool*/ x526 = _addcarryx_u32(x523, x457, x502, &x525);
  { uint32_t x528; uint8_t/*bool*/ x529 = _addcarryx_u32(x526, x460, x505, &x528);
  { uint32_t x531; uint8_t/*bool*/ x532 = _addcarryx_u32(x529, x463, x508, &x531);
  { uint32_t x534; uint8_t/*bool*/ x535 = _addcarryx_u32(x532, x466, x511, &x534);
  { uint32_t x537; uint8_t/*bool*/ x538 = _addcarryx_u32(x535, x469, x514, &x537);
  { uint32_t x540; uint8_t/*bool*/ x541 = _addcarryx_u32(x538, x472, x517, &x540);
  { uint8_t x542 = ((uint8_t)x541 + x473);
  { uint32_t x545;  uint32_t x544 = _mulx_u32(x13, x17, &x545);
  { uint32_t x548;  uint32_t x547 = _mulx_u32(x13, x19, &x548);
  { uint32_t x551;  uint32_t x550 = _mulx_u32(x13, x21, &x551);
  { uint32_t x554;  uint32_t x553 = _mulx_u32(x13, x23, &x554);
  { uint32_t x557;  uint32_t x556 = _mulx_u32(x13, x25, &x557);
  { uint32_t x560;  uint32_t x559 = _mulx_u32(x13, x27, &x560);
  { uint32_t x563;  uint32_t x562 = _mulx_u32(x13, x26, &x563);
  { uint32_t x565; uint8_t/*bool*/ x566 = _addcarryx_u32(0x0, x545, x547, &x565);
  { uint32_t x568; uint8_t/*bool*/ x569 = _addcarryx_u32(x566, x548, x550, &x568);
  { uint32_t x571; uint8_t/*bool*/ x572 = _addcarryx_u32(x569, x551, x553, &x571);
  { uint32_t x574; uint8_t/*bool*/ x575 = _addcarryx_u32(x572, x554, x556, &x574);
  { uint32_t x577; uint8_t/*bool*/ x578 = _addcarryx_u32(x575, x557, x559, &x577);
  { uint32_t x580; uint8_t/*bool*/ x581 = _addcarryx_u32(x578, x560, x562, &x580);
  { uint32_t x583; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x581, x563, &x583);
  { uint32_t x586; uint8_t/*bool*/ x587 = _addcarryx_u32(0x0, x522, x544, &x586);
  { uint32_t x589; uint8_t/*bool*/ x590 = _addcarryx_u32(x587, x525, x565, &x589);
  { uint32_t x592; uint8_t/*bool*/ x593 = _addcarryx_u32(x590, x528, x568, &x592);
  { uint32_t x595; uint8_t/*bool*/ x596 = _addcarryx_u32(x593, x531, x571, &x595);
  { uint32_t x598; uint8_t/*bool*/ x599 = _addcarryx_u32(x596, x534, x574, &x598);
  { uint32_t x601; uint8_t/*bool*/ x602 = _addcarryx_u32(x599, x537, x577, &x601);
  { uint32_t x604; uint8_t/*bool*/ x605 = _addcarryx_u32(x602, x540, x580, &x604);
  { uint32_t x607; uint8_t/*bool*/ x608 = _addcarryx_u32(x605, x542, x583, &x607);
  { uint32_t _;  uint32_t x610 = _mulx_u32(x586, 0xf0f0f0f1, &_);
  { uint32_t x614;  uint32_t x613 = _mulx_u32(x610, 0xffffffef, &x614);
  { uint32_t x617;  uint32_t x616 = _mulx_u32(x610, 0xffffffff, &x617);
  { uint32_t x620;  uint32_t x619 = _mulx_u32(x610, 0xffffffff, &x620);
  { uint32_t x623;  uint32_t x622 = _mulx_u32(x610, 0xffffffff, &x623);
  { uint32_t x626;  uint32_t x625 = _mulx_u32(x610, 0xffffffff, &x626);
  { uint32_t x629;  uint32_t x628 = _mulx_u32(x610, 0xffffffff, &x629);
  { uint8_t x632;  uint32_t x631 = _mulx_u32_out_u8(x610, 0x3f, &x632);
  { uint32_t x634; uint8_t/*bool*/ x635 = _addcarryx_u32(0x0, x614, x616, &x634);
  { uint32_t x637; uint8_t/*bool*/ x638 = _addcarryx_u32(x635, x617, x619, &x637);
  { uint32_t x640; uint8_t/*bool*/ x641 = _addcarryx_u32(x638, x620, x622, &x640);
  { uint32_t x643; uint8_t/*bool*/ x644 = _addcarryx_u32(x641, x623, x625, &x643);
  { uint32_t x646; uint8_t/*bool*/ x647 = _addcarryx_u32(x644, x626, x628, &x646);
  { uint32_t x649; uint8_t/*bool*/ x650 = _addcarryx_u32(x647, x629, x631, &x649);
  { uint8_t x651 = ((uint8_t)0x0 + x650);
  { uint8_t x652 = (x651 + x632);
  { uint32_t _; uint8_t/*bool*/ x655 = _addcarryx_u32(0x0, x586, x613, &_);
  { uint32_t x657; uint8_t/*bool*/ x658 = _addcarryx_u32(x655, x589, x634, &x657);
  { uint32_t x660; uint8_t/*bool*/ x661 = _addcarryx_u32(x658, x592, x637, &x660);
  { uint32_t x663; uint8_t/*bool*/ x664 = _addcarryx_u32(x661, x595, x640, &x663);
  { uint32_t x666; uint8_t/*bool*/ x667 = _addcarryx_u32(x664, x598, x643, &x666);
  { uint32_t x669; uint8_t/*bool*/ x670 = _addcarryx_u32(x667, x601, x646, &x669);
  { uint32_t x672; uint8_t/*bool*/ x673 = _addcarryx_u32(x670, x604, x649, &x672);
  { uint32_t x675; uint8_t/*bool*/ x676 = _addcarryx_u32(x673, x607, x652, &x675);
  { uint8_t x677 = ((uint8_t)x676 + x608);
  { uint32_t x680;  uint32_t x679 = _mulx_u32(x15, x17, &x680);
  { uint32_t x683;  uint32_t x682 = _mulx_u32(x15, x19, &x683);
  { uint32_t x686;  uint32_t x685 = _mulx_u32(x15, x21, &x686);
  { uint32_t x689;  uint32_t x688 = _mulx_u32(x15, x23, &x689);
  { uint32_t x692;  uint32_t x691 = _mulx_u32(x15, x25, &x692);
  { uint32_t x695;  uint32_t x694 = _mulx_u32(x15, x27, &x695);
  { uint32_t x698;  uint32_t x697 = _mulx_u32(x15, x26, &x698);
  { uint32_t x700; uint8_t/*bool*/ x701 = _addcarryx_u32(0x0, x680, x682, &x700);
  { uint32_t x703; uint8_t/*bool*/ x704 = _addcarryx_u32(x701, x683, x685, &x703);
  { uint32_t x706; uint8_t/*bool*/ x707 = _addcarryx_u32(x704, x686, x688, &x706);
  { uint32_t x709; uint8_t/*bool*/ x710 = _addcarryx_u32(x707, x689, x691, &x709);
  { uint32_t x712; uint8_t/*bool*/ x713 = _addcarryx_u32(x710, x692, x694, &x712);
  { uint32_t x715; uint8_t/*bool*/ x716 = _addcarryx_u32(x713, x695, x697, &x715);
  { uint32_t x718; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x716, x698, &x718);
  { uint32_t x721; uint8_t/*bool*/ x722 = _addcarryx_u32(0x0, x657, x679, &x721);
  { uint32_t x724; uint8_t/*bool*/ x725 = _addcarryx_u32(x722, x660, x700, &x724);
  { uint32_t x727; uint8_t/*bool*/ x728 = _addcarryx_u32(x725, x663, x703, &x727);
  { uint32_t x730; uint8_t/*bool*/ x731 = _addcarryx_u32(x728, x666, x706, &x730);
  { uint32_t x733; uint8_t/*bool*/ x734 = _addcarryx_u32(x731, x669, x709, &x733);
  { uint32_t x736; uint8_t/*bool*/ x737 = _addcarryx_u32(x734, x672, x712, &x736);
  { uint32_t x739; uint8_t/*bool*/ x740 = _addcarryx_u32(x737, x675, x715, &x739);
  { uint32_t x742; uint8_t/*bool*/ x743 = _addcarryx_u32(x740, x677, x718, &x742);
  { uint32_t _;  uint32_t x745 = _mulx_u32(x721, 0xf0f0f0f1, &_);
  { uint32_t x749;  uint32_t x748 = _mulx_u32(x745, 0xffffffef, &x749);
  { uint32_t x752;  uint32_t x751 = _mulx_u32(x745, 0xffffffff, &x752);
  { uint32_t x755;  uint32_t x754 = _mulx_u32(x745, 0xffffffff, &x755);
  { uint32_t x758;  uint32_t x757 = _mulx_u32(x745, 0xffffffff, &x758);
  { uint32_t x761;  uint32_t x760 = _mulx_u32(x745, 0xffffffff, &x761);
  { uint32_t x764;  uint32_t x763 = _mulx_u32(x745, 0xffffffff, &x764);
  { uint8_t x767;  uint32_t x766 = _mulx_u32_out_u8(x745, 0x3f, &x767);
  { uint32_t x769; uint8_t/*bool*/ x770 = _addcarryx_u32(0x0, x749, x751, &x769);
  { uint32_t x772; uint8_t/*bool*/ x773 = _addcarryx_u32(x770, x752, x754, &x772);
  { uint32_t x775; uint8_t/*bool*/ x776 = _addcarryx_u32(x773, x755, x757, &x775);
  { uint32_t x778; uint8_t/*bool*/ x779 = _addcarryx_u32(x776, x758, x760, &x778);
  { uint32_t x781; uint8_t/*bool*/ x782 = _addcarryx_u32(x779, x761, x763, &x781);
  { uint32_t x784; uint8_t/*bool*/ x785 = _addcarryx_u32(x782, x764, x766, &x784);
  { uint8_t x786 = ((uint8_t)0x0 + x785);
  { uint8_t x787 = (x786 + x767);
  { uint32_t _; uint8_t/*bool*/ x790 = _addcarryx_u32(0x0, x721, x748, &_);
  { uint32_t x792; uint8_t/*bool*/ x793 = _addcarryx_u32(x790, x724, x769, &x792);
  { uint32_t x795; uint8_t/*bool*/ x796 = _addcarryx_u32(x793, x727, x772, &x795);
  { uint32_t x798; uint8_t/*bool*/ x799 = _addcarryx_u32(x796, x730, x775, &x798);
  { uint32_t x801; uint8_t/*bool*/ x802 = _addcarryx_u32(x799, x733, x778, &x801);
  { uint32_t x804; uint8_t/*bool*/ x805 = _addcarryx_u32(x802, x736, x781, &x804);
  { uint32_t x807; uint8_t/*bool*/ x808 = _addcarryx_u32(x805, x739, x784, &x807);
  { uint32_t x810; uint8_t/*bool*/ x811 = _addcarryx_u32(x808, x742, x787, &x810);
  { uint8_t x812 = ((uint8_t)x811 + x743);
  { uint32_t x815;  uint32_t x814 = _mulx_u32(x14, x17, &x815);
  { uint32_t x818;  uint32_t x817 = _mulx_u32(x14, x19, &x818);
  { uint32_t x821;  uint32_t x820 = _mulx_u32(x14, x21, &x821);
  { uint32_t x824;  uint32_t x823 = _mulx_u32(x14, x23, &x824);
  { uint32_t x827;  uint32_t x826 = _mulx_u32(x14, x25, &x827);
  { uint32_t x830;  uint32_t x829 = _mulx_u32(x14, x27, &x830);
  { uint32_t x833;  uint32_t x832 = _mulx_u32(x14, x26, &x833);
  { uint32_t x835; uint8_t/*bool*/ x836 = _addcarryx_u32(0x0, x815, x817, &x835);
  { uint32_t x838; uint8_t/*bool*/ x839 = _addcarryx_u32(x836, x818, x820, &x838);
  { uint32_t x841; uint8_t/*bool*/ x842 = _addcarryx_u32(x839, x821, x823, &x841);
  { uint32_t x844; uint8_t/*bool*/ x845 = _addcarryx_u32(x842, x824, x826, &x844);
  { uint32_t x847; uint8_t/*bool*/ x848 = _addcarryx_u32(x845, x827, x829, &x847);
  { uint32_t x850; uint8_t/*bool*/ x851 = _addcarryx_u32(x848, x830, x832, &x850);
  { uint32_t x853; uint8_t/*bool*/ _ = _addcarryx_u32(0x0, x851, x833, &x853);
  { uint32_t x856; uint8_t/*bool*/ x857 = _addcarryx_u32(0x0, x792, x814, &x856);
  { uint32_t x859; uint8_t/*bool*/ x860 = _addcarryx_u32(x857, x795, x835, &x859);
  { uint32_t x862; uint8_t/*bool*/ x863 = _addcarryx_u32(x860, x798, x838, &x862);
  { uint32_t x865; uint8_t/*bool*/ x866 = _addcarryx_u32(x863, x801, x841, &x865);
  { uint32_t x868; uint8_t/*bool*/ x869 = _addcarryx_u32(x866, x804, x844, &x868);
  { uint32_t x871; uint8_t/*bool*/ x872 = _addcarryx_u32(x869, x807, x847, &x871);
  { uint32_t x874; uint8_t/*bool*/ x875 = _addcarryx_u32(x872, x810, x850, &x874);
  { uint32_t x877; uint8_t/*bool*/ x878 = _addcarryx_u32(x875, x812, x853, &x877);
  { uint32_t _;  uint32_t x880 = _mulx_u32(x856, 0xf0f0f0f1, &_);
  { uint32_t x884;  uint32_t x883 = _mulx_u32(x880, 0xffffffef, &x884);
  { uint32_t x887;  uint32_t x886 = _mulx_u32(x880, 0xffffffff, &x887);
  { uint32_t x890;  uint32_t x889 = _mulx_u32(x880, 0xffffffff, &x890);
  { uint32_t x893;  uint32_t x892 = _mulx_u32(x880, 0xffffffff, &x893);
  { uint32_t x896;  uint32_t x895 = _mulx_u32(x880, 0xffffffff, &x896);
  { uint32_t x899;  uint32_t x898 = _mulx_u32(x880, 0xffffffff, &x899);
  { uint8_t x902;  uint32_t x901 = _mulx_u32_out_u8(x880, 0x3f, &x902);
  { uint32_t x904; uint8_t/*bool*/ x905 = _addcarryx_u32(0x0, x884, x886, &x904);
  { uint32_t x907; uint8_t/*bool*/ x908 = _addcarryx_u32(x905, x887, x889, &x907);
  { uint32_t x910; uint8_t/*bool*/ x911 = _addcarryx_u32(x908, x890, x892, &x910);
  { uint32_t x913; uint8_t/*bool*/ x914 = _addcarryx_u32(x911, x893, x895, &x913);
  { uint32_t x916; uint8_t/*bool*/ x917 = _addcarryx_u32(x914, x896, x898, &x916);
  { uint32_t x919; uint8_t/*bool*/ x920 = _addcarryx_u32(x917, x899, x901, &x919);
  { uint8_t x921 = ((uint8_t)0x0 + x920);
  { uint8_t x922 = (x921 + x902);
  { uint32_t _; uint8_t/*bool*/ x925 = _addcarryx_u32(0x0, x856, x883, &_);
  { uint32_t x927; uint8_t/*bool*/ x928 = _addcarryx_u32(x925, x859, x904, &x927);
  { uint32_t x930; uint8_t/*bool*/ x931 = _addcarryx_u32(x928, x862, x907, &x930);
  { uint32_t x933; uint8_t/*bool*/ x934 = _addcarryx_u32(x931, x865, x910, &x933);
  { uint32_t x936; uint8_t/*bool*/ x937 = _addcarryx_u32(x934, x868, x913, &x936);
  { uint32_t x939; uint8_t/*bool*/ x940 = _addcarryx_u32(x937, x871, x916, &x939);
  { uint32_t x942; uint8_t/*bool*/ x943 = _addcarryx_u32(x940, x874, x919, &x942);
  { uint32_t x945; uint8_t/*bool*/ x946 = _addcarryx_u32(x943, x877, x922, &x945);
  { uint8_t x947 = ((uint8_t)x946 + x878);
  { uint32_t x949; uint8_t/*bool*/ x950 = _subborrow_u32(0x0, x927, 0xffffffef, &x949);
  { uint32_t x952; uint8_t/*bool*/ x953 = _subborrow_u32(x950, x930, 0xffffffff, &x952);
  { uint32_t x955; uint8_t/*bool*/ x956 = _subborrow_u32(x953, x933, 0xffffffff, &x955);
  { uint32_t x958; uint8_t/*bool*/ x959 = _subborrow_u32(x956, x936, 0xffffffff, &x958);
  { uint32_t x961; uint8_t/*bool*/ x962 = _subborrow_u32(x959, x939, 0xffffffff, &x961);
  { uint32_t x964; uint8_t/*bool*/ x965 = _subborrow_u32(x962, x942, 0xffffffff, &x964);
  { uint32_t x967; uint8_t/*bool*/ x968 = _subborrow_u32(x965, x945, 0x3f, &x967);
  { uint32_t _; uint8_t/*bool*/ x971 = _subborrow_u32(x968, x947, 0x0, &_);
  { uint32_t x972 = cmovznz32(x971, x967, x945);
  { uint32_t x973 = cmovznz32(x971, x964, x942);
  { uint32_t x974 = cmovznz32(x971, x961, x939);
  { uint32_t x975 = cmovznz32(x971, x958, x936);
  { uint32_t x976 = cmovznz32(x971, x955, x933);
  { uint32_t x977 = cmovznz32(x971, x952, x930);
  { uint32_t x978 = cmovznz32(x971, x949, x927);
  out[0] = x978;
  out[1] = x977;
  out[2] = x976;
  out[3] = x975;
  out[4] = x974;
  out[5] = x973;
  out[6] = x972;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
