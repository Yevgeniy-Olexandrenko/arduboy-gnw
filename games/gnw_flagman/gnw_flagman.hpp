// -----------------------------------------------------------------------------
// Controls configuration
// keys: left_up right_up left_down right_down time game_b game_a cheat_a acl
// size: 13 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_flagman_controls[] PROGMEM =
{
    0x41, 0x42, 0x43, 0xFF, 0x34, 0x32, 0x33, 0x31,
    0xFF, 0xFF, 0x05, 0xFF, 0x10
};

// -----------------------------------------------------------------------------
// Segments rendering info
// size: 288 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_flagman_segments[] PROGMEM =
{
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x27, 0x12, 0x09, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x2B, 0x23, 0x54, 0x01, 0x38, 0x2F, 0x27, 0x01,
    0x1B, 0x08, 0x3C, 0x01, 0x1B, 0x13, 0x3C, 0x01,
    0x1B, 0x1E, 0x3C, 0x01, 0x1B, 0x29, 0x3C, 0x01,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x32, 0x08, 0x4A, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x37, 0x08, 0x00, 0x00,
    0x37, 0x0B, 0x86, 0x00, 0x37, 0x0E, 0xD4, 0x00,
    0x3B, 0x08, 0x58, 0x00, 0x38, 0x08, 0x52, 0x00,
    0x38, 0x0A, 0xC0, 0x00, 0x3A, 0x0B, 0x30, 0x01,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x41, 0x0B, 0xE2, 0x00, 0x42, 0x0E, 0x37, 0x01,
    0x46, 0x08, 0x4F, 0x00, 0x42, 0x08, 0x52, 0x00,
    0x42, 0x0A, 0x03, 0x00, 0x44, 0x0B, 0x30, 0x01,
    0xFF, 0xFF, 0xFF, 0xFF, 0x49, 0x08, 0x00, 0x00,
    0x49, 0x0B, 0x86, 0x00, 0x49, 0x0E, 0xD4, 0x00,
    0x4D, 0x0A, 0x34, 0x01, 0x4A, 0x08, 0x52, 0x00,
    0x4A, 0x0A, 0xC0, 0x00, 0x4C, 0x0B, 0x30, 0x01,
    0x36, 0x15, 0x8A, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x5C, 0x08, 0x70, 0x01, 0x3E, 0x09, 0xD0, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x41, 0x2F, 0xDA, 0x00, 0x43, 0x25, 0x5C, 0x00,
    0x44, 0x25, 0x80, 0x00, 0x43, 0x12, 0xE6, 0x00,
    0x5C, 0x2C, 0xC5, 0x00, 0x5C, 0x23, 0x70, 0x01,
    0x5C, 0x1A, 0x70, 0x01, 0x5C, 0x11, 0x70, 0x01
};

// -----------------------------------------------------------------------------
// Graphics rendering info
// size: 256 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_flagman_graphics[] PROGMEM =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x6C, 0x02, 0xA4, 0x02, 0xA4, 0x01,
    0xEC, 0x01, 0x00, 0x00, 0x54, 0x03, 0x94, 0x02,
    0x00, 0x00, 0xDC, 0x01, 0x84, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xB4, 0x01, 0x34, 0x02, 0xE4, 0x01,
    0x1C, 0x03, 0x00, 0x00, 0xD4, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x7C, 0x02, 0xFC, 0x02, 0xFC, 0x01,
    0x00, 0x00, 0x04, 0x02, 0x54, 0x02, 0x8C, 0x02,
    0x00, 0x00, 0x54, 0x03, 0x94, 0x01, 0xCC, 0x02,
    0x00, 0x00, 0x00, 0x00, 0xBC, 0x02, 0x0C, 0x02,
    0x00, 0x00, 0xCC, 0x01, 0x3C, 0x02, 0xC4, 0x01,
    0x14, 0x03, 0x74, 0x02, 0x00, 0x00, 0x04, 0x02,
    0x9C, 0x02, 0x3C, 0x03, 0x00, 0x00, 0x24, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x84, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xE4, 0x02, 0x14, 0x03, 0x44, 0x03,
    0xFC, 0x01, 0x00, 0x00, 0x00, 0x00, 0xBC, 0x01,
    0xEC, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x02, 0x24, 0x03, 0x44, 0x02, 0x00, 0x00,
    0xB4, 0x02, 0x5C, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x03,
    0x00, 0x00, 0xD4, 0x02, 0xC4, 0x02, 0xAC, 0x01,
    0x74, 0x02, 0x1C, 0x02, 0xAC, 0x02, 0x4C, 0x02,
    0x9C, 0x01, 0x2C, 0x02, 0x00, 0x00, 0xF4, 0x02,
    0x8C, 0x01, 0x9C, 0x02, 0x14, 0x02, 0x2C, 0x03,
    0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x4C, 0x03, 0xF4, 0x01, 0xDC, 0x02,
    0x64, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// -----------------------------------------------------------------------------
