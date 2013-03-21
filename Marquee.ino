// Scrolling marquee time/date display.

PROGMEM uint8_t
 marqueeDigits[] = {
  0x00,0x00,0x2C,0xDA,0xEB,0x16,0x00,0x0B,0xFF,0x00,0x2C,0xDA,0xD7,0x16,0x00,
  0x2C,0xD1,0xDF,0x16,0x00,0x00,0x00,0x14,0xDC,0x00,0xFF,0xFF,0xFF,0xDF,0x00,
  0x2C,0xDA,0xEB,0x44,0x00,0xFF,0xFF,0xFF,0xDF,0x00,0x2C,0xDA,0xD7,0x16,0x00,
  0x2C,0xDA,0xD7,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xB2,0x00,0x01,0x8F,0x04,0xCE,0xFF,0x03,0xB0,0x00,
  0x0D,0x8D,0x03,0xB2,0x01,0x07,0x8F,0x00,0x00,0x02,0xE1,0x98,0x04,0x9C,0x00,
  0x00,0x00,0x03,0xB2,0x00,0x01,0xF5,0x00,0x00,0x00,0x16,0x60,0x03,0xB2,0x00,
  0x0D,0x8F,0x03,0xB2,0x00,0x0D,0x8F,0x00,0x00,0x1A,0x58,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x64,0x00,0x01,0x64,0x00,0x0D,0xD3,
  0x00,0x00,0x00,0x31,0x46,0x00,0x00,0x00,0x11,0x5C,0x00,0x00,0x91,0x61,0x64,
  0x0D,0x64,0x00,0x00,0x00,0x0D,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x89,0x09,
  0x0B,0x88,0x00,0x1D,0x5C,0x0D,0x64,0x00,0x0D,0x64,0x00,0x00,0xAA,0x05,0x0D,
  0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x3C,0x00,0x08,0x3C,
  0x00,0x1F,0x7F,0x00,0x00,0x48,0x89,0x00,0x00,0x1F,0xFF,0xFF,0x0A,0x00,0x37,
  0x51,0x1F,0x3C,0x1F,0xFF,0xFF,0x9A,0x01,0x1F,0xE3,0xF7,0xB6,0x01,0x00,0x00,
  0x04,0xAE,0x00,0x02,0xFC,0xFF,0xFF,0x0A,0x1B,0x5A,0x00,0x36,0x3C,0x00,0x0D,
  0x7D,0x00,0x00,0x00,0x00,0x1F,0xCE,0x03,0x1F,0xF7,0xCE,0x03,0x00,0x3C,0x1F,
  0x00,0x1C,0x1F,0x00,0x3C,0x42,0x00,0x89,0x48,0x00,0x00,0x00,0x00,0x00,0x36,
  0x1B,0x0A,0xAC,0x00,0x3C,0x1F,0x00,0x00,0x00,0x5A,0x1B,0x3C,0x36,0x00,0x39,
  0x1B,0x00,0x00,0x45,0x22,0x00,0x37,0x36,0x00,0x5A,0x1B,0x01,0x9A,0xF7,0xE3,
  0x1F,0x00,0x7F,0x0C,0x00,0x00,0x00,0x00,0x00,0x4E,0x1D,0x3C,0x3C,0x63,0x1A,
  0x00,0x64,0x0D,0x00,0x42,0x0D,0x00,0x64,0x1D,0x46,0x31,0x00,0x00,0x00,0x00,
  0x00,0x00,0x38,0x0D,0x64,0xFF,0xFF,0xFF,0x0D,0x00,0x00,0x00,0x64,0x0D,0x64,
  0x0D,0x00,0x42,0x0D,0x00,0x00,0xD1,0x00,0x00,0x64,0x0D,0x00,0x64,0x0D,0x00,
  0x00,0x00,0x64,0x0D,0x05,0xA8,0x00,0x00,0x64,0x0D,0x0B,0xD5,0xF7,0x0D,0x64,
  0xF7,0x89,0x00,0x00,0x8D,0x0D,0x00,0x9A,0x03,0x00,0x98,0x08,0x9A,0x05,0x00,
  0x00,0x00,0x8D,0x0D,0x00,0x70,0x03,0x00,0x00,0x00,0x9C,0x04,0x8D,0x0D,0x00,
  0xB0,0x03,0x8D,0x0D,0x00,0x9A,0x03,0x00,0x1A,0x52,0x00,0x00,0x8D,0x0D,0x00,
  0xB0,0x03,0x8D,0x0D,0x00,0xB2,0x03,0x59,0x19,0x00,0x00,0x00,0x00,0x89,0x12,
  0xCA,0x04,0x98,0x04,0x00,0x00,0x00,0x16,0xD7,0xDA,0x47,0x00,0x00,0xDC,0x01,
  0xDF,0xFF,0xFF,0xFF,0x00,0x16,0xD7,0xEB,0x3E,0x00,0x00,0x00,0x00,0xDF,0x00,
  0x16,0xD7,0xDA,0x2C,0x00,0x16,0xD7,0xDA,0x47,0x00,0x00,0x9A,0x06,0x00,0x00,
  0x16,0xD7,0xDA,0x2C,0x00,0x16,0xD7,0xDA,0x2C,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x29,0xF0,0xFF,0x00,0xDC,0x00,0x00,0x00,0x00,0x00,0x5C,0xF0,0xCC,0x04,
  0x00,0x33,0xD3,0x00,0x5D,0xF0,0xB2,0x04,0x00,0x5D,0xEB,0xBF,0x04,0x00,0x00,
  0x00,0x4C,0x64,0x0D,0xFF,0xFF,0xFF,0x64,0x00,0x5D,0xF0,0xCC,0x16,0x0D,0xFF,
  0xFF,0xFF,0x64,0x00,0x5D,0xF0,0xB2,0x04,0x00,0x5D,0xF0,0xB2,0x04,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x58,
  0x00,0x19,0x36,0x1E,0xD3,0x7F,0x1C,0x58,0x00,0x38,0x36,0x1C,0x58,0x00,0x20,
  0x36,0x00,0x00,0x11,0xFF,0x3C,0x1F,0x3E,0x00,0x00,0x00,0x1C,0x58,0x00,0x19,
  0x8F,0x00,0x00,0x00,0x50,0x1D,0x1C,0x58,0x00,0x38,0x36,0x1C,0x58,0x00,0x38,
  0x36,0x00,0x00,0x59,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x3C,0x1F,0x00,0x1C,0x1F,0x00,0x3C,0x42,0x00,0x00,0x00,0x7A,0x12,0x00,
  0x00,0x00,0x35,0x1C,0x00,0x01,0xC3,0x72,0x1F,0x3C,0x1F,0x00,0x00,0x00,0x3C,
  0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0xD3,0x00,0x36,0x38,0x00,0x58,0x1C,0x3C,
  0x1F,0x00,0x3C,0x1F,0x00,0x01,0xC7,0x00,0x3C,0x1F,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x64,0x0D,0x00,0x42,0x0D,0x00,0x64,0x1D,0x00,0x01,0x89,
  0x47,0x00,0x00,0x64,0xFF,0xED,0x00,0x00,0x88,0x16,0x64,0x0D,0x64,0xFF,0xF7,
  0x63,0x00,0x64,0xDC,0xF7,0x84,0x00,0x00,0x00,0x1F,0x49,0x00,0x19,0xFF,0xFF,
  0xE8,0x00,0x5C,0x1D,0x00,0x81,0x0D,0x00,0x3A,0x2C,0x00,0x00,0x00,0x00,0x64,
  0x94,0x00,0x64,0xF7,0x94,0x00,0x00,0x98,0x04,0x00,0x7D,0x04,0x00,0x98,0x08,
  0x05,0xBA,0x1A,0x00,0x00,0x00,0x00,0x00,0x73,0x03,0x30,0x59,0x00,0x9A,0x04,
  0x00,0x00,0x00,0xBA,0x03,0x98,0x0D,0x00,0xA8,0x03,0x00,0x00,0xA6,0x05,0x00,
  0x8F,0x0D,0x00,0xBA,0x03,0x0B,0xC7,0xE8,0xF2,0x04,0x00,0xCE,0x00,0x00,0x00,
  0x00,0x00,0x00,0xB4,0x03,0x98,0x12,0xCA,0x02,0x00,0xDC,0x00,0x00,0xD3,0x00,
  0x00,0xDC,0x01,0xAC,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0xDF,0xFF,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0xDC,0x00,0xDC,0x00,0x00,0xD3,0x00,0x00,0x08,
  0x91,0x00,0x00,0xDC,0x00,0x00,0xDC,0x00,0x00,0x00,0x00,0xDF,0x00,0x23,0x47,
  0x00,0x00,0xDC,0x00,0x2B,0xED,0xFC,0x00,0xDC,0xF2,0x48,0x00,0x00,0xF5,0x00,
  0x03,0xFF,0x00,0x00,0xDF,0x00,0xDF,0x00,0x00,0x00,0x00,0xF5,0x00,0x01,0xA0,
  0x00,0x00,0x00,0x00,0xDC,0x00,0xF5,0x00,0x03,0xD3,0x00,0xF5,0x00,0x03,0xFF,
  0x00,0x00,0x59,0x17,0x00,0x00,0xF5,0x00,0x03,0xD3,0x00,0xF5,0x00,0x03,0xD3,
  0x00,0xBC,0x02,0x00,0x00,0x00,0x00,0xF2,0x0A,0xDF,0x00,0xDC,0x00,0x00,0x00,
  0x00,0x44,0xF0,0xB8,0x1B,0x00,0x04,0x9A,0x02,0xFF,0xFF,0xFF,0x98,0x00,0x44,
  0xF0,0xD1,0x19,0x00,0x00,0x00,0x04,0x98,0x00,0x44,0xF0,0xB8,0x0D,0x00,0x44,
  0xF0,0xB8,0x1B,0x00,0x01,0xCE,0x00,0x00,0x00,0x44,0xF0,0xB8,0x0D,0x00,0x44,
  0xF0,0xB8,0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6F,0xF7,0x9A,0x04,0x98,
  0x00,0x00,0x00,0x00,0x02,0x8D,0xF7,0x9E,0x00,0x00,0x7A,0x42,0x02,0x8D,0xF7,
  0x7F,0x00,0x02,0x8D,0xFA,0x92,0x00,0x00,0x00,0x00,0xA2,0x1F,0x3C,0xFF,0xFF,
  0xFF,0x1F,0x02,0x8D,0xF7,0x9E,0x04,0x3C,0xFF,0xFF,0xFF,0x1F,0x02,0x8D,0xF7,
  0x7F,0x00,0x02,0x8D,0xF7,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5D,0x1D,0x00,0x69,0x0B,0x59,0xE1,0x1D,
  0x5D,0x1D,0x00,0x88,0x0B,0x5D,0x1D,0x00,0x51,0x0B,0x00,0x00,0x45,0xFF,0x0D,
  0x64,0x0F,0x00,0x00,0x00,0x5D,0x1D,0x00,0x69,0x36,0x00,0x00,0x00,0xB6,0x03,
  0x5D,0x1D,0x00,0x88,0x0B,0x5D,0x1D,0x00,0x88,0x0B,0x00,0x00,0xBC,0x02,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x98,0x04,0x00,0x7D,0x04,
  0x00,0x98,0x08,0x00,0x00,0x01,0xC5,0x01,0x00,0x00,0x00,0x70,0x03,0x00,0x0E,
  0x9E,0xAC,0x04,0x98,0x04,0x00,0x00,0x00,0x98,0x04,0x00,0x00,0x00,0x00,0x00,
  0x0A,0x84,0x00,0x8D,0x0D,0x00,0xB0,0x03,0x98,0x04,0x00,0x98,0x04,0x00,0x13,
  0x6A,0x00,0x98,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0x00,
  0x00,0xD3,0x00,0x00,0xDC,0x01,0x00,0x06,0xBA,0x16,0x00,0x00,0xDC,0xFF,0x9C,
  0x00,0x01,0xC3,0x03,0xDF,0x00,0xDC,0xFF,0xE6,0x28,0x00,0xDC,0xDC,0xE6,0x4C,
  0x00,0x00,0x00,0x63,0x13,0x00,0x58,0xFF,0xFF,0x89,0x00,0xCE,0x03,0x01,0xE1,
  0x00,0x00,0x96,0x08,0x00,0x00,0x00,0x00,0xDA,0x46,0x00,0xDC,0xF5,0x46,0x00,
  0x00,0xDF,0x00,0x00,0xFF,0x00,0x00,0xDF,0x00,0x16,0xBA,0x06,0x00,0x00,0x00,
  0x00,0x00,0xA8,0x00,0x7F,0x1B,0x00,0xDC,0x00,0x00,0x00,0x03,0xD1,0x00,0xE3,
  0x01,0x03,0xFF,0x00,0x00,0x01,0xCA,0x00,0x00,0xDC,0x01,0x03,0xD1,0x00,0x28,
  0xE6,0xDC,0xDF,0x00,0x08,0x94,0x00,0x00,0x00,0x00,0x00,0x02,0xD5,0x00,0xF7,
  0x0A,0xCC,0x00,0x04,0x9A,0x00,0x04,0xFF,0x00,0x04,0x9A,0x01,0xC5,0x01,0x00,
  0x00,0x00,0x00,0x00,0x00,0x96,0x04,0xFF,0xFF,0xFF,0x98,0x00,0x00,0x00,0x04,
  0x9A,0x04,0x9A,0x00,0x04,0xFF,0x00,0x00,0x2C,0x37,0x00,0x04,0x9A,0x00,0x04,
  0x9A,0x00,0x00,0x00,0x04,0x9A,0x00,0x6C,0x12,0x00,0x04,0x9A,0x00,0x69,0xF5,
  0x9A,0x04,0xFA,0xE3,0x18,0x00,0x0B,0x88,0x00,0x1D,0xC3,0x00,0x0D,0x64,0x08,
  0x66,0x00,0x00,0x00,0x0B,0x88,0x00,0x06,0x75,0x00,0x00,0x00,0x0F,0x64,0x0B,
  0x88,0x00,0x1D,0x5D,0x0B,0x88,0x00,0x1D,0xC3,0x00,0x00,0xBF,0x02,0x00,0x0B,
  0x88,0x00,0x1D,0x5D,0x0B,0x88,0x00,0x1D,0x5D,0x02,0xBA,0x00,0x00,0x00,0x00,
  0x0A,0x92,0x22,0x64,0x0D,0x64,0x00,0x00,0x00,0x00,0x7F,0xF7,0x8D,0x05,0x00,
  0x1F,0x3C,0x12,0xFF,0xFF,0xFF,0x3C,0x00,0x7F,0xF7,0xA8,0x07,0x00,0x00,0x00,
  0x1F,0x3C,0x00,0x7F,0xF7,0x8D,0x02,0x00,0x7F,0xF7,0x8D,0x05,0x00,0x0E,0x75,
  0x00,0x00,0x00,0x7F,0xF7,0x8D,0x02,0x00,0x7F,0xF7,0x8D,0x02,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0xB4,0xF7,0x3C,0x1F,0x3C,0x00,0x00,0x00,0x00,0x0D,0xB8,
  0xF0,0x69,0x00,0x01,0xCC,0x08,0x0D,0xB8,0xF0,0x44,0x00,0x0D,0xB8,0xFA,0x59,
  0x00,0x00,0x00,0x02,0xE6,0x04,0x98,0xFF,0xFF,0xFF,0x04,0x0D,0xB8,0xF0,0x69,
  0x00,0x98,0xFF,0xFF,0xFF,0x04,0x0D,0xB8,0xF0,0x44,0x00,0x0D,0xB8,0xF0,0x44,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xD1,0x03,0x00,0xF0,0x00,0xB2,0xFF,0x01,0xD3,0x03,0x00,0xF5,0x00,0xD1,
  0x03,0x00,0x9C,0x00,0x00,0x00,0x98,0xFF,0x00,0xDC,0x00,0x00,0x00,0x00,0xD1,
  0x03,0x00,0xF0,0x0B,0x00,0x00,0x02,0xC5,0x00,0xD1,0x03,0x00,0xF5,0x00,0xD1,
  0x03,0x00,0xF5,0x00,0x00,0x02,0xBA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xDF,0x00,0x00,0xFF,0x00,0x00,0xDF,0x00,0x00,0x00,0x09,
  0xAC,0x00,0x00,0x00,0x01,0xA0,0x00,0x00,0x3D,0x61,0xDC,0x00,0xDF,0x00,0x00,
  0x00,0x00,0xDF,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x30,0x00,0xF5,0x00,0x03,
  0xD1,0x00,0xDF,0x00,0x00,0xDF,0x00,0x00,0x48,0x22,0x00,0xDF,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x9A,0x00,0x04,0xFF,0x00,0x04,0x9A,0x00,
  0x00,0x1A,0xBA,0x05,0x00,0x04,0xFF,0xFF,0x4C,0x00,0x0C,0xA6,0x06,0x98,0x04,
  0xFF,0xFF,0xC7,0x0B,0x04,0xF2,0xE8,0xC7,0x16,0x00,0x00,0x00,0xC7,0x01,0x00,
  0xC1,0xFF,0xFF,0x33,0x03,0xBC,0x00,0x0D,0x9A,0x00,0x01,0xCE,0x00,0x00,0x00,
  0x00,0x04,0xF0,0x15,0x04,0xFA,0xEB,0x15,0x00,0x0D,0x64,0x00,0x0D,0xD3,0x00,
  0x0D,0x64,0x00,0x47,0x89,0x01,0x00,0x00,0x00,0x00,0x07,0x75,0x01,0xC1,0x04,
  0x0D,0x64,0x00,0x00,0x00,0x1D,0x5C,0x0D,0x81,0x00,0x1D,0xC1,0x00,0x00,0x11,
  0x69,0x00,0x0B,0x81,0x00,0x1D,0x5C,0x00,0x63,0xF7,0xDC,0x64,0x00,0x2E,0x39,
  0x00,0x00,0x00,0x00,0x00,0x16,0x5E,0x0D,0x92,0x22,0x59,0x00,0x1F,0x3C,0x00,
  0x1F,0x7F,0x00,0x1F,0x3C,0x0A,0x7A,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x56,
  0x1F,0xFF,0xFF,0xFF,0x3C,0x00,0x00,0x00,0x1F,0x3C,0x1F,0x3C,0x00,0x1F,0x7F,
  0x00,0x00,0x7D,0x0C,0x00,0x1F,0x3C,0x00,0x1F,0x3C,0x00,0x00,0x00,0x1F,0x3C,
  0x00,0xC7,0x01,0x00,0x1F,0x3C,0x01,0xA6,0xF7,0x3C,0x1F,0xF7,0xBF,0x05,0x00,
  0x36,0x38,0x00,0x58,0x3B,0x00,0x3C,0x1F,0x22,0x22,0x00,0x00,0x00,0x36,0x38,
  0x00,0x36,0x34,0x00,0x00,0x00,0x3E,0x1F,0x36,0x38,0x00,0x58,0x1C,0x36,0x38,
  0x00,0x58,0x3B,0x00,0x02,0xB8,0x00,0x00,0x36,0x38,0x00,0x58,0x1C,0x36,0x38,
  0x00,0x58,0x1C,0x1A,0x56,0x00,0x00,0x00,0x00,0x34,0x3C,0x63,0x1F,0x3C,0x1F,
  0x00,0x00,0x00,0x04,0xB2,0xF0,0x5C,0x00,0x00,0x64,0x0D,0x39,0xFF,0xFF,0xFF,
  0x0D,0x04,0xB2,0xF0,0x7A,0x01,0x00,0x00,0x00,0x64,0x0D,0x04,0xB2,0xF0,0x5C,
  0x00,0x04,0xB2,0xF0,0x5C,0x00,0x00,0x3C,0x28,0x00,0x00,0x04,0xB2,0xF0,0x5C,
  0x00,0x04,0xB2,0xF0,0x5C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0xE1,0xF7,
  0x0D,0x64,0x0D,0x00,0x00,0x00 },
 digitX[]     = { 1, 6, 9, 14, 19, 24, 29, 34, 39, 44, 49, 53, 55, 59 },
 digitWidth[] = { 5, 3, 5,  5,  5,  5,  5,  5,  5,  5,  4,  2,  4,  4 };

