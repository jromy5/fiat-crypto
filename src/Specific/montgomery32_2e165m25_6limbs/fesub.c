static void fesub(uint32_t out[6], const uint32_t in1[6], const uint32_t in2[6]) {
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
  { uint32_t x25; uint8_t/*bool*/ x26 = _subborrow_u32(0x0, x5, x15, &x25);
  { uint32_t x28; uint8_t/*bool*/ x29 = _subborrow_u32(x26, x7, x17, &x28);
  { uint32_t x31; uint8_t/*bool*/ x32 = _subborrow_u32(x29, x9, x19, &x31);
  { uint32_t x34; uint8_t/*bool*/ x35 = _subborrow_u32(x32, x11, x21, &x34);
  { uint32_t x37; uint8_t/*bool*/ x38 = _subborrow_u32(x35, x13, x23, &x37);
  { uint32_t x40; uint8_t/*bool*/ x41 = _subborrow_u32(x38, x12, x22, &x40);
  { uint32_t x42 = cmovznz32(x41, 0x0, 0xffffffff);
  { uint32_t x43 = (x42 & 0xffffffe7);
  { uint32_t x45; uint8_t/*bool*/ x46 = _addcarryx_u32(0x0, x25, x43, &x45);
  { uint32_t x47 = (x42 & 0xffffffff);
  { uint32_t x49; uint8_t/*bool*/ x50 = _addcarryx_u32(x46, x28, x47, &x49);
  { uint32_t x51 = (x42 & 0xffffffff);
  { uint32_t x53; uint8_t/*bool*/ x54 = _addcarryx_u32(x50, x31, x51, &x53);
  { uint32_t x55 = (x42 & 0xffffffff);
  { uint32_t x57; uint8_t/*bool*/ x58 = _addcarryx_u32(x54, x34, x55, &x57);
  { uint32_t x59 = (x42 & 0xffffffff);
  { uint32_t x61; uint8_t/*bool*/ x62 = _addcarryx_u32(x58, x37, x59, &x61);
  { uint8_t x63 = ((uint8_t)x42 & 0x1f);
  { uint32_t x65; uint8_t/*bool*/ _ = _addcarryx_u32(x62, x40, x63, &x65);
  out[0] = x45;
  out[1] = x49;
  out[2] = x53;
  out[3] = x57;
  out[4] = x61;
  out[5] = x65;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
