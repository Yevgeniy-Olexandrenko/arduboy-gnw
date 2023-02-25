// -----------------------------------------------------------------------------
// Controls configuration
// keys: cheat_b right_down right_up left_down left_up time game_b game_a alarm cheat_a acl
// size: 13 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_lion_controls[] PROGMEM =
{
    0x41, 0x42, 0x43, 0x44, 0x31, 0x32, 0x33, 0x34,
    0xFF, 0xFF, 0x06, 0x21, 0x10
};

// -----------------------------------------------------------------------------
// Segments rendering info
// size: 288 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_lion_segments[] PROGMEM =
{
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x50, 0x2D, 0xB7, 0x01, 0x4F, 0x36, 0x57, 0x00,
    0x60, 0x2D, 0x9C, 0x01, 0x61, 0x22, 0x00, 0x00,
    0x4E, 0x23, 0x81, 0x00, 0x57, 0x2C, 0x41, 0x00,
    0x57, 0x22, 0xB5, 0x00, 0x61, 0x18, 0x9F, 0x00,
    0x31, 0x2D, 0x65, 0x01, 0x37, 0x2D, 0xE1, 0x00,
    0x40, 0x2D, 0xB7, 0x01, 0x47, 0x2D, 0xE1, 0x00,
    0x31, 0x23, 0x65, 0x01, 0x37, 0x23, 0x14, 0x00,
    0x3F, 0x23, 0x14, 0x00, 0x47, 0x23, 0xE1, 0x00,
    0x16, 0x22, 0x8A, 0x01, 0x17, 0x2D, 0xCB, 0x00,
    0x21, 0x36, 0x57, 0x00, 0x28, 0x2D, 0xE1, 0x00,
    0x16, 0x18, 0x9F, 0x00, 0x1E, 0x22, 0x69, 0x00,
    0x1E, 0x2C, 0x72, 0x01, 0x29, 0x23, 0xEC, 0x00,
    0x32, 0x07, 0x0B, 0x01, 0x2B, 0x07, 0x13, 0x01,
    0x25, 0x08, 0xB0, 0x01, 0x21, 0x0B, 0x50, 0x01,
    0x29, 0x19, 0xB7, 0x01, 0x1E, 0x18, 0x69, 0x00,
    0x21, 0x07, 0xDB, 0x00, 0x12, 0x07, 0x2C, 0x01,
    0x4A, 0x08, 0x60, 0x01, 0x42, 0x08, 0x02, 0x01,
    0x42, 0x0C, 0x02, 0x01, 0x30, 0x07, 0x23, 0x00,
    0x48, 0x19, 0x65, 0x01, 0x40, 0x19, 0x14, 0x00,
    0x38, 0x19, 0x14, 0x00, 0x30, 0x19, 0x14, 0x00,
    0x52, 0x08, 0x27, 0x01, 0x52, 0x08, 0x4C, 0x01,
    0x51, 0x0B, 0x1C, 0x01, 0x52, 0x0B, 0x23, 0x01,
    0x56, 0x09, 0x9B, 0x00, 0x50, 0x08, 0xB1, 0x00,
    0x4F, 0x0B, 0xFE, 0x00, 0x50, 0x0E, 0x6D, 0x01,
    0x5D, 0x0A, 0x1F, 0x01, 0x5C, 0x08, 0x6D, 0x01,
    0x5C, 0x0B, 0x1C, 0x01, 0x5D, 0x0B, 0x23, 0x01,
    0x4E, 0x19, 0xE1, 0x00, 0x5A, 0x08, 0xB1, 0x00,
    0x5A, 0x0B, 0xB1, 0x00, 0x5A, 0x0E, 0x95, 0x00,
    0x64, 0x08, 0x27, 0x01, 0x64, 0x08, 0x4C, 0x01,
    0xFF, 0xFF, 0xFF, 0xFF, 0x64, 0x0B, 0x23, 0x01,
    0x57, 0x18, 0xB5, 0x00, 0x62, 0x08, 0xB1, 0x00,
    0x61, 0x0B, 0x1E, 0x00, 0x62, 0x0E, 0x6D, 0x01
};