// Extra symbols after digits 0-9
#define SYM_SLASH 10
#define SYM_COLON 11
#define SYM_AM    12
#define SYM_PM    13

#define MARQUEE_SUBMODE_TIME 0
#define MARQUEE_SUBMODE_DATE 1

static int8_t
  marqueeSubmode = MARQUEE_SUBMODE_TIME,
  f              = 0,
  len            = 0,
  str[8]; // Time 'string' (non-ASCII)

void mode_marquee(uint8_t action) {
  DateTime now;
  uint8_t  i, dx, dw, y, h;
  int      x, sum;

  if(action != ACTION_NONE) {

    // If we just arrived here (whether through mode change
    // or wake from sleep), initialize the matrix driver:
    if(action >= ACTION_HOLD_LEFT) {
      uint8_t depth = 7, plex = LED_PLEX_4;
      // Reduce depth/plex if battery voltage is low
      if(watch.getmV() < BATT_LOW_MV) {
        depth = 2;
        plex  = LED_PLEX_1;
      }
      // Reconfigure display if needed
      if((watch.getDepth() != depth) || (watch.getPlex() != plex))
        fps = watch.setDisplayMode(depth, plex, true);
      // And begin in time-display mode:
      marqueeSubmode = MARQUEE_SUBMODE_TIME;
    } else if(action == ACTION_TAP_LEFT) {
      if(++marqueeSubmode > MARQUEE_SUBMODE_DATE)
        marqueeSubmode = MARQUEE_SUBMODE_TIME;
    } else if(action == ACTION_TAP_RIGHT) {
      if(--marqueeSubmode < MARQUEE_SUBMODE_TIME)
        marqueeSubmode = MARQUEE_SUBMODE_DATE;
    }

    // Load time/date digits depending on current submode:
    now = RTC.now();
    len = 0;
    if(marqueeSubmode == MARQUEE_SUBMODE_TIME) {
      i = now.hour(); // 0-23
      if(h24) {
        loadDigits(i, DIGIT_HR0);
        str[len++] = digit[DIGIT_HR0];
      } else {
        if(i > 12)      i -= 12;
        else if(i == 0) i  = 12;
        loadDigits(i, DIGIT_HR0);
        if(i >= 10) str[len++] = 1;
      }
      str[len++] = digit[DIGIT_HR1];
      str[len++] = SYM_COLON;
      loadDigits(now.minute(), DIGIT_MIN0);
      str[len++] = digit[DIGIT_MIN0];
      str[len++] = digit[DIGIT_MIN1];
      if(!h24) str[len++] = (now.hour() < 12) ? SYM_AM : SYM_PM;
    } else {
      loadDigits(now.year() - 2000, DIGIT_YEAR0);
      loadDigits(now.month()      , DIGIT_MON0);
      loadDigits(now.day()        , DIGIT_DAY0);
      if(digit[DIGIT_MON0] > 0) str[len++] = digit[DIGIT_MON0];
      str[len++] = digit[DIGIT_MON1];
      str[len++] = SYM_SLASH;
      if(digit[DIGIT_DAY0] > 0) str[len++] = digit[DIGIT_DAY0];
      str[len++] = digit[DIGIT_DAY1];
      str[len++] = SYM_SLASH;
      str[len++] = digit[DIGIT_YEAR0];
      str[len++] = digit[DIGIT_YEAR1];
    }

    sum = 0;
    for(i=0; i<len; i++) sum += pgm_read_byte(&digitWidth[str[i]]);
    // When in power-reduced mode, blitting happens quicker because
    // of fewer screen bits; scale the timeout to compensate.
    if(watch.getPlex() != LED_PLEX_4) sum *= 3;

    // Reset sleep timeout on ANY button action
    watch.setTimeout((sum + 8) * 4); // Sleep after time/date scrolls off left edge

    curX = 8; // Initialize position off right edge
    f    = 0;
  }

  watch.fillScreen(0);
  x = curX;
  h = 8 - (f * 2); // Height of upper section of character to blit (2-8)
  y = f * 8;       // Vertical position of character in marqueeDigits[].
  // There are actually 4 bitmaps of each digit, each offset by 1/4 pixel
  // to provide subpixel antialiasing when scrolling -- extra smoothness!
  for(i=0; i<len; i++) {
    dx = pgm_read_byte(&digitX[str[i]]);
    dw = pgm_read_byte(&digitWidth[str[i]]);
    // The blit() function doesn't do real compositing -- it overwrites.
    // In order to pack the italicized digits closer together, they're
    // blitted as an upper and lower half (offset by 1 pixel) that don't
    // overlap the prior character.
    blit(          marqueeDigits, 63, 32, dx  , y  , x  , 0, dw, h  , 255 );
    if(h < 8) blit(marqueeDigits, 63, 32, dx-1, y+h, x-1, h, dw, 8-h, 255 );
    x += pgm_read_byte(&digitWidth[str[i]]);
  }

  // Every 4th frame, move left 1 pixel.  X is not reset or wrapped here...
  // timeout will kick in, and X will be set on the next wake operation.
  if(++f >= 4) {
    curX--;
    f = 0;
  }
}


