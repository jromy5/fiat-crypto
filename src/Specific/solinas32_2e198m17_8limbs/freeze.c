static void freeze(uint32_t out[8], const uint32_t in1[8]) {
  { const uint32_t x13 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x16; uint8_t/*bool*/ x17 = _subborrow_u25(0x0, x2, 0x1ffffef, &x16);
  { uint32_t x19; uint8_t/*bool*/ x20 = _subborrow_u25(x17, x4, 0x1ffffff, &x19);
  { uint32_t x22; uint8_t/*bool*/ x23 = _subborrow_u25(x20, x6, 0x1ffffff, &x22);
  { uint32_t x25, uint8_t/*bool*/ x26 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x23, Return x8, 0xffffff);
  { uint32_t x28; uint8_t/*bool*/ x29 = _subborrow_u25(x26, x10, 0x1ffffff, &x28);
  { uint32_t x31; uint8_t/*bool*/ x32 = _subborrow_u25(x29, x12, 0x1ffffff, &x31);
  { uint32_t x34; uint8_t/*bool*/ x35 = _subborrow_u25(x32, x14, 0x1ffffff, &x34);
  { uint32_t x37, uint8_t/*bool*/ x38 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x35, Return x13, 0xffffff);
  { uint32_t x39 = cmovznz32(x38, 0x0, 0xffffffff);
  { uint32_t x40 = (x39 & 0x1ffffef);
  { uint32_t x42; uint8_t/*bool*/ x43 = _addcarryx_u25(0x0, x16, x40, &x42);
  { uint32_t x44 = (x39 & 0x1ffffff);
  { uint32_t x46; uint8_t/*bool*/ x47 = _addcarryx_u25(x43, x19, x44, &x46);
  { uint32_t x48 = (x39 & 0x1ffffff);
  { uint32_t x50; uint8_t/*bool*/ x51 = _addcarryx_u25(x47, x22, x48, &x50);
  { uint32_t x52 = (x39 & 0xffffff);
  { uint32_t x54, uint8_t/*bool*/ x55 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x51, Return x25, Return x52);
  { uint32_t x56 = (x39 & 0x1ffffff);
  { uint32_t x58; uint8_t/*bool*/ x59 = _addcarryx_u25(x55, x28, x56, &x58);
  { uint32_t x60 = (x39 & 0x1ffffff);
  { uint32_t x62; uint8_t/*bool*/ x63 = _addcarryx_u25(x59, x31, x60, &x62);
  { uint32_t x64 = (x39 & 0x1ffffff);
  { uint32_t x66; uint8_t/*bool*/ x67 = _addcarryx_u25(x63, x34, x64, &x66);
  { uint32_t x68 = (x39 & 0xffffff);
  { uint32_t x70, uint8_t/*bool*/ _ = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x67, Return x37, Return x68);
  out[0] = x42;
  out[1] = x46;
  out[2] = x50;
  out[3] = x54;
  out[4] = x58;
  out[5] = x62;
  out[6] = x66;
  out[7] = x70;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