// -----------------------------------------------------------------------------
// Graphics rendering info
// size: 256 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_lion_graphics[] PROGMEM =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x03,
    0xDE, 0x01, 0x00, 0x00, 0xAA, 0x03, 0xD4, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xCE, 0x02, 0xB0, 0x02,
    0xA6, 0x02, 0x00, 0x00, 0x50, 0x03, 0xF2, 0x01,
    0x1A, 0x02, 0x7E, 0x02, 0x10, 0x02, 0x8C, 0x03,
    0x6E, 0x03, 0x6A, 0x02, 0x4C, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00,
    0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x64, 0x03, 0x00, 0x00, 0x42, 0x02, 0x3C, 0x03,
    0xE8, 0x01, 0xEC, 0x02, 0x00, 0x00, 0x50, 0x03,
    0xF2, 0x01, 0x46, 0x03, 0xE2, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x28, 0x03, 0x9C, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x88, 0x02, 0x24, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x74, 0x02, 0x00, 0x00, 0x00, 0x00,
    0xC0, 0x01, 0xCA, 0x01, 0xFC, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x1E, 0x03, 0x00, 0x00, 0x56, 0x02,
    0x0A, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x32, 0x03, 0x92, 0x02,
    0xC4, 0x02, 0x60, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x38, 0x02, 0x38, 0x02,
    0x00, 0x00, 0xA0, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x78, 0x03, 0x2E, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xBA, 0x02, 0x82, 0x03, 0x5A, 0x03,
    0xF6, 0x02, 0x00, 0x00, 0xCE, 0x02, 0xB0, 0x02
};

// -----------------------------------------------------------------------------
// Sprites for rendering
// size: 948 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_lion_sprites[] PROGMEM =
{
    0x09, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x08,
    0x0F, 0x07, 0x07, 0x0E, 0x10, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, 0xFF, 0x7F,
    0x7F, 0x7F, 0x7F, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x0A, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x10,
    0x08, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0B, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x09, 0x10, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x08, 0x03,
    0x03, 0x03, 0x03, 0x02, 0x08, 0x33, 0x33, 0x08,
    0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x02, 0x08, 0x07, 0x07, 0x0A, 0x10, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x07, 0x10, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x04, 0x08, 0x0F, 0x0F, 0x0F,
    0x0F, 0x09, 0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x10, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x08,
    0x0F, 0x07, 0x07, 0x08, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x06, 0x08, 0x7F, 0x7F, 0x7F,
    0x7F, 0x7F, 0x7F, 0x07, 0x08, 0x7F, 0x7F, 0x7F,
    0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x08, 0x03, 0x02,
    0x08, 0x01, 0x01, 0x02, 0x08, 0x07, 0x1F, 0x03,
    0x08, 0x04, 0x04, 0x0F, 0x0F, 0x10, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x02, 0x08, 0x03, 0x03,
    0x07, 0x10, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0,
    0xF0, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x08, 0xF8, 0xFF, 0xFF, 0x06, 0x08, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x08, 0x03,
    0x03, 0x03, 0x0B, 0x10, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x02, 0x08, 0x10, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x09, 0x10, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x05, 0x08, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x07,
    0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x08, 0x08, 0x00, 0x00, 0x40, 0x40,
    0x40, 0xF8, 0x40, 0x50, 0x08, 0x08, 0x40, 0x40,
    0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
    0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
    0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00,
    0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x50, 0x10,
    0xFE, 0x10, 0x10, 0x10, 0x00, 0x00, 0x08, 0x08,
    0x02, 0x02, 0x02, 0x1F, 0x02, 0x02, 0x02, 0x00,
    0x08, 0x08, 0x40, 0xF8, 0x40, 0x40, 0x40, 0x00,
    0x00, 0x80, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x08, 0x08, 0x24, 0x24,
    0xFC, 0x3F, 0x24, 0x24, 0x04, 0x00, 0x08, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00,
    0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x07, 0x08, 0x08, 0x00, 0x03, 0x00, 0x00,
    0x04, 0x04, 0x04, 0x3F, 0x08, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x08, 0x08,
    0x00, 0x00, 0x20, 0x20, 0x20, 0xFC, 0x20, 0x20,
    0x08, 0x08, 0x88, 0x88, 0xF8, 0xFF, 0x88, 0x8B,
    0x08, 0x00, 0x08, 0x08, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x10,
    0x10, 0xFE, 0x10, 0x10, 0x10, 0x00, 0x08, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40,
    0x08, 0x08, 0x00, 0x02, 0x02, 0x02, 0x1F, 0x02,
    0x02, 0x22, 0x08, 0x08, 0x80, 0x80, 0x80, 0x00,
    0x80, 0x80, 0x80, 0xF0, 0x08, 0x08, 0x20, 0x20,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
    0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x08, 0x7F, 0x08, 0x08, 0x08,
    0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x80, 0x80, 0x08, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
    0x08, 0x08, 0x00, 0x20, 0x20, 0x20, 0xFC, 0x20,
    0x20, 0x20, 0x08, 0x08, 0x04, 0x3F, 0x04, 0x04,
    0x04, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00,
    0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
    0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x08, 0x08, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20,
    0x20, 0xFC, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x80, 0xF0, 0x08, 0x08, 0x04, 0x04,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04,
    0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x08, 0x7F,
    0x08, 0x08, 0x08, 0x08, 0x80, 0xF0, 0x80, 0x82,
    0x82, 0x02, 0x1F, 0x02, 0x08, 0x08, 0x00, 0x04,
    0x04, 0x04, 0x3F, 0x04, 0x04, 0x04, 0x08, 0x08,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x0F,
    0x08, 0x08, 0x20, 0x20, 0x20, 0xFC, 0x20, 0x20,
    0x20, 0x00, 0x08, 0x08, 0xF0, 0x80, 0x80, 0x81,
    0x00, 0x00, 0x80, 0x80, 0x08, 0x08, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x08, 0x08,
    0x00, 0x00, 0x00, 0x02, 0x02, 0xE2, 0x1F, 0x02,
    0x08, 0x08, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x40, 0x40, 0xF8
};