// Tiles for rendering
// size: 860 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_flagman_gfxtiles[] PROGMEM =
{
    0x01, 0x08, 0x07, 0x04, 0x08, 0x03, 0x03, 0x01,
    0x01, 0x15, 0x18, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x7F, 0x07, 0x07, 0x07, 0x07, 0x07,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07,
    0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x08, 0x78, 0x7F, 0x0F, 0x01,
    0x08, 0x0F, 0x04, 0x08, 0x03, 0x03, 0x03, 0x03,
    0x02, 0x08, 0x04, 0x0F, 0x11, 0x10, 0xFF, 0xC0,
    0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x04, 0x08, 0x3F, 0x3F, 0x3F, 0x3F, 0x02, 0x08,
    0x07, 0x06, 0x0D, 0x20, 0xF0, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x00, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x08, 0x03, 0x03, 0x01, 0x09, 0x08, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x02, 0x08, 0x1B, 0x1B, 0x04, 0x08, 0x03, 0x03,
    0x03, 0x02, 0x06, 0x08, 0x3F, 0x3F, 0x3E, 0x3E,
    0x3E, 0x3E, 0x02, 0x08, 0x0F, 0x06, 0x15, 0x18,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x08, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x02, 0x08, 0x0F, 0x0F, 0x01, 0x08, 0x01, 0x03,
    0x08, 0x03, 0x03, 0x02, 0x0B, 0x10, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x0D, 0x10, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x10,
    0x09, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0xFE, 0x10, 0x10, 0x10,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x20, 0x20, 0x10, 0x10, 0xFE, 0x10,
    0x10, 0x10, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x04, 0x04, 0x3F, 0x04, 0x0A, 0x0A, 0x1F, 0x02,
    0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x20, 0x20,
    0x20, 0xFC, 0x20, 0x20, 0x80, 0xF0, 0x80, 0x80,
    0x80, 0x00, 0x00, 0x00, 0x20, 0xFC, 0x20, 0x20,
    0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x00, 0x20, 0x20, 0xFC, 0x20,
    0x20, 0x20, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x7F, 0x08, 0x08,
    0x08, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x7F, 0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x10, 0x10, 0x10, 0xFE, 0x00, 0x20, 0x20, 0x20,
    0xFC, 0x20, 0x20, 0x20, 0x80, 0x82, 0x82, 0x02,
    0x1F, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x80,
    0x80, 0x80, 0xF0, 0x80, 0x01, 0x0F, 0x01, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x42, 0x42, 0x02,
    0x1F, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x08, 0x08, 0x80, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
    0x80, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x20, 0x20, 0xFC, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80,
    0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x80, 0xF0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xC0, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x04, 0x04,
    0x3F, 0x04, 0x04, 0x04, 0xE0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02,
    0x02, 0x1F, 0x02, 0x02, 0x0F, 0x01, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x08, 0x7F, 0x08, 0x08,
    0x08, 0x00, 0x00, 0x03, 0x01, 0x0F, 0x01, 0x01,
    0x01, 0x00, 0x00, 0x20, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x0F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x40, 0x40, 0xF8
};

