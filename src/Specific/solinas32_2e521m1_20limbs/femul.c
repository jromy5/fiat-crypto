static void femul(uint32_t out[20], const uint32_t in1[20], const uint32_t in2[20]) {
  { const uint32_t x40 = in1[19];
  { const uint32_t x41 = in1[18];
  { const uint32_t x39 = in1[17];
  { const uint32_t x37 = in1[16];
  { const uint32_t x35 = in1[15];
  { const uint32_t x33 = in1[14];
  { const uint32_t x31 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x78 = in2[19];
  { const uint32_t x79 = in2[18];
  { const uint32_t x77 = in2[17];
  { const uint32_t x75 = in2[16];
  { const uint32_t x73 = in2[15];
  { const uint32_t x71 = in2[14];
  { const uint32_t x69 = in2[13];
  { const uint32_t x67 = in2[12];
  { const uint32_t x65 = in2[11];
  { const uint32_t x63 = in2[10];
  { const uint32_t x61 = in2[9];
  { const uint32_t x59 = in2[8];
  { const uint32_t x57 = in2[7];
  { const uint32_t x55 = in2[6];
  { const uint32_t x53 = in2[5];
  { const uint32_t x51 = in2[4];
  { const uint32_t x49 = in2[3];
  { const uint32_t x47 = in2[2];
  { const uint32_t x45 = in2[1];
  { const uint32_t x43 = in2[0];
  { uint64_t x80 = (((uint64_t)x5 * x78) + ((0x2 * ((uint64_t)x7 * x79)) + ((0x2 * ((uint64_t)x9 * x77)) + ((0x2 * ((uint64_t)x11 * x75)) + ((0x2 * ((uint64_t)x13 * x73)) + ((0x2 * ((uint64_t)x15 * x71)) + ((0x2 * ((uint64_t)x17 * x69)) + ((0x2 * ((uint64_t)x19 * x67)) + ((0x2 * ((uint64_t)x21 * x65)) + ((0x2 * ((uint64_t)x23 * x63)) + ((0x2 * ((uint64_t)x25 * x61)) + ((0x2 * ((uint64_t)x27 * x59)) + ((0x2 * ((uint64_t)x29 * x57)) + ((0x2 * ((uint64_t)x31 * x55)) + ((0x2 * ((uint64_t)x33 * x53)) + ((0x2 * ((uint64_t)x35 * x51)) + ((0x2 * ((uint64_t)x37 * x49)) + ((0x2 * ((uint64_t)x39 * x47)) + ((0x2 * ((uint64_t)x41 * x45)) + ((uint64_t)x40 * x43))))))))))))))))))));
  { uint64_t x81 = ((((uint64_t)x5 * x79) + ((0x2 * ((uint64_t)x7 * x77)) + ((0x2 * ((uint64_t)x9 * x75)) + ((0x2 * ((uint64_t)x11 * x73)) + ((0x2 * ((uint64_t)x13 * x71)) + ((0x2 * ((uint64_t)x15 * x69)) + ((0x2 * ((uint64_t)x17 * x67)) + ((0x2 * ((uint64_t)x19 * x65)) + ((0x2 * ((uint64_t)x21 * x63)) + ((0x2 * ((uint64_t)x23 * x61)) + ((0x2 * ((uint64_t)x25 * x59)) + ((0x2 * ((uint64_t)x27 * x57)) + ((0x2 * ((uint64_t)x29 * x55)) + ((0x2 * ((uint64_t)x31 * x53)) + ((0x2 * ((uint64_t)x33 * x51)) + ((0x2 * ((uint64_t)x35 * x49)) + ((0x2 * ((uint64_t)x37 * x47)) + ((0x2 * ((uint64_t)x39 * x45)) + ((uint64_t)x41 * x43))))))))))))))))))) + ((uint64_t)x40 * x78));
  { uint64_t x82 = ((((uint64_t)x5 * x77) + ((0x2 * ((uint64_t)x7 * x75)) + ((0x2 * ((uint64_t)x9 * x73)) + ((0x2 * ((uint64_t)x11 * x71)) + ((0x2 * ((uint64_t)x13 * x69)) + ((0x2 * ((uint64_t)x15 * x67)) + ((0x2 * ((uint64_t)x17 * x65)) + ((0x2 * ((uint64_t)x19 * x63)) + ((0x2 * ((uint64_t)x21 * x61)) + ((0x2 * ((uint64_t)x23 * x59)) + ((0x2 * ((uint64_t)x25 * x57)) + ((0x2 * ((uint64_t)x27 * x55)) + ((0x2 * ((uint64_t)x29 * x53)) + ((0x2 * ((uint64_t)x31 * x51)) + ((0x2 * ((uint64_t)x33 * x49)) + ((0x2 * ((uint64_t)x35 * x47)) + ((0x2 * ((uint64_t)x37 * x45)) + ((uint64_t)x39 * x43)))))))))))))))))) + (((uint64_t)x41 * x78) + ((uint64_t)x40 * x79)));
  { uint64_t x83 = ((((uint64_t)x5 * x75) + ((0x2 * ((uint64_t)x7 * x73)) + ((0x2 * ((uint64_t)x9 * x71)) + ((0x2 * ((uint64_t)x11 * x69)) + ((0x2 * ((uint64_t)x13 * x67)) + ((0x2 * ((uint64_t)x15 * x65)) + ((0x2 * ((uint64_t)x17 * x63)) + ((0x2 * ((uint64_t)x19 * x61)) + ((0x2 * ((uint64_t)x21 * x59)) + ((0x2 * ((uint64_t)x23 * x57)) + ((0x2 * ((uint64_t)x25 * x55)) + ((0x2 * ((uint64_t)x27 * x53)) + ((0x2 * ((uint64_t)x29 * x51)) + ((0x2 * ((uint64_t)x31 * x49)) + ((0x2 * ((uint64_t)x33 * x47)) + ((0x2 * ((uint64_t)x35 * x45)) + ((uint64_t)x37 * x43))))))))))))))))) + (((uint64_t)x39 * x78) + (((uint64_t)x41 * x79) + ((uint64_t)x40 * x77))));
  { uint64_t x84 = ((((uint64_t)x5 * x73) + ((0x2 * ((uint64_t)x7 * x71)) + ((0x2 * ((uint64_t)x9 * x69)) + ((0x2 * ((uint64_t)x11 * x67)) + ((0x2 * ((uint64_t)x13 * x65)) + ((0x2 * ((uint64_t)x15 * x63)) + ((0x2 * ((uint64_t)x17 * x61)) + ((0x2 * ((uint64_t)x19 * x59)) + ((0x2 * ((uint64_t)x21 * x57)) + ((0x2 * ((uint64_t)x23 * x55)) + ((0x2 * ((uint64_t)x25 * x53)) + ((0x2 * ((uint64_t)x27 * x51)) + ((0x2 * ((uint64_t)x29 * x49)) + ((0x2 * ((uint64_t)x31 * x47)) + ((0x2 * ((uint64_t)x33 * x45)) + ((uint64_t)x35 * x43)))))))))))))))) + (((uint64_t)x37 * x78) + (((uint64_t)x39 * x79) + (((uint64_t)x41 * x77) + ((uint64_t)x40 * x75)))));
  { uint64_t x85 = ((((uint64_t)x5 * x71) + ((0x2 * ((uint64_t)x7 * x69)) + ((0x2 * ((uint64_t)x9 * x67)) + ((0x2 * ((uint64_t)x11 * x65)) + ((0x2 * ((uint64_t)x13 * x63)) + ((0x2 * ((uint64_t)x15 * x61)) + ((0x2 * ((uint64_t)x17 * x59)) + ((0x2 * ((uint64_t)x19 * x57)) + ((0x2 * ((uint64_t)x21 * x55)) + ((0x2 * ((uint64_t)x23 * x53)) + ((0x2 * ((uint64_t)x25 * x51)) + ((0x2 * ((uint64_t)x27 * x49)) + ((0x2 * ((uint64_t)x29 * x47)) + ((0x2 * ((uint64_t)x31 * x45)) + ((uint64_t)x33 * x43))))))))))))))) + (((uint64_t)x35 * x78) + (((uint64_t)x37 * x79) + (((uint64_t)x39 * x77) + (((uint64_t)x41 * x75) + ((uint64_t)x40 * x73))))));
  { uint64_t x86 = ((((uint64_t)x5 * x69) + ((0x2 * ((uint64_t)x7 * x67)) + ((0x2 * ((uint64_t)x9 * x65)) + ((0x2 * ((uint64_t)x11 * x63)) + ((0x2 * ((uint64_t)x13 * x61)) + ((0x2 * ((uint64_t)x15 * x59)) + ((0x2 * ((uint64_t)x17 * x57)) + ((0x2 * ((uint64_t)x19 * x55)) + ((0x2 * ((uint64_t)x21 * x53)) + ((0x2 * ((uint64_t)x23 * x51)) + ((0x2 * ((uint64_t)x25 * x49)) + ((0x2 * ((uint64_t)x27 * x47)) + ((0x2 * ((uint64_t)x29 * x45)) + ((uint64_t)x31 * x43)))))))))))))) + (((uint64_t)x33 * x78) + (((uint64_t)x35 * x79) + (((uint64_t)x37 * x77) + (((uint64_t)x39 * x75) + (((uint64_t)x41 * x73) + ((uint64_t)x40 * x71)))))));
  { uint64_t x87 = ((((uint64_t)x5 * x67) + ((0x2 * ((uint64_t)x7 * x65)) + ((0x2 * ((uint64_t)x9 * x63)) + ((0x2 * ((uint64_t)x11 * x61)) + ((0x2 * ((uint64_t)x13 * x59)) + ((0x2 * ((uint64_t)x15 * x57)) + ((0x2 * ((uint64_t)x17 * x55)) + ((0x2 * ((uint64_t)x19 * x53)) + ((0x2 * ((uint64_t)x21 * x51)) + ((0x2 * ((uint64_t)x23 * x49)) + ((0x2 * ((uint64_t)x25 * x47)) + ((0x2 * ((uint64_t)x27 * x45)) + ((uint64_t)x29 * x43))))))))))))) + (((uint64_t)x31 * x78) + (((uint64_t)x33 * x79) + (((uint64_t)x35 * x77) + (((uint64_t)x37 * x75) + (((uint64_t)x39 * x73) + (((uint64_t)x41 * x71) + ((uint64_t)x40 * x69))))))));
  { uint64_t x88 = ((((uint64_t)x5 * x65) + ((0x2 * ((uint64_t)x7 * x63)) + ((0x2 * ((uint64_t)x9 * x61)) + ((0x2 * ((uint64_t)x11 * x59)) + ((0x2 * ((uint64_t)x13 * x57)) + ((0x2 * ((uint64_t)x15 * x55)) + ((0x2 * ((uint64_t)x17 * x53)) + ((0x2 * ((uint64_t)x19 * x51)) + ((0x2 * ((uint64_t)x21 * x49)) + ((0x2 * ((uint64_t)x23 * x47)) + ((0x2 * ((uint64_t)x25 * x45)) + ((uint64_t)x27 * x43)))))))))))) + (((uint64_t)x29 * x78) + (((uint64_t)x31 * x79) + (((uint64_t)x33 * x77) + (((uint64_t)x35 * x75) + (((uint64_t)x37 * x73) + (((uint64_t)x39 * x71) + (((uint64_t)x41 * x69) + ((uint64_t)x40 * x67)))))))));
  { uint64_t x89 = ((((uint64_t)x5 * x63) + ((0x2 * ((uint64_t)x7 * x61)) + ((0x2 * ((uint64_t)x9 * x59)) + ((0x2 * ((uint64_t)x11 * x57)) + ((0x2 * ((uint64_t)x13 * x55)) + ((0x2 * ((uint64_t)x15 * x53)) + ((0x2 * ((uint64_t)x17 * x51)) + ((0x2 * ((uint64_t)x19 * x49)) + ((0x2 * ((uint64_t)x21 * x47)) + ((0x2 * ((uint64_t)x23 * x45)) + ((uint64_t)x25 * x43))))))))))) + (((uint64_t)x27 * x78) + (((uint64_t)x29 * x79) + (((uint64_t)x31 * x77) + (((uint64_t)x33 * x75) + (((uint64_t)x35 * x73) + (((uint64_t)x37 * x71) + (((uint64_t)x39 * x69) + (((uint64_t)x41 * x67) + ((uint64_t)x40 * x65))))))))));
  { uint64_t x90 = ((((uint64_t)x5 * x61) + ((0x2 * ((uint64_t)x7 * x59)) + ((0x2 * ((uint64_t)x9 * x57)) + ((0x2 * ((uint64_t)x11 * x55)) + ((0x2 * ((uint64_t)x13 * x53)) + ((0x2 * ((uint64_t)x15 * x51)) + ((0x2 * ((uint64_t)x17 * x49)) + ((0x2 * ((uint64_t)x19 * x47)) + ((0x2 * ((uint64_t)x21 * x45)) + ((uint64_t)x23 * x43)))))))))) + (((uint64_t)x25 * x78) + (((uint64_t)x27 * x79) + (((uint64_t)x29 * x77) + (((uint64_t)x31 * x75) + (((uint64_t)x33 * x73) + (((uint64_t)x35 * x71) + (((uint64_t)x37 * x69) + (((uint64_t)x39 * x67) + (((uint64_t)x41 * x65) + ((uint64_t)x40 * x63)))))))))));
  { uint64_t x91 = ((((uint64_t)x5 * x59) + ((0x2 * ((uint64_t)x7 * x57)) + ((0x2 * ((uint64_t)x9 * x55)) + ((0x2 * ((uint64_t)x11 * x53)) + ((0x2 * ((uint64_t)x13 * x51)) + ((0x2 * ((uint64_t)x15 * x49)) + ((0x2 * ((uint64_t)x17 * x47)) + ((0x2 * ((uint64_t)x19 * x45)) + ((uint64_t)x21 * x43))))))))) + (((uint64_t)x23 * x78) + (((uint64_t)x25 * x79) + (((uint64_t)x27 * x77) + (((uint64_t)x29 * x75) + (((uint64_t)x31 * x73) + (((uint64_t)x33 * x71) + (((uint64_t)x35 * x69) + (((uint64_t)x37 * x67) + (((uint64_t)x39 * x65) + (((uint64_t)x41 * x63) + ((uint64_t)x40 * x61))))))))))));
  { uint64_t x92 = ((((uint64_t)x5 * x57) + ((0x2 * ((uint64_t)x7 * x55)) + ((0x2 * ((uint64_t)x9 * x53)) + ((0x2 * ((uint64_t)x11 * x51)) + ((0x2 * ((uint64_t)x13 * x49)) + ((0x2 * ((uint64_t)x15 * x47)) + ((0x2 * ((uint64_t)x17 * x45)) + ((uint64_t)x19 * x43)))))))) + (((uint64_t)x21 * x78) + (((uint64_t)x23 * x79) + (((uint64_t)x25 * x77) + (((uint64_t)x27 * x75) + (((uint64_t)x29 * x73) + (((uint64_t)x31 * x71) + (((uint64_t)x33 * x69) + (((uint64_t)x35 * x67) + (((uint64_t)x37 * x65) + (((uint64_t)x39 * x63) + (((uint64_t)x41 * x61) + ((uint64_t)x40 * x59)))))))))))));
  { uint64_t x93 = ((((uint64_t)x5 * x55) + ((0x2 * ((uint64_t)x7 * x53)) + ((0x2 * ((uint64_t)x9 * x51)) + ((0x2 * ((uint64_t)x11 * x49)) + ((0x2 * ((uint64_t)x13 * x47)) + ((0x2 * ((uint64_t)x15 * x45)) + ((uint64_t)x17 * x43))))))) + (((uint64_t)x19 * x78) + (((uint64_t)x21 * x79) + (((uint64_t)x23 * x77) + (((uint64_t)x25 * x75) + (((uint64_t)x27 * x73) + (((uint64_t)x29 * x71) + (((uint64_t)x31 * x69) + (((uint64_t)x33 * x67) + (((uint64_t)x35 * x65) + (((uint64_t)x37 * x63) + (((uint64_t)x39 * x61) + (((uint64_t)x41 * x59) + ((uint64_t)x40 * x57))))))))))))));
  { uint64_t x94 = ((((uint64_t)x5 * x53) + ((0x2 * ((uint64_t)x7 * x51)) + ((0x2 * ((uint64_t)x9 * x49)) + ((0x2 * ((uint64_t)x11 * x47)) + ((0x2 * ((uint64_t)x13 * x45)) + ((uint64_t)x15 * x43)))))) + (((uint64_t)x17 * x78) + (((uint64_t)x19 * x79) + (((uint64_t)x21 * x77) + (((uint64_t)x23 * x75) + (((uint64_t)x25 * x73) + (((uint64_t)x27 * x71) + (((uint64_t)x29 * x69) + (((uint64_t)x31 * x67) + (((uint64_t)x33 * x65) + (((uint64_t)x35 * x63) + (((uint64_t)x37 * x61) + (((uint64_t)x39 * x59) + (((uint64_t)x41 * x57) + ((uint64_t)x40 * x55)))))))))))))));
  { uint64_t x95 = ((((uint64_t)x5 * x51) + ((0x2 * ((uint64_t)x7 * x49)) + ((0x2 * ((uint64_t)x9 * x47)) + ((0x2 * ((uint64_t)x11 * x45)) + ((uint64_t)x13 * x43))))) + (((uint64_t)x15 * x78) + (((uint64_t)x17 * x79) + (((uint64_t)x19 * x77) + (((uint64_t)x21 * x75) + (((uint64_t)x23 * x73) + (((uint64_t)x25 * x71) + (((uint64_t)x27 * x69) + (((uint64_t)x29 * x67) + (((uint64_t)x31 * x65) + (((uint64_t)x33 * x63) + (((uint64_t)x35 * x61) + (((uint64_t)x37 * x59) + (((uint64_t)x39 * x57) + (((uint64_t)x41 * x55) + ((uint64_t)x40 * x53))))))))))))))));
  { uint64_t x96 = ((((uint64_t)x5 * x49) + ((0x2 * ((uint64_t)x7 * x47)) + ((0x2 * ((uint64_t)x9 * x45)) + ((uint64_t)x11 * x43)))) + (((uint64_t)x13 * x78) + (((uint64_t)x15 * x79) + (((uint64_t)x17 * x77) + (((uint64_t)x19 * x75) + (((uint64_t)x21 * x73) + (((uint64_t)x23 * x71) + (((uint64_t)x25 * x69) + (((uint64_t)x27 * x67) + (((uint64_t)x29 * x65) + (((uint64_t)x31 * x63) + (((uint64_t)x33 * x61) + (((uint64_t)x35 * x59) + (((uint64_t)x37 * x57) + (((uint64_t)x39 * x55) + (((uint64_t)x41 * x53) + ((uint64_t)x40 * x51)))))))))))))))));
  { uint64_t x97 = ((((uint64_t)x5 * x47) + ((0x2 * ((uint64_t)x7 * x45)) + ((uint64_t)x9 * x43))) + (((uint64_t)x11 * x78) + (((uint64_t)x13 * x79) + (((uint64_t)x15 * x77) + (((uint64_t)x17 * x75) + (((uint64_t)x19 * x73) + (((uint64_t)x21 * x71) + (((uint64_t)x23 * x69) + (((uint64_t)x25 * x67) + (((uint64_t)x27 * x65) + (((uint64_t)x29 * x63) + (((uint64_t)x31 * x61) + (((uint64_t)x33 * x59) + (((uint64_t)x35 * x57) + (((uint64_t)x37 * x55) + (((uint64_t)x39 * x53) + (((uint64_t)x41 * x51) + ((uint64_t)x40 * x49))))))))))))))))));
  { uint64_t x98 = ((((uint64_t)x5 * x45) + ((uint64_t)x7 * x43)) + (((uint64_t)x9 * x78) + (((uint64_t)x11 * x79) + (((uint64_t)x13 * x77) + (((uint64_t)x15 * x75) + (((uint64_t)x17 * x73) + (((uint64_t)x19 * x71) + (((uint64_t)x21 * x69) + (((uint64_t)x23 * x67) + (((uint64_t)x25 * x65) + (((uint64_t)x27 * x63) + (((uint64_t)x29 * x61) + (((uint64_t)x31 * x59) + (((uint64_t)x33 * x57) + (((uint64_t)x35 * x55) + (((uint64_t)x37 * x53) + (((uint64_t)x39 * x51) + (((uint64_t)x41 * x49) + ((uint64_t)x40 * x47)))))))))))))))))));
  { uint64_t x99 = (((uint64_t)x5 * x43) + ((0x2 * ((uint64_t)x7 * x78)) + ((0x2 * ((uint64_t)x9 * x79)) + ((0x2 * ((uint64_t)x11 * x77)) + ((0x2 * ((uint64_t)x13 * x75)) + ((0x2 * ((uint64_t)x15 * x73)) + ((0x2 * ((uint64_t)x17 * x71)) + ((0x2 * ((uint64_t)x19 * x69)) + ((0x2 * ((uint64_t)x21 * x67)) + ((0x2 * ((uint64_t)x23 * x65)) + ((0x2 * ((uint64_t)x25 * x63)) + ((0x2 * ((uint64_t)x27 * x61)) + ((0x2 * ((uint64_t)x29 * x59)) + ((0x2 * ((uint64_t)x31 * x57)) + ((0x2 * ((uint64_t)x33 * x55)) + ((0x2 * ((uint64_t)x35 * x53)) + ((0x2 * ((uint64_t)x37 * x51)) + ((0x2 * ((uint64_t)x39 * x49)) + ((0x2 * ((uint64_t)x41 * x47)) + (0x2 * ((uint64_t)x40 * x45)))))))))))))))))))));
  { uint64_t x100 = (x99 >> 0x1b);
  { uint32_t x101 = ((uint32_t)x99 & 0x7ffffff);
  { uint64_t x102 = (x100 + x98);
  { uint64_t x103 = (x102 >> 0x1a);
  { uint32_t x104 = ((uint32_t)x102 & 0x3ffffff);
  { uint64_t x105 = (x103 + x97);
  { uint64_t x106 = (x105 >> 0x1a);
  { uint32_t x107 = ((uint32_t)x105 & 0x3ffffff);
  { uint64_t x108 = (x106 + x96);
  { uint64_t x109 = (x108 >> 0x1a);
  { uint32_t x110 = ((uint32_t)x108 & 0x3ffffff);
  { uint64_t x111 = (x109 + x95);
  { uint64_t x112 = (x111 >> 0x1a);
  { uint32_t x113 = ((uint32_t)x111 & 0x3ffffff);
  { uint64_t x114 = (x112 + x94);
  { uint64_t x115 = (x114 >> 0x1a);
  { uint32_t x116 = ((uint32_t)x114 & 0x3ffffff);
  { uint64_t x117 = (x115 + x93);
  { uint64_t x118 = (x117 >> 0x1a);
  { uint32_t x119 = ((uint32_t)x117 & 0x3ffffff);
  { uint64_t x120 = (x118 + x92);
  { uint64_t x121 = (x120 >> 0x1a);
  { uint32_t x122 = ((uint32_t)x120 & 0x3ffffff);
  { uint64_t x123 = (x121 + x91);
  { uint64_t x124 = (x123 >> 0x1a);
  { uint32_t x125 = ((uint32_t)x123 & 0x3ffffff);
  { uint64_t x126 = (x124 + x90);
  { uint64_t x127 = (x126 >> 0x1a);
  { uint32_t x128 = ((uint32_t)x126 & 0x3ffffff);
  { uint64_t x129 = (x127 + x89);
  { uint64_t x130 = (x129 >> 0x1a);
  { uint32_t x131 = ((uint32_t)x129 & 0x3ffffff);
  { uint64_t x132 = (x130 + x88);
  { uint64_t x133 = (x132 >> 0x1a);
  { uint32_t x134 = ((uint32_t)x132 & 0x3ffffff);
  { uint64_t x135 = (x133 + x87);
  { uint64_t x136 = (x135 >> 0x1a);
  { uint32_t x137 = ((uint32_t)x135 & 0x3ffffff);
  { uint64_t x138 = (x136 + x86);
  { uint64_t x139 = (x138 >> 0x1a);
  { uint32_t x140 = ((uint32_t)x138 & 0x3ffffff);
  { uint64_t x141 = (x139 + x85);
  { uint64_t x142 = (x141 >> 0x1a);
  { uint32_t x143 = ((uint32_t)x141 & 0x3ffffff);
  { uint64_t x144 = (x142 + x84);
  { uint64_t x145 = (x144 >> 0x1a);
  { uint32_t x146 = ((uint32_t)x144 & 0x3ffffff);
  { uint64_t x147 = (x145 + x83);
  { uint64_t x148 = (x147 >> 0x1a);
  { uint32_t x149 = ((uint32_t)x147 & 0x3ffffff);
  { uint64_t x150 = (x148 + x82);
  { uint64_t x151 = (x150 >> 0x1a);
  { uint32_t x152 = ((uint32_t)x150 & 0x3ffffff);
  { uint64_t x153 = (x151 + x81);
  { uint64_t x154 = (x153 >> 0x1a);
  { uint32_t x155 = ((uint32_t)x153 & 0x3ffffff);
  { uint64_t x156 = (x154 + x80);
  { uint64_t x157 = (x156 >> 0x1a);
  { uint32_t x158 = ((uint32_t)x156 & 0x3ffffff);
  { uint64_t x159 = (x101 + x157);
  { uint32_t x160 = (uint32_t) (x159 >> 0x1b);
  { uint32_t x161 = ((uint32_t)x159 & 0x7ffffff);
  { uint32_t x162 = (x160 + x104);
  { uint32_t x163 = (x162 >> 0x1a);
  { uint32_t x164 = (x162 & 0x3ffffff);
  out[0] = x161;
  out[1] = x164;
  out[2] = (x163 + x107);
  out[3] = x110;
  out[4] = x113;
  out[5] = x116;
  out[6] = x119;
  out[7] = x122;
  out[8] = x125;
  out[9] = x128;
  out[10] = x131;
  out[11] = x134;
  out[12] = x137;
  out[13] = x140;
  out[14] = x143;
  out[15] = x146;
  out[16] = x149;
  out[17] = x152;
  out[18] = x155;
  out[19] = x158;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
