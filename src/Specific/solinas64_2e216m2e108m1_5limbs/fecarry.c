static void fecarry(uint64_t out[5], const uint64_t in1[5]) {
  { const uint64_t x7 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint64_t x9 = (x4 >> 0x2b);
  { uint64_t x10 = (x4 & 0x7ffffffffff);
  { uint64_t x11 = (x7 >> 0x2b);
  { uint64_t x12 = (x7 & 0x7ffffffffff);
  { uint64_t x13 = ((0x80000000000 * x11) + x12);
  { uint64_t x14 = (x13 >> 0x2b);
  { uint64_t x15 = (x13 & 0x7ffffffffff);
  { uint64_t x16 = ((x9 + x6) + (0x200000 * x14));
  { uint64_t x17 = (x16 >> 0x2b);
  { uint64_t x18 = (x16 & 0x7ffffffffff);
  { uint64_t x19 = (x2 + x14);
  { uint64_t x20 = (x19 >> 0x2c);
  { uint64_t x21 = (x19 & 0xfffffffffff);
  { uint64_t x22 = (x17 + x8);
  { uint64_t x23 = (x22 >> 0x2b);
  { uint64_t x24 = (x22 & 0x7ffffffffff);
  { uint64_t x25 = (x20 + x10);
  { uint64_t x26 = (x25 >> 0x2b);
  { uint64_t x27 = (x25 & 0x7ffffffffff);
  { uint64_t x28 = (x23 + x15);
  { uint64_t x29 = (x28 >> 0x2b);
  { uint64_t x30 = (x28 & 0x7ffffffffff);
  { uint64_t x31 = ((0x80000000000 * x29) + x30);
  { uint64_t x32 = (x31 >> 0x2b);
  { uint64_t x33 = (x31 & 0x7ffffffffff);
  { uint64_t x34 = ((x26 + x18) + (0x200000 * x32));
  { uint64_t x35 = (x34 >> 0x2b);
  { uint64_t x36 = (x34 & 0x7ffffffffff);
  { uint64_t x37 = (x21 + x32);
  { uint64_t x38 = (x37 >> 0x2c);
  { uint64_t x39 = (x37 & 0xfffffffffff);
  out[0] = x39;
  out[1] = (x38 + x27);
  out[2] = x36;
  out[3] = (x35 + x24);
  out[4] = x33;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
