// -----------------------------------------------------------------------------
// Display segments
// size: 288 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_mmouse_segments[] PROGMEM =
{
    0x52, 0x37, 0x27, 0x00, 0x4E, 0x38, 0xAC, 0x00,
    0x61, 0x33, 0x51, 0x01, 0x61, 0x3C, 0xBF, 0x00,
    0x66, 0x34, 0x02, 0x02, 0x6B, 0x33, 0x97, 0x02,
    0x5C, 0x2F, 0x0E, 0x02, 0x5C, 0x2C, 0x00, 0x00,
    0x23, 0x28, 0xC8, 0x01, 0x1C, 0x2E, 0x30, 0x02,
    0x2E, 0x19, 0x41, 0x00, 0x23, 0x18, 0xB7, 0x02,
    0x3A, 0x07, 0xE0, 0x01, 0x3B, 0x1B, 0x6A, 0x01,
    0x4C, 0x29, 0xDC, 0x00, 0x4D, 0x1B, 0x2B, 0x01,
    0x22, 0x2A, 0x4B, 0x01, 0x1F, 0x28, 0x36, 0x00,
    0x0C, 0x33, 0xDB, 0x02, 0x13, 0x33, 0x14, 0x01,
    0x0F, 0x3C, 0x1B, 0x01, 0x18, 0x33, 0x97, 0x02,
    0x1F, 0x38, 0x58, 0x01, 0x23, 0x37, 0x27, 0x00,
    0x17, 0x14, 0x42, 0x02, 0x14, 0x12, 0xD6, 0x00,
    0x1B, 0x17, 0x4B, 0x01, 0x1F, 0x19, 0xB1, 0x02,
    0x14, 0x21, 0xA4, 0x02, 0x21, 0x1C, 0x23, 0x02,
    0x17, 0x23, 0xD6, 0x00, 0x1B, 0x26, 0x1D, 0x02,
    0x42, 0x02, 0x49, 0x02, 0x42, 0x10, 0x27, 0x00,
    0x3A, 0x02, 0xE0, 0x01, 0x4A, 0x10, 0x27, 0x00,
    0x31, 0x04, 0xF1, 0x01, 0x2B, 0x01, 0x51, 0x02,
    0x2B, 0x0B, 0x02, 0x01, 0x18, 0x00, 0x5C, 0x02,
    0x4A, 0x02, 0xF9, 0x01, 0x4E, 0x03, 0xE4, 0x02,
    0x4A, 0x02, 0xFE, 0x01, 0x47, 0x02, 0x31, 0x00,
    0x48, 0x05, 0x17, 0x02, 0x47, 0x06, 0xFE, 0x00,
    0x4A, 0x06, 0xED, 0x01, 0x47, 0x09, 0x3B, 0x00,
    0x55, 0x04, 0xE9, 0x01, 0x49, 0x0B, 0x03, 0x00,
    0x54, 0x02, 0x9F, 0x02, 0x52, 0x02, 0xFE, 0x00,
    0x52, 0x05, 0x2A, 0x02, 0x51, 0x06, 0x31, 0x00,
    0x54, 0x06, 0x09, 0x02, 0x52, 0x09, 0x9F, 0x02,
    0x5C, 0x02, 0xF9, 0x01, 0x68, 0x12, 0xD6, 0x00,
    0x5C, 0x02, 0xFE, 0x01, 0x59, 0x02, 0x31, 0x00,
    0x5A, 0x05, 0x17, 0x02, 0x59, 0x06, 0xFE, 0x00,
    0x5C, 0x06, 0xED, 0x01, 0x59, 0x09, 0x3B, 0x00,
    0x60, 0x26, 0xD0, 0x00, 0x5C, 0x28, 0x4B, 0x01,
    0x67, 0x22, 0x4B, 0x01, 0x63, 0x24, 0x4B, 0x01,
    0x5C, 0x19, 0xAA, 0x02, 0x5A, 0x1C, 0x36, 0x00,
    0x60, 0x17, 0x4B, 0x01, 0x64, 0x14, 0xD6, 0x00
};

