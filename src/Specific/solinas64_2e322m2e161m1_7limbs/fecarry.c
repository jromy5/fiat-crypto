static void fecarry(uint64_t out[7], const uint64_t in1[7]) {
  { const uint64_t x11 = in1[6];
  { const uint64_t x12 = in1[5];
  { const uint64_t x10 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint64_t x13 = (x6 >> 0x2e);
  { uint64_t x14 = (x6 & 0x3fffffffffff);
  { uint64_t x15 = (x11 >> 0x2e);
  { uint64_t x16 = (x11 & 0x3fffffffffff);
  { uint64_t x17 = ((0x400000000000 * x15) + x16);
  { uint64_t x18 = (x17 >> 0x2e);
  { uint64_t x19 = (x17 & 0x3fffffffffff);
  { uint64_t x20 = ((x13 + x8) + (0x800000 * x18));
  { uint64_t x21 = (x20 >> 0x2e);
  { uint64_t x22 = (x20 & 0x3fffffffffff);
  { uint64_t x23 = (x2 + x18);
  { uint64_t x24 = (x23 >> 0x2e);
  { uint64_t x25 = (x23 & 0x3fffffffffff);
  { uint64_t x26 = (x21 + x10);
  { uint64_t x27 = (x26 >> 0x2e);
  { uint64_t x28 = (x26 & 0x3fffffffffff);
  { uint64_t x29 = (x24 + x4);
  { uint64_t x30 = (x29 >> 0x2e);
  { uint64_t x31 = (x29 & 0x3fffffffffff);
  { uint64_t x32 = (x27 + x12);
  { uint64_t x33 = (x32 >> 0x2e);
  { uint64_t x34 = (x32 & 0x3fffffffffff);
  { uint64_t x35 = (x30 + x14);
  { uint64_t x36 = (x35 >> 0x2e);
  { uint64_t x37 = (x35 & 0x3fffffffffff);
  { uint64_t x38 = (x33 + x19);
  { uint64_t x39 = (x38 >> 0x2e);
  { uint64_t x40 = (x38 & 0x3fffffffffff);
  { uint64_t x41 = ((0x400000000000 * x39) + x40);
  { uint64_t x42 = (x41 >> 0x2e);
  { uint64_t x43 = (x41 & 0x3fffffffffff);
  { uint64_t x44 = ((x36 + x22) + (0x800000 * x42));
  { uint64_t x45 = (x44 >> 0x2e);
  { uint64_t x46 = (x44 & 0x3fffffffffff);
  { uint64_t x47 = (x25 + x42);
  { uint64_t x48 = (x47 >> 0x2e);
  { uint64_t x49 = (x47 & 0x3fffffffffff);
  out[0] = x49;
  out[1] = (x48 + x31);
  out[2] = x37;
  out[3] = x46;
  out[4] = (x45 + x28);
  out[5] = x34;
  out[6] = x43;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
