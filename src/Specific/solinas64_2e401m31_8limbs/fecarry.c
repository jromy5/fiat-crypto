static void fecarry(uint64_t out[8], const uint64_t in1[8]) {
  { const uint64_t x13 = in1[7];
  { const uint64_t x14 = in1[6];
  { const uint64_t x12 = in1[5];
  { const uint64_t x10 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint64_t x15 = (x2 >> 0x33);
  { uint64_t x16 = (x2 & 0x7ffffffffffff);
  { uint64_t x17 = (x15 + x4);
  { uint64_t x18 = (x17 >> 0x32);
  { uint64_t x19 = (x17 & 0x3ffffffffffff);
  { uint64_t x20 = (x18 + x6);
  { uint64_t x21 = (x20 >> 0x32);
  { uint64_t x22 = (x20 & 0x3ffffffffffff);
  { uint64_t x23 = (x21 + x8);
  { uint64_t x24 = (x23 >> 0x32);
  { uint64_t x25 = (x23 & 0x3ffffffffffff);
  { uint64_t x26 = (x24 + x10);
  { uint64_t x27 = (x26 >> 0x32);
  { uint64_t x28 = (x26 & 0x3ffffffffffff);
  { uint64_t x29 = (x27 + x12);
  { uint64_t x30 = (x29 >> 0x32);
  { uint64_t x31 = (x29 & 0x3ffffffffffff);
  { uint64_t x32 = (x30 + x14);
  { uint64_t x33 = (x32 >> 0x32);
  { uint64_t x34 = (x32 & 0x3ffffffffffff);
  { uint64_t x35 = (x33 + x13);
  { uint64_t x36 = (x35 >> 0x32);
  { uint64_t x37 = (x35 & 0x3ffffffffffff);
  { uint64_t x38 = (x16 + (0x1f * x36));
  { uint64_t x39 = (x38 >> 0x33);
  { uint64_t x40 = (x38 & 0x7ffffffffffff);
  { uint64_t x41 = (x39 + x19);
  { uint64_t x42 = (x41 >> 0x32);
  { uint64_t x43 = (x41 & 0x3ffffffffffff);
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
