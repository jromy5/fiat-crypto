static void fecarry(uint32_t out[8], const uint32_t in1[8]) {
  { const uint32_t x13 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x15 = (x2 >> 0x1a);
  { uint32_t x16 = (x2 & 0x3ffffff);
  { uint32_t x17 = (x15 + x4);
  { uint32_t x18 = (x17 >> 0x1a);
  { uint32_t x19 = (x17 & 0x3ffffff);
  { uint32_t x20 = (x18 + x6);
  { uint32_t x21 = (x20 >> 0x1a);
  { uint32_t x22 = (x20 & 0x3ffffff);
  { uint32_t x23 = (x21 + x8);
  { uint32_t x24 = (x23 >> 0x19);
  { uint32_t x25 = (x23 & 0x1ffffff);
  { uint32_t x26 = (x24 + x10);
  { uint32_t x27 = (x26 >> 0x1a);
  { uint32_t x28 = (x26 & 0x3ffffff);
  { uint32_t x29 = (x27 + x12);
  { uint32_t x30 = (x29 >> 0x1a);
  { uint32_t x31 = (x29 & 0x3ffffff);
  { uint32_t x32 = (x30 + x14);
  { uint32_t x33 = (x32 >> 0x1a);
  { uint32_t x34 = (x32 & 0x3ffffff);
  { uint32_t x35 = (x33 + x13);
  { uint32_t x36 = (x35 >> 0x19);
  { uint32_t x37 = (x35 & 0x1ffffff);
  { uint32_t x38 = (x16 + (0x5 * x36));
  { uint32_t x39 = (x38 >> 0x1a);
  { uint32_t x40 = (x38 & 0x3ffffff);
  { uint32_t x41 = (x39 + x19);
  { uint32_t x42 = (x41 >> 0x1a);
  { uint32_t x43 = (x41 & 0x3ffffff);
  out[0] = x40;
  out[1] = x43;
  out[2] = (x42 + x22);
  out[3] = x25;
  out[4] = x28;
  out[5] = x31;
  out[6] = x34;
  out[7] = x37;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