// -----------------------------------------------------------------------------
// Firmware dump
// file: LN-08.rom
// size: 1856 bytes
// -----------------------------------------------------------------------------

const uint8_t gnw_lion_firmware[] PROGMEM =
{
    0x00, 0x00, 0x5E, 0x78, 0x87, 0xDF, 0xBC, 0x80,
    0x4D, 0x7B, 0x3F, 0x54, 0x23, 0x71, 0x71, 0x4D,
    0xD7, 0x84, 0x6D, 0x4E, 0x95, 0x6A, 0x4D, 0x80,
    0x49, 0x80, 0x83, 0x66, 0x6D, 0x8F, 0x9C, 0x01,
    0xD7, 0xC0, 0x7A, 0x54, 0x54, 0xA2, 0x01, 0x06,
    0xA3, 0x54, 0x80, 0x4D, 0xE9, 0xDF, 0x77, 0x6D,
    0xBE, 0x80, 0xAB, 0x7D, 0xC8, 0xE9, 0x8C, 0x76,
    0x78, 0x80, 0x8E, 0x91, 0xC0, 0xC8, 0x27, 0x80,
    0xCB, 0x00, 0x00, 0xBC, 0x54, 0x00, 0xAB, 0x18,
    0x9C, 0x4E, 0x84, 0x5F, 0x64, 0x31, 0x45, 0xC8,
    0x4C, 0x70, 0xB8, 0x6D, 0xD6, 0x7A, 0x2F, 0x25,
    0x5F, 0x18, 0xB5, 0x5A, 0x7D, 0x10, 0x10, 0x5F,
    0x18, 0x5F, 0x80, 0x3F, 0x5F, 0x4A, 0x10, 0x97,
    0x18, 0x7C, 0x6D, 0x40, 0x16, 0x27, 0x80, 0x4A,
    0x64, 0x89, 0x4B, 0x4D, 0x3F, 0x64, 0x18, 0x18,
    0x10, 0x0E, 0xA4, 0x3F, 0x78, 0xA1, 0xC0, 0x80,
    0x18, 0x00, 0x00, 0xF5, 0x94, 0x00, 0x9A, 0xA5,
    0x75, 0x55, 0x80, 0xC3, 0x7A, 0x74, 0x74, 0x7A,
    0xA3, 0xD8, 0xB2, 0x75, 0x45, 0x77, 0x88, 0x55,
    0x55, 0x94, 0xD8, 0xD8, 0x31, 0xD8, 0x94, 0x95,
    0x39, 0x31, 0x7A, 0x31, 0xB0, 0x31, 0xD8, 0xD8,
    0x56, 0xAE, 0xF0, 0x94, 0x94, 0x75, 0x83, 0xCE,
    0xBC, 0x8B, 0x56, 0x74, 0x94, 0x7A, 0x7A, 0x3B,
    0xF0, 0xB0, 0x7A, 0x9C, 0x18, 0x56, 0x3F, 0x80,
    0x66, 0x00, 0x00, 0x31, 0x70, 0x00, 0xB7, 0x91,
    0x80, 0x0F, 0x00, 0xF0, 0x00, 0x02, 0x33, 0x55,
    0xE8, 0x74, 0x42, 0x00, 0x00, 0x00, 0x45, 0xB1,
    0x64, 0x00, 0x5F, 0x56, 0xAB, 0x9E, 0xCA, 0xB9,
    0x33, 0x8E, 0x9C, 0xC6, 0x00, 0xDF, 0x00, 0xA5,
    0xD5, 0x00, 0x00, 0x31, 0xC2, 0xA5, 0x40, 0xF1,
    0xBE, 0xD5, 0x00, 0x96, 0xC3, 0x83, 0xC5, 0xC2,
    0x41, 0x31, 0xD5, 0x6C, 0xB1, 0xD5, 0x31, 0x80,
    0x31, 0x00, 0x00, 0xC0, 0xC0, 0xA2, 0x7E, 0x02,
    0x40, 0x7E, 0x75, 0x8A, 0x56, 0xCA, 0x5F, 0x40,
    0xD5, 0xC2, 0xC5, 0x0C, 0x9D, 0xA5, 0x31, 0xB7,
    0xF1, 0xAA, 0xCE, 0x7C, 0x93, 0xAA, 0xAA, 0xCE,
    0xAB, 0xCE, 0xF5, 0x56, 0xD5, 0xF5, 0xAE, 0x55,
    0x64, 0x75, 0x73, 0x31, 0x0F, 0x80, 0x7C, 0xC2,
    0xCE, 0x9B, 0xE4, 0xAE, 0xC2, 0x96, 0xA9, 0x6C,
    0xC5, 0x41, 0xE4, 0xD5, 0x7E, 0xE4, 0xC0, 0x80,
    0x31, 0x00, 0x9D, 0xD5, 0xB7, 0x0F, 0x6C, 0x42,
    0xF5, 0x7C, 0xA5, 0xA5, 0xF5, 0xC2, 0x0F, 0x64,
    0x96, 0x80, 0x80, 0x64, 0xE4, 0x55, 0x73, 0xC5,
    0x96, 0xC0, 0xC3, 0x76, 0xBA, 0x45, 0x96, 0xC3,
    0xAE, 0xE4, 0x31, 0x0E, 0xCA, 0x7C, 0xD5, 0x54,
    0x55, 0xC2, 0x96, 0x7E, 0xDF, 0xA0, 0xC3, 0xD5,
    0xC3, 0xD7, 0x7E, 0x89, 0xA5, 0xC0, 0x67, 0xE8,
    0xCA, 0x6C, 0x0C, 0xD5, 0x7E, 0xE4, 0xC0, 0x80,
    0x66, 0x00, 0x00, 0x84, 0xEE, 0x00, 0x10, 0x25,
    0x1B, 0x10, 0x00, 0x5F, 0xAA, 0x02, 0x98, 0xA1,
    0x5B, 0x6B, 0x2A, 0x91, 0xAC, 0x84, 0x0F, 0x5F,
    0x5F, 0x53, 0x52, 0x84, 0x9F, 0x87, 0x36, 0x21,
    0x7B, 0x25, 0xC9, 0x53, 0x52, 0x42, 0x17, 0x1C,
    0x84, 0x77, 0x7C, 0x27, 0x14, 0xE8, 0xEE, 0x20,
    0xD6, 0x84, 0x02, 0x24, 0x22, 0x29, 0x57, 0x09,
    0x5F, 0x5B, 0x53, 0x10, 0x17, 0x18, 0x52, 0x80,
    0xDF, 0x00, 0x94, 0xF5, 0x3C, 0x3A, 0xC5, 0xB1,
    0x93, 0x0A, 0x9C, 0x26, 0x2B, 0xCE, 0x38, 0x9A,
    0xC3, 0x3E, 0x08, 0x24, 0xCB, 0x70, 0x37, 0x52,
    0x80, 0x3D, 0x0C, 0x18, 0xCE, 0x95, 0xE6, 0xC3,
    0x28, 0xC5, 0xA9, 0x95, 0x3B, 0x6C, 0x2A, 0x0D,
    0x52, 0x23, 0x10, 0x0E, 0x5F, 0x39, 0xCA, 0xCA,
    0x66, 0x76, 0x85, 0xF5, 0x0D, 0xBA, 0x16, 0xC5,
    0x64, 0xCA, 0xD7, 0xF5, 0xD3, 0xA8, 0x9E, 0x80,
    0x58, 0x92, 0x00, 0x90, 0x10, 0x00, 0x57, 0x43,
    0x1C, 0x31, 0x00, 0x66, 0x3B, 0x43, 0x0F, 0x0C,
    0x5F, 0xE0, 0x18, 0xD9, 0x00, 0x00, 0x10, 0x31,
    0x2E, 0x10, 0xAE, 0x06, 0x41, 0x4E, 0x42, 0x6E,
    0xB8, 0x9D, 0x37, 0x21, 0x18, 0x4F, 0xE0, 0x49,
    0x13, 0x00, 0x00, 0x96, 0x10, 0x8B, 0x18, 0x5F,
    0xE0, 0x14, 0x31, 0x0E, 0x55, 0x1C, 0x49, 0x03,
    0x43, 0x5F, 0x8B, 0x57, 0x18, 0xA7, 0x3F, 0x80,
    0x5F, 0xB2, 0x35, 0xE0, 0x52, 0x5F, 0x53, 0xE0,
    0x0D, 0x10, 0x00, 0x5F, 0x00, 0x22, 0x10, 0x64,
    0x54, 0x48, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x20,
    0x8B, 0xC1, 0xE0, 0x00, 0x53, 0x00, 0x04, 0x53,
    0x37, 0x6C, 0xA3, 0x0B, 0x47, 0x33, 0x00, 0x05,
    0xE0, 0x00, 0x00, 0x1C, 0x80, 0x00, 0x8D, 0xB9,
    0x18, 0x38, 0x67, 0xE0, 0x18, 0x0C, 0x00, 0x6C,
    0x31, 0x2A, 0x38, 0x54, 0x10, 0xE0, 0x23, 0x80,
    0x43, 0x80, 0x72, 0x27, 0x66, 0x07, 0x01, 0x20,
    0x3F, 0x00, 0x10, 0xF6, 0x4B, 0x26, 0xFA, 0x13,
    0xAE, 0x18, 0x00, 0x31, 0x54, 0x45, 0x6E, 0x04,
    0x43, 0x80, 0x6E, 0xF6, 0x0C, 0xF0, 0x5F, 0x3E,
    0x18, 0x01, 0x45, 0x10, 0x8C, 0x00, 0x18, 0x55,
    0x3E, 0x43, 0xC4, 0x3C, 0x55, 0x56, 0x5E, 0xB9,
    0x42, 0x6E, 0x73, 0x6E, 0x87, 0x8D, 0xAD, 0x3B,
    0x54, 0x4E, 0x55, 0x9E, 0xA8, 0xB9, 0x04, 0x80,
    0x56, 0x00, 0x00, 0x2F, 0x6C, 0x00, 0x2A, 0x9D,
    0x00, 0xA5, 0xBB, 0x20, 0x00, 0x2D, 0x33, 0x5F,
    0x10, 0x6E, 0x31, 0x00, 0x00, 0x00, 0x4F, 0x2E,
    0x46, 0x00, 0x25, 0x90, 0x5F, 0x01, 0x10, 0x6E,
    0xBE, 0x46, 0x8B, 0x6C, 0x00, 0x01, 0x00, 0x13,
    0x2F, 0x00, 0x00, 0x10, 0x18, 0x6E, 0x31, 0x07,
    0x06, 0xBA, 0x00, 0x55, 0x0B, 0x21, 0x31, 0x83,
    0x07, 0xB5, 0x20, 0x42, 0x8D, 0x20, 0x57, 0x80,
    0xF1, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x3F, 0x6C,
    0xB2, 0x00, 0xAC, 0x00, 0x6B, 0xC4, 0xC2, 0x0E,
    0xD7, 0x09, 0x00, 0x52, 0x17, 0x77, 0xA1, 0x0D,
    0xB6, 0xC9, 0x14, 0xDF, 0xF0, 0x67, 0x07, 0x05,
    0x0D, 0x10, 0x66, 0xD5, 0x95, 0x00, 0x1B, 0xDD,
    0xB6, 0x02, 0x8C, 0x4D, 0xCA, 0x71, 0x42, 0xB9,
    0x04, 0x50, 0xEE, 0x04, 0x5F, 0x2B, 0xF8, 0x40,
    0x19, 0x45, 0x14, 0x28, 0x21, 0x11, 0x14, 0x80,
    0xDF, 0x80, 0x70, 0x4A, 0x5F, 0x07, 0x66, 0xBB,
    0x3F, 0x82, 0xE8, 0x00, 0x7B, 0x06, 0x7E, 0x79,
    0x3D, 0x18, 0x84, 0x82, 0x04, 0x07, 0x38, 0x8E,
    0x77, 0xDF, 0x07, 0xC4, 0x28, 0x98, 0xB3, 0x18,
    0x43, 0x18, 0x42, 0x79, 0xA9, 0x3F, 0xDA, 0xE4,
    0xA3, 0xF6, 0x64, 0xF8, 0x80, 0x38, 0x53, 0x3D,
    0x18, 0xC5, 0x10, 0x70, 0x79, 0xC6, 0x00, 0x8F,
    0x5A, 0x9C, 0xCB, 0x79, 0x9C, 0xC0, 0x4A, 0x80,
    0x52, 0x00, 0x00, 0xCA, 0x70, 0x00, 0x6C, 0xC5,
    0x00, 0x0D, 0x00, 0x40, 0x00, 0xCA, 0xCA, 0xAB,
    0x0E, 0x00, 0x52, 0x00, 0x00, 0x00, 0xD5, 0x92,
    0x0C, 0x00, 0xC6, 0x84, 0xCA, 0x40, 0x57, 0x45,
    0xB8, 0x52, 0x9C, 0xDD, 0x00, 0xC5, 0x00, 0x5F,
    0x84, 0x00, 0x00, 0x56, 0x84, 0xDD, 0x64, 0x0F,
    0x6E, 0x52, 0x00, 0x02, 0x55, 0xB4, 0x54, 0x6E,
    0x4F, 0xC5, 0xB6, 0x66, 0x54, 0x4A, 0x6E, 0x80,
    0x00, 0x00, 0x00, 0x35, 0x70, 0x00, 0xA8, 0xBA,
    0x00, 0x03, 0x00, 0x14, 0x00, 0x3F, 0xA3, 0x1C,
    0x22, 0x00, 0x21, 0x00, 0x00, 0x00, 0x29, 0x01,
    0x36, 0x00, 0x6A, 0x0D, 0xFE, 0x3F, 0x5F, 0x3C,
    0x7F, 0x20, 0x80, 0xDF, 0x00, 0x0D, 0x00, 0xFE,
    0x21, 0x00, 0x00, 0x5F, 0x21, 0xEB, 0x2D, 0xFE,
    0x5F, 0x5F, 0x00, 0x5F, 0x10, 0x4B, 0x14, 0x5F,
    0x4C, 0x0C, 0x6A, 0x2C, 0xFE, 0xFE, 0x5F, 0x80,
    0x5F, 0x00, 0xF0, 0x5F, 0x5E, 0xFA, 0xD0, 0x11,
    0xE0, 0xE1, 0xFE, 0x5F, 0xDC, 0x6E, 0x5F, 0x63,
    0x6E, 0x6E, 0x6E, 0xDF, 0xD1, 0xF4, 0xD2, 0xD3,
    0x12, 0x6E, 0x01, 0x13, 0x6E, 0xF5, 0xB3, 0x4E,
    0x05, 0x04, 0x04, 0x6E, 0x52, 0x49, 0xD6, 0xB9,
    0x5F, 0xD8, 0xD7, 0xDD, 0x6E, 0x6E, 0xDE, 0x0C,
    0xEA, 0x5F, 0x6F, 0x62, 0x06, 0x5F, 0x5F, 0x6E,
    0x5F, 0x64, 0x6E, 0x18, 0x41, 0x57, 0xD9, 0x80,
    0x5F, 0xB6, 0xAB, 0x43, 0x1C, 0x00, 0xB7, 0x43,
    0x56, 0x20, 0x00, 0x00, 0x5F, 0x9C, 0xB8, 0x55,
    0xB4, 0x6E, 0x00, 0x57, 0x6F, 0x00, 0x6F, 0x6E,
    0x6F, 0x6F, 0x6E, 0x6E, 0x5F, 0x6F, 0x6F, 0x67,
    0x03, 0x55, 0x89, 0x18, 0x6E, 0x00, 0x03, 0x6E,
    0x6F, 0x6E, 0x00, 0x5F, 0x6E, 0x07, 0x32, 0x6E,
    0x6E, 0x3E, 0x06, 0x05, 0x56, 0x31, 0x57, 0x54,
    0x43, 0x6F, 0x6E, 0x6E, 0x66, 0x04, 0x55, 0x80,
    0x2B, 0xA9, 0x6E, 0x53, 0x00, 0x10, 0x10, 0x98,
    0x6F, 0x34, 0x20, 0x10, 0x28, 0x28, 0x3F, 0x3F,
    0x5A, 0x0C, 0x6E, 0x8A, 0x15, 0x00, 0x0C, 0x8A,
    0x5E, 0x5F, 0x24, 0x28, 0x3F, 0x18, 0x97, 0x3F,
    0x01, 0xA4, 0x10, 0x39, 0x5E, 0x53, 0x89, 0x9A,
    0xBA, 0x5F, 0x6E, 0x21, 0x04, 0x10, 0x8D, 0xAB,
    0x4A, 0x6E, 0x04, 0x3D, 0x6E, 0x22, 0x5F, 0x3F,
    0x6A, 0x97, 0x43, 0xB5, 0x3F, 0x3F, 0x8A, 0x80,
    0x57, 0x6E, 0x07, 0xBE, 0x54, 0x5F, 0x0E, 0xAD,
    0x99, 0xA7, 0xAE, 0x05, 0xBE, 0xBE, 0x55, 0x07,
    0xBA, 0x52, 0x0D, 0xAA, 0xA7, 0xA7, 0x92, 0xA1,
    0x05, 0x0C, 0x06, 0xBE, 0xA7, 0xA7, 0xB9, 0x20,
    0xBD, 0x52, 0xA6, 0x52, 0x04, 0xA7, 0x52, 0x66,
    0x06, 0x04, 0x0C, 0x52, 0xBE, 0x52, 0x56, 0x6E,
    0x52, 0xB6, 0xBE, 0x6E, 0xA7, 0x86, 0x0D, 0x0F,
    0xB7, 0x0F, 0x0E, 0xBE, 0x07, 0x52, 0x67, 0x80,
    0x57, 0x00, 0x00, 0x4C, 0x5A, 0x00, 0x10, 0x94,
    0x00, 0x10, 0x80, 0x22, 0x9B, 0x83, 0x55, 0x54,
    0x95, 0x65, 0x43, 0x0F, 0x75, 0x75, 0x24, 0x86,
    0x3E, 0x77, 0x06, 0x96, 0x10, 0xF6, 0x43, 0xA6,
    0xBE, 0x3F, 0x99, 0x3F, 0x58, 0x21, 0x4C, 0x83,
    0x0E, 0xF8, 0x97, 0x10, 0x8B, 0x28, 0x54, 0x4C,
    0x04, 0xA5, 0x00, 0xCC, 0xD7, 0x07, 0x3D, 0xD4,
    0x05, 0x83, 0xA3, 0x94, 0x06, 0xDF, 0x53, 0x80,
    0x06, 0x00, 0x00, 0x57, 0x91, 0x00, 0x43, 0x06,
    0x00, 0x37, 0xBD, 0x53, 0x0E, 0x99, 0x07, 0xB9,
    0xBD, 0x36, 0x0B, 0x19, 0x0E, 0x0C, 0x0B, 0x48,
    0xBD, 0xF6, 0x51, 0x0B, 0x70, 0x19, 0xD4, 0x14,
    0x4E, 0xA8, 0x99, 0x48, 0x0B, 0xBD, 0x07, 0x76,
    0xF6, 0x0F, 0x42, 0xD3, 0xEB, 0x34, 0xBD, 0xBE,
    0xE9, 0x56, 0xB6, 0x80, 0x06, 0xBD, 0x18, 0x4D,
    0x97, 0x6D, 0x07, 0xF0, 0xC9, 0x4E, 0x20, 0x80,
    0xDD, 0x97, 0x75, 0x55, 0x77, 0x80, 0xB4, 0xC3,
    0x56, 0x6D, 0x74, 0x14, 0x94, 0xD7, 0x0D, 0x54,
    0x41, 0x4E, 0x0D, 0x55, 0x6A, 0x10, 0x24, 0x06,
    0xF5, 0xD7, 0xB4, 0x0E, 0x10, 0x19, 0x11, 0x4D,
    0xFE, 0x98, 0xAC, 0x0D, 0x99, 0x64, 0xF6, 0x8D,
    0x0D, 0x82, 0xD6, 0x4E, 0x26, 0x40, 0x49, 0x21,
    0x45, 0xAD, 0x94, 0x64, 0xCE, 0x06, 0x15, 0x10,
    0xFE, 0x2E, 0x0E, 0x42, 0xDF, 0x20, 0x0E, 0x80,
    0x4E, 0x00, 0x00, 0x0E, 0x00, 0x97, 0x52, 0x06,
    0x8C, 0x38, 0x75, 0x48, 0x57, 0x07, 0x07, 0x56,
    0x80, 0x53, 0xA2, 0x48, 0x0E, 0x0F, 0x38, 0xA1,
    0x00, 0x8A, 0x06, 0x38, 0x7C, 0xC6, 0x67, 0x55,
    0xE6, 0x79, 0x43, 0x7B, 0x54, 0x0D, 0xAA, 0x66,
    0xE8, 0xE9, 0x4E, 0x06, 0x00, 0x89, 0xD6, 0xA1,
    0xA8, 0x80, 0x8C, 0xCC, 0xE9, 0x19, 0x00, 0xCC,
    0xD7, 0xAB, 0xA3, 0xA1, 0xBD, 0x48, 0xF6, 0x80,
    0xEA, 0x00, 0x00, 0xF6, 0xFB, 0x00, 0xA3, 0xAC,
    0x54, 0xFB, 0xA8, 0x60, 0x68, 0x54, 0x64, 0x60,
    0x04, 0xFB, 0xFB, 0x19, 0x64, 0x77, 0x5C, 0x57,
    0xFB, 0xA6, 0x42, 0x64, 0xFB, 0x62, 0x0E, 0xB7,
    0x8F, 0x18, 0xFB, 0xF6, 0x8C, 0x40, 0x19, 0x41,
    0x10, 0x5D, 0x88, 0xA3, 0x18, 0xAC, 0xE8, 0x8F,
    0xD6, 0xFB, 0x69, 0xFB, 0xFD, 0x5F, 0x5D, 0x0F,
    0x54, 0xFB, 0x18, 0x0E, 0x8F, 0xE8, 0xCC, 0x80,
    0xEA, 0x00, 0x00, 0x2B, 0x80, 0x00, 0x89, 0x28,
    0x00, 0x78, 0x00, 0x9D, 0x00, 0x53, 0x50, 0xC0,
    0x27, 0x00, 0xED, 0x00, 0x00, 0x00, 0x5B, 0x17,
    0x00, 0x00, 0x20, 0x00, 0x1B, 0x1A, 0xEE, 0x7A,
    0xBC, 0x14, 0x00, 0x0B, 0x00, 0x7A, 0x00, 0x1A,
    0x5B, 0x00, 0x00, 0xB3, 0x0B, 0x26, 0x6B, 0x8D,
    0x7A, 0x3E, 0x00, 0x52, 0x9A, 0xC9, 0x16, 0x4E,
    0x80, 0x02, 0x89, 0x56, 0x57, 0xB5, 0xB7, 0x80,
    0x31, 0x00, 0x00, 0xEB, 0x14, 0x6E, 0x0C, 0x16,
    0xA6, 0x5F, 0x10, 0x66, 0x06, 0xC0, 0x64, 0x51,
    0xED, 0x0E, 0xA4, 0x52, 0x18, 0x2F, 0x54, 0x8F,
    0x89, 0x0D, 0x9F, 0xBA, 0x2F, 0x64, 0x40, 0xC0,
    0x9E, 0x7A, 0x05, 0xAC, 0x5F, 0x57, 0x04, 0x20,
    0x5F, 0x0C, 0x50, 0xE8, 0x6C, 0x67, 0x15, 0x0C,
    0xD6, 0x79, 0x14, 0x2F, 0x33, 0x07, 0x6C, 0x47,
    0x54, 0x11, 0x1A, 0x79, 0x9F, 0x9D, 0x8D, 0x80,
    0xC9, 0x00, 0x00, 0x90, 0xA4, 0x00, 0x56, 0x4D,
    0x88, 0xD7, 0x00, 0x89, 0x7C, 0xDF, 0x8C, 0x7D,
    0xF6, 0x70, 0x97, 0x00, 0x00, 0x00, 0x55, 0xAD,
    0xCA, 0x83, 0x10, 0x8C, 0xC4, 0xD6, 0x6D, 0xD7,
    0x18, 0xBA, 0x6D, 0x66, 0x6D, 0x75, 0x80, 0x9B,
    0x55, 0x00, 0x00, 0x3F, 0xD5, 0x48, 0x53, 0xAD,
    0x35, 0xC2, 0x70, 0x5F, 0x87, 0x00, 0x52, 0xE8,
    0x9F, 0x1C, 0x7C, 0x57, 0x14, 0xB3, 0xA0, 0x80,
    0x66, 0x00, 0x00, 0x04, 0x0F, 0x00, 0x1C, 0xEA,
    0x6E, 0x06, 0x00, 0x13, 0x07, 0x20, 0x04, 0xD5,
    0x6C, 0x06, 0xA4, 0x0E, 0x00, 0x00, 0x5F, 0xBD,
    0xF0, 0x0E, 0xC3, 0x7B, 0x55, 0x64, 0xCA, 0xF6,
    0x41, 0x05, 0x19, 0xAC, 0x57, 0x56, 0x19, 0xE4,
    0xFE, 0x6E, 0x00, 0xF1, 0x76, 0xAD, 0xAB, 0x55,
    0xC5, 0x4D, 0x6E, 0x9B, 0xE8, 0xFE, 0x8D, 0xAB,
    0xC2, 0xF6, 0x04, 0xA0, 0xE4, 0xF1, 0xBD, 0x80
};

