static void fesub(uint32_t out[7], const uint32_t in1[7], const uint32_t in2[7]) {
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
  { uint32_t x29; uint8_t/*bool*/ x30 = _subborrow_u32(0x0, x5, x17, &x29);
  { uint32_t x32; uint8_t/*bool*/ x33 = _subborrow_u32(x30, x7, x19, &x32);
  { uint32_t x35; uint8_t/*bool*/ x36 = _subborrow_u32(x33, x9, x21, &x35);
  { uint32_t x38; uint8_t/*bool*/ x39 = _subborrow_u32(x36, x11, x23, &x38);
  { uint32_t x41; uint8_t/*bool*/ x42 = _subborrow_u32(x39, x13, x25, &x41);
  { uint32_t x44; uint8_t/*bool*/ x45 = _subborrow_u32(x42, x15, x27, &x44);
  { uint32_t x47; uint8_t/*bool*/ x48 = _subborrow_u32(x45, x14, x26, &x47);
  { uint32_t x49 = cmovznz32(x48, 0x0, 0xffffffff);
  { uint32_t x50 = (x49 & 0xfffffff1);
  { uint32_t x52; uint8_t/*bool*/ x53 = _addcarryx_u32(0x0, x29, x50, &x52);
  { uint32_t x54 = (x49 & 0xffffffff);
  { uint32_t x56; uint8_t/*bool*/ x57 = _addcarryx_u32(x53, x32, x54, &x56);
  { uint32_t x58 = (x49 & 0xffffffff);
  { uint32_t x60; uint8_t/*bool*/ x61 = _addcarryx_u32(x57, x35, x58, &x60);
  { uint32_t x62 = (x49 & 0xffffffff);
  { uint32_t x64; uint8_t/*bool*/ x65 = _addcarryx_u32(x61, x38, x62, &x64);
  { uint32_t x66 = (x49 & 0xffffffff);
  { uint32_t x68; uint8_t/*bool*/ x69 = _addcarryx_u32(x65, x41, x66, &x68);
  { uint32_t x70 = (x49 & 0xffffffff);
  { uint32_t x72; uint8_t/*bool*/ x73 = _addcarryx_u32(x69, x44, x70, &x72);
  { uint8_t x74 = ((uint8_t)x49 & 0xf);
  { uint32_t x76; uint8_t/*bool*/ _ = _addcarryx_u32(x73, x47, x74, &x76);
  out[0] = x52;
  out[1] = x56;
  out[2] = x60;
  out[3] = x64;
  out[4] = x68;
  out[5] = x72;
  out[6] = x76;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