// -----------------------------------------------------------------------------
// Sprites for segments drawing
// size: 744 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_mmouse_ssprites[] PROGMEM =
{
    0x01, 0x08, 0x00, 0x11, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x08, 0x00, 0x00, 0x00, 0x03, 0x08,
    0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x15, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x11, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08,
    0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x05, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x17, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0B, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x08, 0x00, 0x00, 0x02, 0x08, 0x00,
    0x00, 0x06, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x08, 0x00, 0x00, 0x00, 0x02, 0x08,
    0x00, 0x00, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x08, 0x00, 0x00, 0x00, 0x07, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x05, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x09, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x13, 0x18, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x08, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x11,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x00
};

// -----------------------------------------------------------------------------
// Display graphics
// size: 0 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_mmouse_graphics[] PROGMEM =
{
};

// -----------------------------------------------------------------------------
// Firmware dump
// file: MC-25.rom
// size: 1856 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_mmouse_firmware[] PROGMEM =
{
    0x70, 0x00, 0x00, 0xAB, 0xC4, 0x00, 0x7D, 0xA2,
    0x4F, 0x74, 0x00, 0x74, 0x6C, 0x05, 0x55, 0xC4,
    0xC4, 0x80, 0xA2, 0x23, 0x5E, 0x00, 0x89, 0x05,
    0x5E, 0x07, 0x6C, 0x98, 0xBA, 0x47, 0xA2, 0xB7,
    0x58, 0x74, 0xE4, 0x71, 0x06, 0xF9, 0x06, 0xF2,
    0x9D, 0x01, 0x00, 0x06, 0x04, 0xF2, 0x47, 0xA2,
    0x8F, 0xC0, 0x47, 0xA1, 0x74, 0x07, 0x38, 0x73,
    0xE2, 0x71, 0xF9, 0xC0, 0xAE, 0x89, 0xF2, 0x80,
    0x20, 0x00, 0x80, 0x31, 0x5F, 0x7B, 0x00, 0x05,
    0x73, 0x22, 0x10, 0x28, 0x7A, 0x00, 0x4B, 0xB9,
    0x64, 0x10, 0x21, 0x21, 0x52, 0x29, 0x34, 0x9A,
    0x92, 0xAB, 0x00, 0x89, 0x01, 0x8C, 0x08, 0x3C,
    0x01, 0x9C, 0x47, 0xD2, 0xDD, 0x24, 0xB6, 0x40,
    0x9C, 0x14, 0x2F, 0x00, 0x18, 0x18, 0x52, 0x80,
    0x21, 0x3C, 0x72, 0x67, 0x6E, 0x00, 0x38, 0xB4,
    0x01, 0x20, 0xE4, 0x66, 0x5E, 0x5F, 0x04, 0x80,
    0x4C, 0x80, 0x78, 0x4C, 0xC0, 0x98, 0xF9, 0x07,
    0x73, 0x77, 0x79, 0xB6, 0xD3, 0x48, 0x52, 0x04,
    0x4C, 0xC9, 0xF6, 0x56, 0x4B, 0x97, 0x82, 0xE9,
    0xE4, 0xFC, 0xE5, 0xAC, 0x78, 0x4D, 0x5F, 0x19,
    0x04, 0xCB, 0xFC, 0x52, 0xC0, 0x77, 0x41, 0x57,
    0xD0, 0x91, 0x57, 0x66, 0xA5, 0xE4, 0x9B, 0xD5,
    0x4D, 0xAD, 0x89, 0x9C, 0x4D, 0x4C, 0x79, 0x5F,
    0x04, 0x94, 0xD0, 0x16, 0x64, 0x04, 0xD5, 0x80,
    0x2B, 0xA8, 0x79, 0xB4, 0x6E, 0xC2, 0xA1, 0x05,
    0x49, 0x0D, 0xC2, 0x48, 0x0E, 0x53, 0x48, 0x10,
    0x53, 0x99, 0x49, 0x49, 0x6E, 0xC2, 0xA2, 0x53,
    0x49, 0x48, 0x24, 0x04, 0xB4, 0x18, 0x6C, 0xB7,
    0x01, 0x28, 0x34, 0x06, 0x0C, 0x0D, 0x32, 0x21,
    0x6F, 0x0F, 0xC9, 0x9A, 0x07, 0x38, 0x22, 0x6F,
    0x5F, 0x07, 0x89, 0x53, 0x64, 0xB4, 0x05, 0x5A,
    0x47, 0xAE, 0x10, 0x9E, 0x6A, 0x6F, 0x53, 0x80,
    0x60, 0xA4, 0x02, 0x06, 0x4B, 0x0B, 0x49, 0x49,
    0x40, 0xE1, 0x00, 0x0C, 0x0B, 0x0E, 0xB6, 0x5B,
    0x24, 0x5F, 0x25, 0x14, 0xE0, 0x3B, 0x1B, 0x5F,
    0x14, 0x35, 0x4B, 0x54, 0x54, 0x3E, 0x2D, 0xBB,
    0x45, 0x5F, 0x06, 0x0E, 0x18, 0x5F, 0x6B, 0xBC,
    0x1B, 0xAA, 0x0B, 0x14, 0x05, 0xA5, 0x9A, 0x63,
    0x52, 0x5F, 0x0B, 0xD0, 0x0D, 0x0E, 0x1B, 0xBD,
    0x19, 0x47, 0x04, 0x62, 0x18, 0x64, 0x57, 0x80,
    0x5F, 0xC0, 0x66, 0x5D, 0x5C, 0x93, 0x19, 0x5F,
    0x14, 0x67, 0x00, 0x62, 0x06, 0x06, 0x5D, 0x56,
    0x54, 0x5F, 0x91, 0x0A, 0x6F, 0x00, 0xA5, 0x69,
    0x19, 0x19, 0x5F, 0x8B, 0x19, 0x19, 0x4B, 0xBB,
    0x14, 0x69, 0xC0, 0x18, 0x06, 0x52, 0x6E, 0x68,
    0x68, 0x09, 0x6E, 0x54, 0x18, 0x63, 0x5D, 0x63,
    0x52, 0x52, 0x07, 0x5F, 0x5F, 0x68, 0x57, 0xBD,
    0x19, 0x05, 0x07, 0x62, 0x18, 0x69, 0x57, 0x80,
    0x5F, 0xB2, 0xD5, 0x9D, 0x07, 0x19, 0x53, 0x55,
    0x0E, 0xA4, 0x01, 0x5E, 0xB2, 0x19, 0x05, 0x57,
    0x8D, 0x19, 0x38, 0x40, 0x53, 0x5F, 0x0F, 0x54,
    0x04, 0x16, 0x24, 0x19, 0x87, 0x47, 0x47, 0x14,
    0x05, 0x64, 0x0E, 0xA4, 0xD2, 0x04, 0x9E, 0xB9,
    0x47, 0x19, 0x82, 0xA4, 0x0F, 0x06, 0x06, 0x53,
    0x20, 0x5F, 0x1A, 0xA4, 0x0D, 0x5F, 0x06, 0x9E,
    0x53, 0x56, 0x87, 0x2B, 0x9E, 0x10, 0x2B, 0x80,
    0x67, 0xAA, 0x73, 0x52, 0x96, 0xC2, 0x05, 0x04,
    0x0F, 0x64, 0xC2, 0x00, 0x07, 0x04, 0x5F, 0x5F,
    0x67, 0x4C, 0x96, 0xAB, 0xFB, 0xC2, 0x01, 0x22,
    0x0C, 0x4B, 0x5F, 0x05, 0x0C, 0xC4, 0x97, 0x38,
    0x4F, 0x0D, 0x6E, 0x04, 0x19, 0x31, 0x79, 0x15,
    0x8F, 0x71, 0xC2, 0x53, 0xA1, 0x20, 0x9D, 0x66,
    0x55, 0x52, 0x0F, 0x04, 0x23, 0xB4, 0x5F, 0x4E,
    0xB7, 0x52, 0x53, 0x21, 0x5E, 0x53, 0x04, 0x80,
    0x4F, 0x00, 0x00, 0x53, 0xFC, 0xBD, 0x23, 0x86,
    0xAD, 0xAD, 0x05, 0xC9, 0x57, 0x4E, 0x7C, 0x44,
    0x4F, 0x5B, 0xC0, 0x4E, 0x53, 0x4F, 0xC0, 0x4C,
    0xC8, 0x41, 0xC0, 0xE9, 0x4D, 0xA3, 0xD5, 0x50,
    0x55, 0xBA, 0x21, 0x7B, 0xD3, 0x73, 0x8B, 0x04,
    0x55, 0x23, 0x9F, 0x07, 0x7A, 0x77, 0x07, 0xBD,
    0xBE, 0xB0, 0xD3, 0x45, 0x98, 0x77, 0xB2, 0x4E,
    0x05, 0x04, 0x50, 0xDE, 0xBD, 0xCA, 0x0D, 0x80,
    0x26, 0xA5, 0x72, 0xC0, 0x44, 0x80, 0x77, 0xD5,
    0x52, 0xCB, 0x78, 0x45, 0xE4, 0xB4, 0x19, 0xAB,
    0xA9, 0x44, 0x45, 0x7B, 0xE4, 0x93, 0xE5, 0x0F,
    0xE9, 0x94, 0x70, 0xF9, 0x0C, 0xD5, 0x7C, 0x7C,
    0x09, 0x77, 0xCB, 0x72, 0x04, 0xD0, 0x82, 0x44,
    0x44, 0x90, 0x8A, 0xE4, 0x66, 0x45, 0x4B, 0xA4,
    0xB7, 0x80, 0x52, 0x0C, 0x07, 0x86, 0x45, 0x3A,
    0x1C, 0x19, 0x6C, 0x10, 0x80, 0x6D, 0x6D, 0x80,
    0x77, 0x00, 0x00, 0xCA, 0x10, 0x80, 0xB4, 0x73,
    0x71, 0x25, 0x70, 0x06, 0x7A, 0x70, 0x80, 0xFC,
    0xFC, 0xD5, 0x12, 0x77, 0xFC, 0xB2, 0xE6, 0xEC,
    0x00, 0x6D, 0x83, 0x4F, 0x53, 0x79, 0xB0, 0xBD,
    0xC0, 0xCF, 0xCA, 0xDD, 0x8E, 0x5F, 0x80, 0xEC,
    0x5F, 0xF6, 0x57, 0xD5, 0x00, 0x0F, 0xBE, 0x6D,
    0x4B, 0xA7, 0xC9, 0x18, 0x42, 0xE4, 0x0D, 0x75,
    0x54, 0x02, 0x67, 0xA2, 0x8F, 0x7B, 0xE4, 0x80,
    0x77, 0x00, 0x00, 0x75, 0x5F, 0xB0, 0x6D, 0x54,
    0xC5, 0xFB, 0xE7, 0x7A, 0x4E, 0xAD, 0x15, 0x73,
    0xE9, 0xCF, 0x71, 0x7A, 0x77, 0x71, 0xC4, 0xD2,
    0x5F, 0x04, 0x93, 0x05, 0xFC, 0x5F, 0x90, 0x7A,
    0xC0, 0xAC, 0x33, 0x92, 0x93, 0xB0, 0xD5, 0xC0,
    0x4B, 0x80, 0xC0, 0x4B, 0x04, 0x74, 0xB0, 0xCF,
    0xC9, 0x04, 0x4B, 0x97, 0x54, 0x54, 0x04, 0x6D,
    0x4B, 0xD3, 0x86, 0x76, 0x05, 0xD3, 0x6D, 0x80,
    0x5F, 0x00, 0x00, 0xD5, 0xC0, 0x80, 0xCA, 0xC0,
    0xE2, 0x77, 0x7B, 0x4E, 0xD4, 0x06, 0xDD, 0x4F,
    0x06, 0x96, 0x8A, 0xC0, 0x40, 0x93, 0xC4, 0xD2,
    0x0D, 0x42, 0x07, 0x0E, 0x4E, 0x73, 0x04, 0x10,
    0x32, 0xE6, 0x58, 0xB6, 0xA2, 0xC5, 0x66, 0x05,
    0xE9, 0x67, 0x71, 0x4A, 0x8B, 0x8B, 0xD5, 0x6B,
    0x52, 0x44, 0x5F, 0xEC, 0x5F, 0x10, 0x4D, 0x6C,
    0x19, 0xD5, 0x47, 0xBC, 0x18, 0x4B, 0x02, 0x80,
    0x18, 0x00, 0x80, 0x57, 0x4F, 0x7B, 0x47, 0x05,
    0x54, 0x07, 0x6D, 0x7B, 0x0E, 0xB2, 0x47, 0x00,
    0x8E, 0x40, 0x47, 0x49, 0x6D, 0xA3, 0x6D, 0xA4,
    0x05, 0x38, 0x8E, 0x57, 0x05, 0x00, 0x38, 0x7F,
    0x3C, 0xA8, 0x06, 0x5F, 0x8A, 0x8F, 0x5F, 0x41,
    0x65, 0xD5, 0x7B, 0x40, 0xC8, 0x92, 0x7E, 0x88,
    0xBE, 0x38, 0x5F, 0x10, 0x00, 0x54, 0x40, 0x0E,
    0xD9, 0x04, 0x58, 0x5E, 0x9F, 0x04, 0xCC, 0x80,
    0xC9, 0x00, 0x86, 0xD3, 0x9D, 0x7D, 0xD3, 0x9C,
    0x10, 0x53, 0xB7, 0x04, 0xE6, 0x9D, 0x57, 0x0F,
    0x5A, 0x00, 0x10, 0xC8, 0x7D, 0x7D, 0x10, 0xD1,
    0x56, 0x93, 0x56, 0x04, 0xE2, 0x47, 0x0E, 0x06,
    0xF2, 0x6A, 0x34, 0x80, 0x47, 0x05, 0xEA, 0x19,
    0x9D, 0x40, 0x80, 0xB1, 0x95, 0x41, 0x85, 0x71,
    0x9C, 0x4F, 0x57, 0x0E, 0x4F, 0x4F, 0x5E, 0xBA,
    0x47, 0x0F, 0x06, 0x5F, 0x07, 0x14, 0x4F, 0x80,
    0x68, 0x00, 0x00, 0x25, 0x57, 0x00, 0x5F, 0x5F,
    0x74, 0x47, 0x00, 0x21, 0x94, 0xD4, 0x0D, 0x20,
    0x1C, 0xE6, 0x88, 0x7E, 0x7E, 0x00, 0x47, 0x5F,
    0x11, 0x57, 0x19, 0xB1, 0x51, 0x14, 0xBD, 0x63,
    0x21, 0x22, 0x88, 0x0C, 0xF9, 0x10, 0xEA, 0x62,
    0x0C, 0x80, 0xBB, 0x2C, 0x2F, 0x5F, 0x9C, 0x6C,
    0x03, 0x2F, 0x47, 0x6C, 0x19, 0xD4, 0x1D, 0x9F,
    0x2F, 0xA7, 0x23, 0x5C, 0x01, 0x50, 0x48, 0x80,
    0x4F, 0x00, 0xE7, 0x0C, 0xF1, 0xD5, 0x66, 0x55,
    0xDB, 0xF0, 0xEA, 0xE0, 0xF2, 0x54, 0xB5, 0x2F,
    0x52, 0xD6, 0xD0, 0xEB, 0xE1, 0xDA, 0xD2, 0xA1,
    0xA1, 0xF5, 0xA1, 0x6E, 0x8D, 0x05, 0x21, 0x21,
    0x57, 0xE2, 0xDD, 0x66, 0xD1, 0xE5, 0xE8, 0x08,
    0x87, 0xE3, 0xDC, 0x04, 0x5F, 0x4B, 0x54, 0x66,
    0x6E, 0x0D, 0xD4, 0xD9, 0x55, 0x67, 0x17, 0x09,
    0x6F, 0x52, 0xA1, 0xB3, 0x5F, 0x1C, 0x11, 0x80,
    0x5E, 0xB9, 0xAE, 0x01, 0x5F, 0x91, 0x2B, 0x8E,
    0x5A, 0xA7, 0xB5, 0x5F, 0x5F, 0x27, 0x31, 0x66,
    0x6A, 0x18, 0x25, 0x19, 0x15, 0x6E, 0xA7, 0x6E,
    0x6A, 0x00, 0xA7, 0x6F, 0x38, 0x26, 0x36, 0x5F,
    0x04, 0x4C, 0x49, 0x6C, 0x6E, 0x49, 0x34, 0x10,
    0x5A, 0x11, 0x93, 0x6F, 0x5A, 0x40, 0x55, 0x2C,
    0x46, 0x9D, 0x6F, 0x6E, 0x9D, 0x20, 0xAD, 0x08,
    0x08, 0x5F, 0x6F, 0x10, 0x6C, 0x67, 0xB8, 0x80,
    0x52, 0x90, 0xB5, 0x5F, 0x31, 0xBD, 0x6E, 0x20,
    0x5F, 0x92, 0x9B, 0x2D, 0x20, 0x0D, 0x00, 0x57,
    0x20, 0x6E, 0x64, 0x23, 0xB2, 0x98, 0x6E, 0x66,
    0x0F, 0x11, 0x52, 0x5F, 0xB5, 0x00, 0xAE, 0x56,
    0x9F, 0x11, 0x92, 0xA5, 0x0C, 0x44, 0x1D, 0xB5,
    0x1C, 0x5B, 0x64, 0x0F, 0x0E, 0x02, 0x57, 0x66,
    0x56, 0x00, 0x20, 0x07, 0x90, 0x4B, 0x6E, 0x0E,
    0xB5, 0x67, 0x6E, 0xB5, 0x06, 0x52, 0xB9, 0x80,
    0x58, 0xB8, 0xB9, 0x18, 0x91, 0xAB, 0x64, 0x96,
    0x64, 0x3F, 0x00, 0x0E, 0x1C, 0x88, 0x04, 0x10,
    0xA6, 0x6E, 0x18, 0x08, 0x52, 0x6E, 0x47, 0xBE,
    0x55, 0xA6, 0x54, 0x96, 0x5F, 0x1C, 0xA6, 0x37,
    0xB8, 0x3F, 0x10, 0x22, 0x18, 0x02, 0x21, 0x52,
    0x3F, 0x10, 0x96, 0x5F, 0xAD, 0x0D, 0x27, 0xA6,
    0x6E, 0x1C, 0x37, 0x85, 0xA3, 0x24, 0x05, 0x1C,
    0x46, 0x67, 0x21, 0x18, 0x66, 0x3B, 0x18, 0x80,
    0x5F, 0x00, 0x00, 0x9C, 0x5F, 0x00, 0x5B, 0x02,
    0x10, 0xB2, 0x00, 0x4E, 0x6D, 0x23, 0x14, 0xB9,
    0x0A, 0x27, 0x84, 0x94, 0x00, 0x00, 0x05, 0x53,
    0xBA, 0x04, 0x64, 0xB2, 0x18, 0x6B, 0xC0, 0x25,
    0x40, 0xAC, 0x33, 0x23, 0x8C, 0xC5, 0x7B, 0x43,
    0x09, 0x00, 0x00, 0x90, 0x4B, 0x4F, 0x02, 0x53,
    0x22, 0x5B, 0x4B, 0x9C, 0xAC, 0x6B, 0x54, 0x9E,
    0x53, 0x42, 0x18, 0x4B, 0x9F, 0x0C, 0xBB, 0x80,
    0x5F, 0x00, 0x00, 0x01, 0x0F, 0x00, 0x20, 0x83,
    0x5A, 0x52, 0xA7, 0x5F, 0x3C, 0x02, 0x31, 0x31,
    0x31, 0xD5, 0x07, 0x6D, 0x91, 0x79, 0x66, 0x6C,
    0x6E, 0x80, 0x5F, 0x67, 0x31, 0x00, 0x01, 0x6C,
    0x03, 0x00, 0xEC, 0x6C, 0x8C, 0x04, 0xAA, 0x00,
    0x00, 0x77, 0x6D, 0xBD, 0x46, 0x3B, 0x9E, 0xB8,
    0x20, 0x83, 0x76, 0x01, 0x01, 0x6E, 0x18, 0x6E,
    0x01, 0x00, 0x00, 0x4C, 0x31, 0x2C, 0xB8, 0x80,
    0x4A, 0x00, 0x00, 0xD3, 0xCB, 0x00, 0x79, 0xDE,
    0xCB, 0x18, 0x00, 0x18, 0x80, 0xB1, 0xB1, 0x4E,
    0xD2, 0x08, 0x5F, 0xB7, 0x8E, 0xB5, 0x5F, 0x16,
    0x16, 0x77, 0x66, 0x08, 0x9A, 0xC5, 0xAE, 0xA9,
    0xDE, 0x9A, 0x5F, 0xF5, 0xEC, 0xE5, 0x79, 0x23,
    0xCA, 0x77, 0x78, 0x54, 0xF9, 0xE5, 0x5F, 0x3F,
    0x06, 0x5F, 0xD0, 0x53, 0x52, 0x86, 0x5F, 0xAA,
    0x3F, 0xAE, 0x87, 0xC0, 0xA6, 0x8F, 0x3F, 0x80,
    0xE4, 0x00, 0x00, 0xCF, 0x79, 0x80, 0xCA, 0xB1,
    0xD2, 0x9B, 0x78, 0x18, 0xC5, 0x80, 0xC0, 0xE4,
    0xB2, 0x9B, 0x84, 0xDE, 0x5F, 0xD0, 0x5F, 0x70,
    0x21, 0x93, 0x7A, 0x66, 0x86, 0x80, 0xD5, 0x6D,
    0xED, 0x7A, 0xD3, 0x96, 0xCA, 0x55, 0x94, 0xB5,
    0x7B, 0xF5, 0x18, 0xB4, 0x53, 0x94, 0x6D, 0xED,
    0xAF, 0x4E, 0x52, 0xEC, 0xA9, 0x6D, 0x96, 0xA8,
    0x6D, 0xC5, 0x76, 0x5F, 0x77, 0x23, 0xF6, 0x80,
    0x5F, 0x80, 0x79, 0x22, 0x5F, 0xEC, 0x4E, 0xB1,
    0x5F, 0xF5, 0xCB, 0xC5, 0x1C, 0xBA, 0x54, 0xF9,
    0xBA, 0xF9, 0xDE, 0x5F, 0xD0, 0x0C, 0x92, 0x77,
    0xD3, 0x5F, 0x86, 0xCA, 0x75, 0x0C, 0xEC, 0x5F,
    0x08, 0x53, 0x0C, 0xA8, 0x1C, 0x84, 0xD0, 0xE4,
    0x66, 0x0C, 0x5F, 0xAF, 0xA8, 0x52, 0xFB, 0x08,
    0xD0, 0x79, 0xF9, 0xED, 0x84, 0xC0, 0xD2, 0xF9,
    0x5F, 0x97, 0x5F, 0x44, 0x18, 0xE5, 0xF9, 0x80,
    0xE5, 0x00, 0x6F, 0xB9, 0xF9, 0x6E, 0xD3, 0xF5,
    0xE4, 0x4D, 0x09, 0xE5, 0xDA, 0x79, 0xDE, 0x20,
    0xCA, 0xCB, 0xF9, 0x5F, 0x19, 0x66, 0x0C, 0x1C,
    0xCB, 0x75, 0xB9, 0xE5, 0xA3, 0xA3, 0x4E, 0x77,
    0xE4, 0xD2, 0xEC, 0x5F, 0xED, 0x4C, 0x9F, 0x53,
    0x52, 0x02, 0x0A, 0x56, 0x5F, 0x5F, 0x5F, 0xAF,
    0xED, 0x1C, 0x9F, 0xAE, 0x8E, 0x8D, 0x1C, 0xC0,
    0x9F, 0x66, 0xC5, 0x9E, 0x75, 0xAE, 0xC0, 0x80,
    0x75, 0x00, 0x87, 0x90, 0x18, 0x7A, 0x33, 0x34,
    0x22, 0x64, 0x6D, 0x12, 0xAA, 0x9B, 0x98, 0x5F,
    0x32, 0x21, 0x6E, 0x18, 0x10, 0x47, 0x5F, 0xB5,
    0x24, 0x3C, 0x86, 0x29, 0x64, 0x87, 0x93, 0x48,
    0xDA, 0xB6, 0x3B, 0x89, 0x96, 0x10, 0xEC, 0x40,
    0xBA, 0x02, 0x5F, 0xAD, 0x25, 0x2C, 0x09, 0x75,
    0x75, 0x23, 0xD2, 0x18, 0xAC, 0x32, 0x27, 0xF0,
    0xDA, 0x66, 0x34, 0x6D, 0x75, 0x7A, 0xFB, 0x80,
    0x66, 0xBB, 0xBA, 0x54, 0x5A, 0x3D, 0x47, 0x89,
    0x38, 0x6A, 0x77, 0xA6, 0xBA, 0xC8, 0x7F, 0x4F,
    0x04, 0x5F, 0xD3, 0x80, 0x23, 0x18, 0xE2, 0x0E,
    0x6D, 0x71, 0x0E, 0x6D, 0x7E, 0x6D, 0x80, 0xBB,
    0x56, 0xB4, 0xA6, 0xE6, 0x06, 0xD3, 0x7C, 0x56,
    0xBA, 0x5F, 0xDE, 0x47, 0x74, 0xEA, 0x80, 0x4F,
    0xAF, 0xEA, 0x6D, 0x97, 0x0C, 0x0F, 0xF9, 0x0F,
    0x67, 0x6D, 0xEA, 0x6D, 0x4F, 0x7C, 0x07, 0x80,
    0x58, 0x00, 0x00, 0x2F, 0x5B, 0x00, 0x01, 0x10,
    0x53, 0x20, 0x00, 0x10, 0x01, 0x5F, 0x08, 0x6D,
    0x09, 0x29, 0x9E, 0x74, 0x00, 0x00, 0x26, 0xB2,
    0xA5, 0x5F, 0x89, 0x53, 0x6D, 0x2F, 0x9C, 0x57,
    0xBC, 0x66, 0xA5, 0x40, 0x27, 0x74, 0xEF, 0x71,
    0xBA, 0x80, 0x00, 0x21, 0x64, 0xA5, 0x7D, 0xBB,
    0x7B, 0xC5, 0x20, 0xC0, 0x87, 0x5B, 0x25, 0xB0,
    0x96, 0x6D, 0x1C, 0x47, 0xC4, 0x55, 0x40, 0x80
};

// -----------------------------------------------------------------------------
// Controls configuration
// keys: acl time game_b game_a alarm right_down right_up left_down left_up cheat
// size: 20 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_mmouse_controls[] PROGMEM =
{
    0x00, 0x10, 0x01, 0x41, 0x02, 0x42, 0x03, 0x43,
    0x04, 0x44, 0x05, 0x31, 0x06, 0x32, 0x07, 0x33,
    0x08, 0x34, 0x0B, 0x05
};
const size_t gnw_mmouse_controls_size = 20;

