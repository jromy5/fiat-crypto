static void fecarry(uint32_t out[9], const uint32_t in1[9]) {
  { const uint32_t x15 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x17 = (x2 >> 0x1b);
  { uint32_t x18 = (x2 & 0x7ffffff);
  { uint32_t x19 = (x17 + x4);
  { uint32_t x20 = (x19 >> 0x1b);
  { uint32_t x21 = (x19 & 0x7ffffff);
  { uint32_t x22 = (x20 + x6);
  { uint32_t x23 = (x22 >> 0x1b);
  { uint32_t x24 = (x22 & 0x7ffffff);
  { uint32_t x25 = (x23 + x8);
  { uint32_t x26 = (x25 >> 0x1b);
  { uint32_t x27 = (x25 & 0x7ffffff);
  { uint32_t x28 = (x26 + x10);
  { uint32_t x29 = (x28 >> 0x1b);
  { uint32_t x30 = (x28 & 0x7ffffff);
  { uint32_t x31 = (x29 + x12);
  { uint32_t x32 = (x31 >> 0x1b);
  { uint32_t x33 = (x31 & 0x7ffffff);
  { uint32_t x34 = (x32 + x14);
  { uint32_t x35 = (x34 >> 0x1b);
  { uint32_t x36 = (x34 & 0x7ffffff);
  { uint32_t x37 = (x35 + x16);
  { uint32_t x38 = (x37 >> 0x1b);
  { uint32_t x39 = (x37 & 0x7ffffff);
  { uint32_t x40 = (x38 + x15);
  { uint32_t x41 = (x40 >> 0x1b);
  { uint32_t x42 = (x40 & 0x7ffffff);
  { uint32_t x43 = (x18 + (0x9 * x41));
  { uint32_t x44 = (x43 >> 0x1b);
  { uint32_t x45 = (x43 & 0x7ffffff);
  { uint32_t x46 = (x44 + x21);
  { uint32_t x47 = (x46 >> 0x1b);
  { uint32_t x48 = (x46 & 0x7ffffff);
  out[0] = x45;
  out[1] = x48;
  out[2] = (x47 + x24);
  out[3] = x27;
  out[4] = x30;
  out[5] = x33;
  out[6] = x36;
  out[7] = x39;
  out[8] = x42;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