// -----------------------------------------------------------------------------
// Firmware dump
// file: FL-02.rom
// size: 1856 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_flagman_firmware[] PROGMEM =
{
    0x70, 0x00, 0x00, 0x90, 0x67, 0x00, 0xC3, 0x56,
    0x64, 0x8D, 0x6F, 0x98, 0x94, 0x73, 0x1C, 0x5A,
    0x5E, 0xA6, 0x74, 0x5F, 0x0A, 0x6E, 0x74, 0x18,
    0x0E, 0x07, 0xB3, 0x8E, 0x80, 0x5F, 0x18, 0x75,
    0x58, 0xB3, 0x53, 0x98, 0x18, 0x6D, 0x18, 0xA5,
    0x00, 0x06, 0x09, 0x5A, 0x6D, 0x6D, 0x4F, 0x80,
    0xB7, 0x80, 0x5F, 0x6D, 0x54, 0x8D, 0x74, 0xF8,
    0xC2, 0x74, 0xAD, 0xAE, 0xB4, 0x4F, 0x6D, 0x80,
    0x48, 0x00, 0x92, 0x02, 0x6E, 0x18, 0x5F, 0x04,
    0x24, 0x1C, 0xA5, 0x27, 0x23, 0xA8, 0x0D, 0x0C,
    0x07, 0x4F, 0x44, 0x94, 0x22, 0x85, 0x2F, 0x0F,
    0x5F, 0x96, 0x56, 0x3B, 0xB5, 0x48, 0x02, 0x10,
    0x25, 0x0E, 0x04, 0x4F, 0x53, 0x23, 0x53, 0x05,
    0x4B, 0x8B, 0x53, 0x06, 0x08, 0xA2, 0x48, 0x4B,
    0x10, 0x18, 0x8C, 0x4B, 0x57, 0x4B, 0x0C, 0x54,
    0x5F, 0x55, 0xA3, 0xB3, 0x02, 0x5F, 0x2A, 0x80,
    0x67, 0x00, 0x00, 0x3F, 0x04, 0x00, 0xB6, 0x25,
    0xB2, 0xA6, 0xB3, 0x0B, 0x0D, 0x3F, 0x20, 0x64,
    0x3F, 0x56, 0x52, 0x07, 0x6E, 0x1B, 0x28, 0x3F,
    0x27, 0xA6, 0xAC, 0x26, 0x3F, 0x3F, 0xAA, 0x31,
    0x00, 0x9B, 0x05, 0x24, 0x0C, 0x18, 0x06, 0x18,
    0xAD, 0x10, 0x64, 0x98, 0x29, 0x23, 0xB1, 0x39,
    0x4A, 0x21, 0x57, 0x3F, 0x3F, 0x3F, 0x22, 0xF0,
    0x54, 0xA3, 0x96, 0x18, 0x66, 0x38, 0x18, 0x80,
    0x64, 0x00, 0x00, 0x4F, 0x91, 0x00, 0xAE, 0x4B,
    0x53, 0x53, 0x00, 0x10, 0x00, 0x18, 0x6F, 0x44,
    0x08, 0x22, 0x21, 0x00, 0x00, 0x00, 0x28, 0x14,
    0x53, 0x00, 0x02, 0x22, 0x2B, 0x6E, 0x5F, 0xBB,
    0x32, 0x2F, 0x9B, 0x10, 0x96, 0x6E, 0x00, 0x18,
    0x10, 0x00, 0x00, 0x9A, 0x92, 0x24, 0x6B, 0x18,
    0xBE, 0x20, 0xAD, 0x5A, 0x18, 0x6E, 0x21, 0xEB,
    0x19, 0xAE, 0x5A, 0x1B, 0xEB, 0xEB, 0x32, 0x80,
    0x73, 0x00, 0x00, 0x6C, 0x4B, 0x00, 0x00, 0x20,
    0x98, 0x5F, 0x00, 0x01, 0x31, 0x01, 0x6E, 0x6E,
    0x5F, 0x31, 0xAC, 0x6C, 0x76, 0x00, 0x2F, 0x01,
    0x14, 0x2B, 0x2F, 0x00, 0x14, 0x9C, 0x06, 0x76,
    0xC3, 0xAE, 0x18, 0x5F, 0x6E, 0x6C, 0x8C, 0x21,
    0x4B, 0x99, 0xA6, 0x00, 0x20, 0x00, 0x20, 0x9D,
    0xBE, 0x4B, 0x4C, 0x5F, 0x18, 0x00, 0x01, 0x49,
    0x7D, 0x4B, 0x31, 0x10, 0x87, 0x07, 0x6D, 0x80,
    0x73, 0x00, 0x80, 0x80, 0xC4, 0x78, 0x78, 0x08,
    0x06, 0x70, 0x0F, 0x06, 0x5F, 0x83, 0x2F, 0x9C,
    0x96, 0x5F, 0x4C, 0x18, 0x0C, 0x4D, 0x5F, 0x18,
    0x53, 0x10, 0x77, 0x54, 0x53, 0x05, 0x76, 0xEA,
    0xC3, 0x79, 0x95, 0x10, 0x18, 0x18, 0x07, 0x0D,
    0x51, 0x5F, 0x10, 0x4B, 0x86, 0xA1, 0xA8, 0x76,
    0xBC, 0x20, 0x4C, 0x5F, 0x86, 0x10, 0x4D, 0x9D,
    0xA8, 0x03, 0x5F, 0xE4, 0x71, 0xA7, 0xC0, 0x80,
    0x25, 0x00, 0x00, 0x5A, 0x10, 0x00, 0x6A, 0x18,
    0x6A, 0x4C, 0x80, 0x18, 0xB2, 0xE9, 0x06, 0x7B,
    0x4D, 0x00, 0x5F, 0x4C, 0x31, 0x75, 0x97, 0xC5,
    0x9B, 0x74, 0x9D, 0x6D, 0xC0, 0x5F, 0xF1, 0x18,
    0x4F, 0x9C, 0xC0, 0x31, 0x5A, 0x37, 0x5F, 0x89,
    0x05, 0x18, 0x84, 0xB3, 0x2D, 0x77, 0x00, 0x5F,
    0x10, 0x39, 0x9C, 0x75, 0x77, 0xE4, 0x92, 0x03,
    0x7D, 0xBB, 0x99, 0x10, 0x88, 0x73, 0x49, 0x80,
    0x24, 0xB1, 0x7A, 0xD5, 0x0E, 0x0C, 0x88, 0x06,
    0xD5, 0x4D, 0x1C, 0x89, 0x54, 0xCA, 0x5F, 0x10,
    0x6D, 0xA4, 0x89, 0x76, 0x4D, 0x5F, 0x54, 0x4D,
    0x18, 0x4D, 0x89, 0x10, 0x53, 0x18, 0x22, 0xB7,
    0x53, 0xBA, 0xEA, 0x10, 0x79, 0x7B, 0x94, 0x72,
    0x76, 0x80, 0x0E, 0x0E, 0x5F, 0x4D, 0xB7, 0xBD,
    0xBC, 0x4E, 0x9C, 0xC0, 0x80, 0x7B, 0x07, 0x75,
    0x9E, 0x49, 0x4A, 0xA8, 0x28, 0x23, 0x53, 0x80,
    0x4B, 0x00, 0x80, 0x4D, 0x0D, 0x77, 0x05, 0x01,
    0x49, 0x9C, 0xA6, 0xE4, 0x20, 0x4D, 0x23, 0x2D,
    0xBA, 0x10, 0x79, 0x77, 0x22, 0x85, 0x00, 0x00,
    0x10, 0x94, 0xBB, 0xC8, 0xBB, 0x99, 0xE3, 0x4F,
    0x2F, 0x57, 0x4B, 0x4F, 0x21, 0x84, 0x21, 0xD3,
    0x07, 0x8F, 0x53, 0x73, 0x5F, 0x5E, 0xF8, 0x22,
    0x10, 0x26, 0x53, 0x58, 0x8E, 0xC3, 0x03, 0x10,
    0x71, 0xAE, 0x77, 0x2C, 0xC0, 0x74, 0xEA, 0x80,
    0x78, 0x00, 0x00, 0x00, 0xC4, 0x00, 0xC0, 0x18,
    0x06, 0x70, 0x95, 0x06, 0x5F, 0x10, 0x4C, 0x4D,
    0x5A, 0x5F, 0x40, 0x18, 0x01, 0x75, 0x5F, 0xBC,
    0x73, 0x10, 0x24, 0x75, 0xC0, 0x5F, 0x9C, 0xE4,
    0x8B, 0x6A, 0x95, 0x31, 0x18, 0x18, 0x07, 0x05,
    0xBC, 0x5F, 0x10, 0x5F, 0xC3, 0xA8, 0x00, 0xAB,
    0x7A, 0x8D, 0x40, 0x7A, 0x2D, 0x4C, 0xB0, 0xE9,
    0x84, 0xB6, 0xF2, 0x6A, 0xC5, 0x5A, 0x80, 0x80,
    0x3F, 0x00, 0x00, 0x77, 0x71, 0x00, 0x06, 0x7B,
    0x4D, 0xC8, 0x00, 0x4F, 0x6D, 0x90, 0xD5, 0xB9,
    0x29, 0xEA, 0x4B, 0xBA, 0xBC, 0x00, 0x20, 0x76,
    0xC8, 0x06, 0x56, 0x56, 0x54, 0xB1, 0xD9, 0x74,
    0xBB, 0x8D, 0xC0, 0x86, 0x56, 0x10, 0x75, 0x74,
    0xF2, 0x79, 0x00, 0x9C, 0xC8, 0x25, 0xB5, 0xE7,
    0x3F, 0x4E, 0xA9, 0xC7, 0xCA, 0x4D, 0x4D, 0xB9,
    0x9E, 0x4D, 0x8E, 0xE6, 0x3F, 0xB9, 0xA7, 0x80,
    0x24, 0x00, 0x00, 0xC8, 0xC0, 0x80, 0x4B, 0xF2,
    0x00, 0x71, 0x7A, 0xC0, 0x54, 0xB7, 0x28, 0x9C,
    0x03, 0xC0, 0xC7, 0x49, 0x8A, 0xC0, 0x72, 0xAF,
    0x4D, 0x4D, 0x20, 0x76, 0x72, 0xEA, 0x53, 0x28,
    0x53, 0x5F, 0xEA, 0xC0, 0x2C, 0x73, 0xAA, 0x72,
    0xC8, 0x18, 0x72, 0x72, 0x54, 0xBE, 0xC0, 0x2C,
    0xBD, 0x00, 0xF2, 0xC0, 0x71, 0xC0, 0x96, 0x7C,
    0x72, 0x9F, 0xC0, 0xB6, 0xC0, 0x28, 0x24, 0x80,
    0x54, 0x80, 0x7B, 0x7B, 0xA4, 0xB1, 0x82, 0x21,
    0x87, 0x53, 0xC0, 0x7B, 0x72, 0x5A, 0x20, 0x49,
    0x20, 0xC0, 0x21, 0xA3, 0x53, 0x72, 0xC8, 0x08,
    0x66, 0xA9, 0x18, 0x4E, 0x18, 0xC0, 0xB9, 0x31,
    0xBC, 0xAB, 0x72, 0x22, 0x22, 0x86, 0xC0, 0x18,
    0x53, 0x23, 0x82, 0x08, 0x09, 0xC8, 0x08, 0x39,
    0x7B, 0x23, 0x53, 0x90, 0x92, 0x10, 0x10, 0xBD,
    0x86, 0x49, 0x72, 0x9B, 0x4A, 0x54, 0x18, 0x80,
    0x18, 0x00, 0x80, 0xB4, 0x99, 0x7C, 0xA1, 0x4E,
    0x4B, 0x77, 0x4D, 0x4D, 0xEA, 0x5A, 0x10, 0x5F,
    0x00, 0xC8, 0xA2, 0x00, 0x04, 0xF7, 0xC8, 0xC2,
    0x5F, 0xC0, 0x6A, 0x6C, 0x0C, 0x23, 0x18, 0xEA,
    0x5F, 0xC0, 0x4F, 0xC8, 0xC8, 0x54, 0xC0, 0x06,
    0x97, 0x5E, 0x74, 0xA1, 0x08, 0xC8, 0x80, 0x97,
    0x07, 0xC8, 0x71, 0x10, 0x5F, 0xE9, 0x0D, 0x4D,
    0x10, 0x5F, 0x05, 0x0C, 0x71, 0x4C, 0xC0, 0x80,
    0x3C, 0x00, 0xB7, 0xBD, 0x2B, 0x7D, 0x0D, 0xC8,
    0x49, 0x04, 0x80, 0x4D, 0x18, 0x96, 0x4B, 0x54,
    0x00, 0x84, 0x5F, 0x06, 0x5F, 0x7D, 0x05, 0xB6,
    0x9B, 0x40, 0x7F, 0x5F, 0xDE, 0xC8, 0x49, 0x5E,
    0xBC, 0x65, 0x14, 0x49, 0x56, 0x04, 0x5F, 0xAB,
    0x58, 0x10, 0x01, 0xE7, 0x70, 0x08, 0x7F, 0x04,
    0x7F, 0x54, 0x85, 0xC6, 0x00, 0xB9, 0x9D, 0x3C,
    0x96, 0x73, 0x4F, 0x9A, 0xE4, 0x65, 0x86, 0x80,
    0x00, 0x00, 0x00, 0xD4, 0x6A, 0xA1, 0x4C, 0x03,
    0x4D, 0xE9, 0x7E, 0x99, 0x10, 0x5F, 0x21, 0x0C,
    0x77, 0x96, 0x9B, 0x7E, 0x5F, 0xC8, 0xC5, 0x2C,
    0x71, 0x49, 0xD4, 0xC2, 0xD4, 0x10, 0x5F, 0xB7,
    0x2F, 0x6D, 0x5A, 0x73, 0x05, 0xE4, 0x18, 0xD4,
    0x80, 0x80, 0x03, 0xD4, 0xC0, 0x94, 0x5F, 0x9E,
    0x01, 0xDE, 0x9B, 0x5F, 0x4B, 0x4F, 0xEA, 0x6D,
    0x68, 0x1C, 0x23, 0x77, 0x7F, 0xA3, 0x51, 0x80,
    0x58, 0x00, 0xD6, 0x44, 0x08, 0xD3, 0x5F, 0x1C,
    0xDA, 0x21, 0xD1, 0x08, 0xF6, 0x1C, 0x21, 0x1C,
    0x98, 0x6F, 0x6E, 0xF2, 0xE4, 0xD4, 0x21, 0x1C,
    0x64, 0xFD, 0x96, 0x96, 0x37, 0x96, 0x89, 0x37,
    0xB8, 0x54, 0x10, 0x04, 0xE5, 0x10, 0xF0, 0x5F,
    0x64, 0xE2, 0xE0, 0x18, 0x18, 0x1C, 0x96, 0x89,
    0x6F, 0x6E, 0xF5, 0x47, 0x18, 0x3B, 0x37, 0x1C,
    0x5F, 0x18, 0x3E, 0x18, 0x49, 0x3B, 0x18, 0x80,
    0x00, 0x9E, 0x6E, 0x2B, 0x4E, 0x1C, 0x27, 0x26,
    0x09, 0x6E, 0x20, 0x49, 0x09, 0x6F, 0x4C, 0x18,
    0x00, 0x27, 0x18, 0x10, 0x3A, 0x6E, 0x6F, 0x18,
    0x6C, 0x26, 0x6E, 0x5A, 0x6E, 0x6F, 0x4A, 0x00,
    0x00, 0x01, 0x66, 0x31, 0x94, 0x10, 0x94, 0x5F,
    0x6A, 0x6F, 0x10, 0x4E, 0x87, 0x8B, 0x64, 0x00,
    0x00, 0xA3, 0x1C, 0x06, 0x5A, 0x53, 0x6A, 0x00,
    0x00, 0x53, 0x8E, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x5F, 0x00, 0xA4, 0x03, 0x20, 0x94, 0x5F, 0x64,
    0x6E, 0x6E, 0x6F, 0x92, 0x99, 0x60, 0x5D, 0x21,
    0x63, 0x84, 0x60, 0xB2, 0x4D, 0x6E, 0x63, 0x63,
    0x62, 0x31, 0x5C, 0x57, 0x57, 0x18, 0xB7, 0x5F,
    0x02, 0x18, 0x1C, 0x9D, 0x4C, 0x62, 0x6C, 0x62,
    0x57, 0x6E, 0x55, 0x9A, 0x64, 0xA5, 0xB5, 0x04,
    0x18, 0x18, 0x2B, 0x48, 0x62, 0x62, 0x18, 0x18,
    0x63, 0x18, 0x64, 0x5D, 0x57, 0x64, 0x62, 0x80,
    0x26, 0x00, 0xA0, 0x4B, 0x6E, 0xA2, 0x5F, 0x00,
    0x14, 0xA1, 0x6E, 0x4B, 0x6C, 0x26, 0x20, 0x2F,
    0x20, 0x4B, 0x31, 0x5F, 0x18, 0x88, 0x5F, 0x18,
    0x00, 0xB2, 0x6E, 0x6C, 0x5F, 0x01, 0x01, 0x2F,
    0x5F, 0x14, 0x5F, 0x00, 0x20, 0x18, 0xA4, 0x01,
    0x01, 0x4B, 0x31, 0x31, 0x2F, 0x90, 0x4B, 0x01,
    0x4B, 0x01, 0x31, 0x6C, 0x2F, 0xB8, 0x01, 0x00,
    0x14, 0xBC, 0x00, 0x00, 0x20, 0x20, 0x01, 0x80,
    0x5F, 0x00, 0x00, 0xC0, 0x7E, 0x00, 0x71, 0xC8,
    0x00, 0x6D, 0x00, 0xF2, 0x00, 0x6D, 0x4F, 0x57,
    0xEA, 0x00, 0x03, 0x00, 0x00, 0x00, 0x26, 0x6D,
    0x5F, 0x00, 0x6D, 0x20, 0x21, 0x00, 0xAE, 0x22,
    0x08, 0x6D, 0xBA, 0xC8, 0x00, 0x21, 0x00, 0x9C,
    0x23, 0x00, 0x00, 0x73, 0x1C, 0x03, 0x10, 0xAE,
    0x0D, 0x97, 0x00, 0x24, 0x01, 0xDE, 0x06, 0x55,
    0x4B, 0xAE, 0x5E, 0x8F, 0x54, 0x28, 0xB7, 0x80,
    0x4F, 0x00, 0x00, 0x71, 0x00, 0x00, 0x6D, 0xF2,
    0x00, 0x00, 0x00, 0x6D, 0x00, 0x10, 0x20, 0x5A,
    0x6D, 0x00, 0xA2, 0x00, 0x00, 0x00, 0x86, 0xB5,
    0x54, 0x00, 0x4B, 0x6D, 0xBC, 0xF2, 0x6A, 0xC0,
    0x18, 0xC0, 0x00, 0x5F, 0x00, 0x7D, 0x00, 0x9F,
    0xEA, 0x00, 0x00, 0xBC, 0x8B, 0x7B, 0xE4, 0x00,
    0x5A, 0x1C, 0x00, 0x4D, 0x9F, 0x0D, 0x04, 0xC5,
    0x9F, 0x05, 0x20, 0xAE, 0x74, 0xE9, 0xA8, 0x80,
    0x4D, 0x00, 0x00, 0xC0, 0x91, 0x00, 0x71, 0x74,
    0x00, 0x58, 0x00, 0xCC, 0x00, 0x6D, 0x6D, 0x14,
    0xEA, 0xF8, 0xD3, 0x00, 0x00, 0x00, 0x2B, 0xC8,
    0x2C, 0x80, 0x10, 0xE3, 0x07, 0x2C, 0x29, 0x54,
    0x05, 0x6D, 0x9D, 0xF3, 0x6D, 0x2D, 0x00, 0x29,
    0x4F, 0x00, 0x00, 0x2C, 0x6D, 0x6D, 0xC8, 0xBD,
    0x5F, 0x6D, 0x74, 0x10, 0x23, 0x4B, 0x74, 0x4C,
    0x1C, 0x5F, 0x10, 0x9E, 0x0D, 0x40, 0x4D, 0x80,
    0x5F, 0x00, 0x00, 0xBA, 0x6D, 0x00, 0x31, 0x90,
    0x00, 0x92, 0x00, 0xAD, 0x00, 0x8B, 0x20, 0x4F,
    0x6D, 0x9E, 0x51, 0x00, 0x00, 0x00, 0x14, 0x34,
    0x1C, 0x00, 0x76, 0x04, 0x7F, 0xF2, 0x10, 0x08,
    0x44, 0x22, 0x7F, 0x48, 0x00, 0xEA, 0x00, 0x25,
    0x76, 0x00, 0x00, 0x86, 0xB1, 0x28, 0xB4, 0x0D,
    0x21, 0x2F, 0x00, 0x10, 0x92, 0x6D, 0x5F, 0x5F,
    0x14, 0x6D, 0x2B, 0x03, 0x0D, 0x2F, 0x5F, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80
};

