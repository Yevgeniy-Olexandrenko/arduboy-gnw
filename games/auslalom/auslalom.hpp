// -----------------------------------------------------------------------------
// Controls configuration
// keys: right_down right_up left_down left_up time game_b game_a alarm acl
// size: 13 bytes
// -----------------------------------------------------------------------------

const uint8_t auslalom_controls[] PROGMEM =
{
    0x41, 0x42, 0x43, 0x44, 0x31, 0x32, 0x33, 0x34,
    0xFF, 0xFF, 0xFF, 0xFF, 0x10
};

// -----------------------------------------------------------------------------
// Segments rendering info
// size: 288 bytes
// -----------------------------------------------------------------------------

const uint8_t auslalom_segments[] PROGMEM =
{
    0x3A, 0x18, 0x79, 0x01, 0x62, 0x18, 0x05, 0x03,
    0x52, 0x0A, 0x18, 0x01, 0x68, 0x0A, 0x21, 0x03,
    0x45, 0x12, 0x93, 0x01, 0x65, 0x12, 0xAD, 0x00,
    0x5B, 0x06, 0xED, 0x01, 0x6A, 0x06, 0xE1, 0x01,
    0x46, 0x2D, 0xB8, 0x02, 0x20, 0x28, 0x02, 0x01,
    0x5C, 0x27, 0xA1, 0x01, 0x5E, 0x34, 0x18, 0x03,
    0x43, 0x33, 0x0B, 0x00, 0x2D, 0x22, 0xBB, 0x01,
    0x5F, 0x20, 0x8B, 0x01, 0x66, 0x34, 0x18, 0x03,
    0xFF, 0xFF, 0xFF, 0xFF, 0x13, 0x15, 0x8F, 0x00,
    0x18, 0x2D, 0xCC, 0x00, 0x30, 0x2D, 0x05, 0x02,
    0xFF, 0xFF, 0xFF, 0xFF, 0x24, 0x09, 0x87, 0x01,
    0x18, 0x33, 0x33, 0x02, 0x30, 0x33, 0x47, 0x01,
    0x13, 0x07, 0xC0, 0x00, 0x1E, 0x08, 0x6F, 0x00,
    0x1C, 0x07, 0x65, 0x02, 0x1B, 0x08, 0xFE, 0x00,
    0x1C, 0x0F, 0xB1, 0x01, 0x1E, 0x0C, 0xE1, 0x01,
    0x1C, 0x0B, 0x0C, 0x03, 0x1A, 0x0B, 0xB4, 0x02,
    0x17, 0x08, 0x39, 0x00, 0x2E, 0x08, 0x6F, 0x00,
    0x2B, 0x07, 0xB5, 0x01, 0x2A, 0x08, 0xFE, 0x00,
    0x2A, 0x0F, 0x73, 0x01, 0x2D, 0x0C, 0xE1, 0x01,
    0x2C, 0x0B, 0xB1, 0x01, 0x2A, 0x0B, 0xB4, 0x02,
    0x16, 0x0C, 0xE1, 0x01, 0x36, 0x09, 0x9E, 0x01,
    0x33, 0x07, 0xB5, 0x01, 0x32, 0x08, 0xFE, 0x00,
    0x32, 0x0F, 0x73, 0x01, 0x35, 0x0C, 0xE1, 0x01,
    0x34, 0x0B, 0xB1, 0x01, 0x32, 0x0B, 0xB4, 0x02,
    0x4F, 0x28, 0xF6, 0x02, 0x3F, 0x28, 0x3C, 0x00,
    0x30, 0x28, 0xF4, 0x01, 0x12, 0x1F, 0x6A, 0x02,
    0x53, 0x22, 0xB3, 0x00, 0x45, 0x22, 0xD2, 0x01,
    0x38, 0x22, 0xD2, 0x01, 0x22, 0x19, 0x73, 0x00,
    0x59, 0x19, 0x22, 0x01, 0x4F, 0x19, 0xA1, 0x00,
    0x45, 0x19, 0xE9, 0x02, 0x33, 0x12, 0x2D, 0x01,
    0x5D, 0x13, 0x4C, 0x00, 0x55, 0x13, 0xC8, 0x01,
    0x4D, 0x13, 0x55, 0x00, 0x3F, 0x0D, 0x9C, 0x02,
    0x63, 0x0B, 0xE2, 0x02, 0x5E, 0x0B, 0xE2, 0x02,
    0x59, 0x0B, 0xE5, 0x01, 0x4D, 0x07, 0x00, 0x00,
    0x66, 0x06, 0x13, 0x01, 0x63, 0x06, 0x60, 0x00,
    0x5F, 0x06, 0x11, 0x03, 0x56, 0x04, 0x66, 0x00
};

// -----------------------------------------------------------------------------
// Graphics rendering info
// size: 256 bytes
// -----------------------------------------------------------------------------

const uint8_t auslalom_graphics[] PROGMEM =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDE, 0x03,
    0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xEE, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x5E, 0x03, 0xB6, 0x03,
    0x00, 0x00, 0xF6, 0x03, 0x4E, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x86, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x04,
    0x46, 0x03, 0x8E, 0x03, 0x00, 0x00, 0x9E, 0x03,
    0x26, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC6, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xE6, 0x03, 0xBE, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x6E, 0x03, 0x4E, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x66, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x56, 0x04, 0x26, 0x03, 0x00, 0x00, 0x6E, 0x03,
    0x00, 0x00, 0x5E, 0x04, 0x56, 0x03, 0x00, 0x00,
    0x3E, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x16, 0x04, 0x36, 0x04, 0x96, 0x03,
    0x00, 0x00, 0x3E, 0x03, 0x76, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x03,
    0x76, 0x04, 0x7E, 0x03, 0xAE, 0x03, 0x36, 0x03,
    0x00, 0x00, 0x2E, 0x04, 0x2E, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA6, 0x03,
    0x6E, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x04,
    0x00, 0x00, 0x46, 0x04, 0xD6, 0x03, 0xCE, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x03
};

// -----------------------------------------------------------------------------
// Tiles for rendering
// size: 1150 bytes
// -----------------------------------------------------------------------------

const uint8_t auslalom_gfxtiles[] PROGMEM =
{
    0x09, 0x08, 0x78, 0x78, 0x7C, 0x3C, 0x1C, 0x1E,
    0x0E, 0x0F, 0x0F, 0x16, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0x07, 0x07, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x08, 0x07, 0x0E, 0x08, 0x0C, 0x0C,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x03, 0x07, 0x08, 0x04, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x09, 0x08, 0x06,
    0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03,
    0x04, 0x08, 0x04, 0x07, 0x07, 0x03, 0x07, 0x08,
    0x1C, 0x1C, 0x0C, 0x0E, 0x06, 0x07, 0x07, 0x02,
    0x08, 0x06, 0x07, 0x0D, 0x10, 0xE0, 0xE0, 0xE0,
    0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE,
    0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x0F, 0x0F, 0x0F,
    0x07, 0x07, 0x07, 0x01, 0x01, 0x00, 0x00, 0x08,
    0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x0A, 0x08, 0x0C, 0x0C, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x03, 0x03, 0x04, 0x08, 0x3F,
    0x3F, 0x3F, 0x3F, 0x0B, 0x08, 0x0C, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x03,
    0x05, 0x10, 0xF0, 0xF3, 0x13, 0x13, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x18, 0x10, 0xFE, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x3E, 0x02, 0x08,
    0x07, 0x07, 0x0F, 0x08, 0x1E, 0x1E, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x03, 0x08, 0x04, 0x07, 0x07,
    0x08, 0x08, 0x1C, 0x1E, 0x1E, 0x1E, 0x1F, 0x1F,
    0x1F, 0x13, 0x09, 0x08, 0x0C, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x0F, 0x03, 0x0C, 0x10, 0xF0,
    0xF0, 0xF8, 0xF8, 0xF8, 0xFC, 0xFC, 0xFE, 0x7E,
    0x7F, 0x3F, 0x3F, 0x07, 0x07, 0x07, 0x03, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03,
    0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x08, 0x02, 0x02, 0x03,
    0x02, 0x0C, 0x08, 0x3C, 0x3E, 0x3E, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x27, 0x02,
    0x08, 0x1B, 0x1B, 0x06, 0x08, 0x7F, 0x7F, 0x7F,
    0x7F, 0x7F, 0x7F, 0x09, 0x08, 0x3C, 0x3E, 0x3E,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x33, 0x01, 0x08,
    0x03, 0x07, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x02, 0x08, 0x01, 0x01, 0x04, 0x08, 0x01,
    0x03, 0x03, 0x03, 0x0B, 0x08, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x08, 0x08, 0x04, 0x04, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x03, 0x0D, 0x08, 0x0C, 0x0C, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x03,
    0x03, 0x02, 0x08, 0x0F, 0x0F, 0x06, 0x08, 0x06,
    0x06, 0x07, 0x07, 0x07, 0x01, 0x05, 0x08, 0x06,
    0x06, 0x07, 0x07, 0x01, 0x0F, 0x08, 0x0C, 0x0C,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x03, 0x03, 0x16, 0x10, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x3F, 0x3F, 0x3F, 0x3F, 0xFF, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x3E,
    0x3E, 0x3E, 0x3F, 0x18, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x07, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x08, 0x01,
    0x03, 0x03, 0x10, 0x18, 0xC0, 0xC0, 0xC0, 0xF0,
    0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xFE, 0xFE, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F,
    0x7F, 0x7F, 0x7F, 0x1F, 0x1F, 0x1F, 0x07, 0x07,
    0x07, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0B, 0x10, 0xF0, 0xF0,
    0xF8, 0xF8, 0xFC, 0x7C, 0x7E, 0x3E, 0x3F, 0x1F,
    0x1F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x1F, 0x1F,
    0x14, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0xFF, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x3E, 0x3E,
    0x3E, 0x3F, 0x05, 0x08, 0x06, 0x07, 0x07, 0x07,
    0x01, 0x0B, 0x08, 0x0C, 0x0C, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x03, 0x03, 0x03, 0x0D, 0x08,
    0x0C, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0x0F, 0x0F, 0x03, 0x05, 0x08, 0x3F,
    0x3F, 0x3F, 0x3F, 0x3F, 0x03, 0x08, 0x01, 0x01,
    0x01, 0x05, 0x08, 0x06, 0x06, 0x07, 0x07, 0x03,
    0x07, 0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0x03, 0x08, 0x1F, 0x1F, 0x1F, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
    0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x01, 0x01, 0x01, 0x0F, 0x02, 0x02,
    0x82, 0x9F, 0x92, 0xF2, 0xFE, 0x90, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x08, 0x7F,
    0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x44, 0x40,
    0xF8, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x7F, 0x88, 0x88, 0x00, 0x00,
    0x00, 0x40, 0x40, 0x40, 0xF8, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x90, 0x90,
    0x83, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x30, 0xFE,
    0x30, 0xFC, 0x30, 0x20, 0x20, 0x00, 0x20, 0xFC,
    0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x04, 0x04, 0x3F, 0x04, 0x04, 0xE4, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x17, 0x10, 0x10, 0xFE, 0x10, 0x10, 0x88, 0xF0,
    0x80, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F,
    0x81, 0x81, 0x81, 0xF0, 0x80, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x0A, 0x0A, 0x1F, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
    0x10, 0x10, 0xFE, 0x10, 0x10, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x01,
    0x01, 0x01, 0x0F, 0x01, 0x01, 0x03, 0x7F, 0x0A,
    0x0A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0x01, 0x01, 0x0F, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x80, 0x80, 0xF0, 0x00, 0x00,
    0x00, 0x00, 0xE0, 0x40, 0x40, 0xF8, 0x40, 0x40,
    0xF8, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x80, 0x80,
    0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x04,
    0x04, 0x04, 0x3F, 0x04, 0x04, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x00, 0x00,
    0x04, 0xC4, 0x04, 0x3F, 0x04, 0x44, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
    0x08, 0x08, 0x7F, 0x08, 0x08, 0x08, 0x40, 0x40,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// -----------------------------------------------------------------------------
// Firmware dump
// file: IM-23.rom
// size: 1856 bytes
// -----------------------------------------------------------------------------

const uint8_t auslalom_firmware[] PROGMEM =
{
    0x70, 0x00, 0x00, 0xAB, 0x76, 0x00, 0x7D, 0x91,
    0x80, 0x91, 0x00, 0x84, 0x07, 0x05, 0x55, 0xC1,
    0xE4, 0xE4, 0xC0, 0x06, 0x01, 0x00, 0xF2, 0x05,
    0x5E, 0x47, 0x6C, 0x38, 0xBA, 0x47, 0x91, 0xB7,
    0x58, 0x76, 0xE4, 0x71, 0x4F, 0x74, 0x6C, 0xF2,
    0x9D, 0x23, 0x5E, 0x06, 0x04, 0x98, 0x47, 0x91,
    0x8F, 0xC0, 0x06, 0xA1, 0x74, 0x07, 0x00, 0x79,
    0xE2, 0x71, 0xC0, 0xC0, 0xAE, 0x84, 0xF2, 0x80,
    0x20, 0x00, 0xBB, 0x31, 0x9B, 0x7E, 0x00, 0x05,
    0x57, 0xE6, 0xC0, 0x0D, 0x52, 0x00, 0x4B, 0xB9,
    0x64, 0x4F, 0x07, 0x0F, 0x71, 0x78, 0x80, 0x9A,
    0xC9, 0x0C, 0x00, 0x6D, 0x01, 0x8B, 0x08, 0x3C,
    0x01, 0x9C, 0x66, 0xC5, 0x67, 0x4F, 0x19, 0x40,
    0x9C, 0x6E, 0xE2, 0x00, 0x00, 0x76, 0x52, 0x80,
    0x21, 0x79, 0x5F, 0x67, 0x6E, 0x00, 0x00, 0xB4,
    0x01, 0x20, 0xE4, 0x66, 0x5E, 0x5F, 0x04, 0x80,
    0x5F, 0x00, 0x00, 0x4B, 0x70, 0x00, 0xE4, 0xFC,
    0x7A, 0x91, 0x00, 0x20, 0x72, 0x76, 0xA2, 0xB8,
    0x87, 0x6D, 0xE4, 0x00, 0x00, 0x00, 0x93, 0xFC,
    0xC4, 0xEA, 0xC5, 0x6D, 0x9A, 0x7C, 0x6C, 0x00,
    0x0C, 0x54, 0xB4, 0x5F, 0x80, 0x10, 0x83, 0x6E,
    0xE4, 0x00, 0x00, 0x7A, 0x9B, 0x74, 0xD3, 0x00,
    0x20, 0x4A, 0x77, 0x79, 0xAB, 0xB9, 0xA8, 0x00,
    0x01, 0xC0, 0x6D, 0x31, 0x00, 0xB8, 0x00, 0x80,
    0x23, 0x95, 0x77, 0x5F, 0x00, 0x8E, 0x25, 0x1C,
    0x00, 0x84, 0x1C, 0x92, 0x31, 0x24, 0x01, 0xCD,
    0x14, 0x00, 0x31, 0x64, 0x31, 0x6E, 0x31, 0x82,
    0xB6, 0x18, 0x23, 0x96, 0xC6, 0x20, 0x73, 0xF5,
    0x25, 0x44, 0x00, 0x18, 0x00, 0xA4, 0x8E, 0x73,
    0x20, 0x18, 0x95, 0xBE, 0xB2, 0xB2, 0xF5, 0x73,
    0x5F, 0x3B, 0x64, 0xF5, 0x64, 0x21, 0x31, 0xDA,
    0x3C, 0x73, 0x1C, 0x73, 0x10, 0xF5, 0x73, 0x80,
    0x47, 0xBB, 0xA9, 0x90, 0x27, 0xE0, 0x31, 0x31,
    0x20, 0x2D, 0xDA, 0x31, 0x5F, 0x91, 0x84, 0x02,
    0x31, 0x2F, 0x22, 0xD0, 0x44, 0x53, 0x89, 0xB5,
    0x31, 0x9E, 0x86, 0x31, 0x88, 0x87, 0x52, 0x4B,
    0x54, 0x92, 0x26, 0x98, 0x6B, 0x2B, 0x25, 0x1A,
    0xBA, 0x5F, 0x2B, 0x84, 0x9B, 0x8B, 0x32, 0x0E,
    0x9F, 0xA2, 0x16, 0x35, 0x91, 0x31, 0x84, 0x66,
    0x5F, 0xAE, 0x31, 0x5F, 0x14, 0x25, 0x0D, 0x80,
    0x52, 0x00, 0x84, 0x31, 0x18, 0x40, 0xB1, 0x22,
    0x5F, 0x00, 0x5F, 0x24, 0x0C, 0x83, 0x2E, 0x31,
    0xA3, 0x93, 0xC2, 0x31, 0x5F, 0xB2, 0x5F, 0x31,
    0x2C, 0x64, 0x31, 0x17, 0x97, 0x31, 0x8E, 0x32,
    0x02, 0xA8, 0x3E, 0x26, 0x15, 0x52, 0xE0, 0xB9,
    0x31, 0xA6, 0x16, 0x9A, 0x20, 0x80, 0x98, 0xBB,
    0x1B, 0x2A, 0x0C, 0xA3, 0x9D, 0x98, 0x6B, 0x8E,
    0x35, 0x31, 0xA3, 0x31, 0x9F, 0x8F, 0xAC, 0x80,
    0x47, 0x99, 0x0B, 0x14, 0x63, 0x00, 0x5F, 0x4D,
    0xF0, 0x91, 0x3C, 0x64, 0x0B, 0x8E, 0x66, 0x53,
    0x5E, 0x62, 0x57, 0x0B, 0x95, 0x0B, 0x62, 0x9A,
    0x18, 0x18, 0x55, 0x63, 0x47, 0x05, 0x19, 0x06,
    0x57, 0x0D, 0x88, 0x52, 0x5F, 0x18, 0x34, 0xAB,
    0x04, 0x14, 0xF9, 0x47, 0x57, 0x8B, 0x0D, 0x54,
    0xBC, 0x19, 0x40, 0x64, 0x38, 0x05, 0x96, 0x8E,
    0x8E, 0x9E, 0x8E, 0x5F, 0x56, 0x24, 0x9A, 0x80,
    0x5F, 0x00, 0x00, 0x52, 0x06, 0xA9, 0x15, 0x64,
    0x44, 0x4B, 0x7B, 0xE7, 0x2B, 0x5F, 0x62, 0x56,
    0x18, 0x5F, 0x00, 0x27, 0xA4, 0x6D, 0x5C, 0x5F,
    0x5B, 0xAA, 0xBC, 0x6E, 0x0D, 0x87, 0x4B, 0xBB,
    0x14, 0x19, 0x67, 0x00, 0x20, 0x00, 0x14, 0x97,
    0x57, 0x5B, 0xC1, 0x04, 0x90, 0x67, 0x9A, 0x63,
    0x52, 0x2B, 0x53, 0x5F, 0x8E, 0x05, 0x52, 0xBD,
    0x9E, 0x04, 0x63, 0x62, 0x18, 0x8D, 0x57, 0x80,
    0x4E, 0xAD, 0x00, 0x2F, 0x32, 0x00, 0x01, 0x20,
    0x19, 0x94, 0x00, 0x0E, 0x1C, 0x5F, 0x42, 0x14,
    0x10, 0x0F, 0x0E, 0x19, 0x6E, 0x00, 0x84, 0x5F,
    0x10, 0x5F, 0xA7, 0xBA, 0x53, 0x5F, 0x5F, 0x0C,
    0x22, 0x08, 0x99, 0x14, 0x0F, 0x19, 0x0C, 0x0F,
    0x2F, 0x0C, 0x00, 0x14, 0xF4, 0x3C, 0x6E, 0xAE,
    0x53, 0x21, 0x94, 0xBC, 0x53, 0x0E, 0x7C, 0x21,
    0xB7, 0x20, 0xAC, 0x53, 0x5F, 0xB9, 0x1C, 0x80,
    0x2B, 0x00, 0xC1, 0xAF, 0x1C, 0x14, 0xA1, 0xAF,
    0x04, 0x5F, 0x5F, 0x89, 0x07, 0x5B, 0x5B, 0x0B,
    0x5F, 0x19, 0x05, 0x06, 0x5F, 0x18, 0x55, 0x18,
    0x56, 0x06, 0x28, 0x0D, 0x5F, 0x21, 0x0F, 0x07,
    0x01, 0x0B, 0x04, 0x5F, 0x5F, 0x0C, 0x19, 0x24,
    0x4B, 0x07, 0x4B, 0x08, 0x96, 0x89, 0x4B, 0x6F,
    0x4B, 0x4B, 0x14, 0x5B, 0x10, 0x0B, 0x06, 0x57,
    0x6A, 0x9D, 0x89, 0x9E, 0x5A, 0xAF, 0xB7, 0x80,
    0x58, 0x80, 0xC0, 0x09, 0x71, 0x71, 0x0A, 0x2B,
    0x6D, 0xE6, 0xB3, 0x99, 0xE4, 0x19, 0x47, 0x5F,
    0xE9, 0x00, 0xD5, 0x83, 0x74, 0x72, 0xC4, 0x53,
    0x71, 0x76, 0x01, 0x3C, 0x40, 0x5F, 0xE4, 0x72,
    0xB8, 0x95, 0x94, 0x53, 0x7C, 0x4E, 0x72, 0x03,
    0x4B, 0x6D, 0x97, 0x86, 0xFB, 0xCF, 0x19, 0xC0,
    0x80, 0x88, 0xA6, 0xD5, 0x54, 0x5F, 0x5F, 0x79,
    0xC1, 0xC2, 0xA9, 0xC9, 0xF5, 0x76, 0x85, 0x80,
    0xC0, 0x80, 0x7A, 0x5F, 0x58, 0xE4, 0xB5, 0x40,
    0xC1, 0xFB, 0x76, 0xE4, 0x4B, 0xD1, 0x98, 0xAF,
    0xD4, 0x84, 0x71, 0x1C, 0xF9, 0xCA, 0x76, 0x76,
    0xE6, 0x5F, 0xC1, 0x78, 0x71, 0x53, 0x6C, 0x23,
    0xBE, 0x43, 0x88, 0x21, 0xF5, 0xF9, 0x21, 0xE6,
    0xE9, 0xD5, 0xF6, 0xE4, 0x71, 0xC0, 0xFB, 0x18,
    0x5F, 0x10, 0x84, 0x71, 0x4E, 0x58, 0xE2, 0x02,
    0x33, 0xE2, 0x20, 0x10, 0xAF, 0x6B, 0x5F, 0x80,
    0xE6, 0x80, 0x7B, 0x43, 0x98, 0x98, 0x5F, 0x9B,
    0x43, 0xA2, 0x53, 0x95, 0x3A, 0xD4, 0xD1, 0xD5,
    0x10, 0x5F, 0x57, 0xB2, 0x8D, 0x22, 0x53, 0x2F,
    0x58, 0x09, 0x43, 0x40, 0x5F, 0xE4, 0x4E, 0x4B,
    0x5F, 0x21, 0x0F, 0x4B, 0x67, 0x4B, 0x1C, 0xC5,
    0x71, 0x78, 0x00, 0x10, 0xC1, 0x28, 0x01, 0x04,
    0x0C, 0x07, 0x26, 0x78, 0xFB, 0x5F, 0x8E, 0x07,
    0x52, 0xC0, 0x76, 0x4F, 0x19, 0x05, 0x0F, 0x80,
    0x18, 0x00, 0x80, 0x57, 0x4F, 0x7B, 0x47, 0x05,
    0x54, 0x07, 0x6D, 0x7B, 0x0E, 0xB2, 0x47, 0x00,
    0x8E, 0x40, 0x47, 0x49, 0x6D, 0xA3, 0x6D, 0xA4,
    0x05, 0x38, 0x8E, 0x57, 0x05, 0x00, 0x38, 0x7F,
    0x3C, 0xA8, 0x06, 0x5F, 0x8A, 0x8F, 0x5F, 0x41,
    0x65, 0xD5, 0x7B, 0x40, 0xC8, 0x92, 0x7E, 0x88,
    0xBE, 0x38, 0x5F, 0x10, 0x00, 0x54, 0x40, 0x0E,
    0xD9, 0x04, 0x58, 0x5E, 0x9F, 0x04, 0xCC, 0x80,
    0xC2, 0x00, 0x86, 0xD3, 0x9D, 0x7D, 0xD3, 0x9C,
    0x10, 0x53, 0xB7, 0x04, 0xE6, 0x9D, 0x57, 0x04,
    0x5A, 0x00, 0x10, 0xC8, 0x7D, 0x7D, 0x10, 0xD1,
    0x56, 0x93, 0x56, 0x04, 0xE2, 0x47, 0x4B, 0x06,
    0xF2, 0x6A, 0x34, 0x80, 0x47, 0x05, 0xEA, 0x6D,
    0x9D, 0x40, 0x80, 0xB1, 0x95, 0x41, 0x85, 0x71,
    0x9C, 0x4F, 0x57, 0x7C, 0x4F, 0x4F, 0x5E, 0xBA,
    0x47, 0x9B, 0x06, 0x76, 0x07, 0xE4, 0x4F, 0x80,
    0x68, 0x00, 0x00, 0x25, 0x57, 0x00, 0x5F, 0x5F,
    0x74, 0x47, 0x00, 0x21, 0x94, 0xD4, 0x10, 0x20,
    0x1C, 0xE6, 0x88, 0x7E, 0x7E, 0x00, 0x4A, 0x5F,
    0x11, 0x57, 0x19, 0xB1, 0x51, 0x64, 0xBD, 0x63,
    0x21, 0x22, 0x88, 0x0C, 0xC0, 0x10, 0xEA, 0x62,
    0x0C, 0x80, 0x9C, 0x2C, 0x2F, 0x5F, 0x9C, 0x6C,
    0x03, 0x2F, 0x47, 0x6C, 0x19, 0xD4, 0x1D, 0x9F,
    0x2F, 0xA7, 0x26, 0x5C, 0x01, 0x50, 0x48, 0x80,
    0x4F, 0xF1, 0xF0, 0x90, 0xD5, 0xD0, 0x3F, 0x31,
    0xDB, 0x6E, 0xE0, 0x14, 0xF2, 0x18, 0x01, 0x2F,
    0x10, 0xD6, 0x07, 0xEB, 0xE1, 0xDA, 0x5F, 0x10,
    0x8E, 0xFA, 0x3C, 0x1C, 0x3C, 0x20, 0x21, 0x21,
    0x57, 0x97, 0xDD, 0x8E, 0xD1, 0x06, 0xE8, 0x08,
    0x6F, 0xE3, 0xDC, 0x6E, 0x6E, 0x04, 0x23, 0x66,
    0x6E, 0x6C, 0xD4, 0xD9, 0x5F, 0x5F, 0x5F, 0x09,
    0x6F, 0x5F, 0x03, 0xB3, 0x5F, 0x1C, 0x11, 0x80,
    0x5E, 0xB9, 0xAE, 0x01, 0x5F, 0x91, 0x2B, 0x8E,
    0x5A, 0xA7, 0xB5, 0x5F, 0x5F, 0x27, 0x31, 0x66,
    0x6A, 0x18, 0x23, 0x19, 0x15, 0x6E, 0xA7, 0x6E,
    0x6A, 0x00, 0xA7, 0x6F, 0x38, 0x26, 0x36, 0x5F,
    0x04, 0x4C, 0x49, 0x6C, 0x6E, 0x49, 0x34, 0x10,
    0x5A, 0x11, 0x93, 0x6F, 0x5A, 0x40, 0x55, 0x2C,
    0x46, 0x9D, 0x6F, 0x6E, 0x9D, 0x20, 0xAD, 0x08,
    0x08, 0x5F, 0x6F, 0x10, 0x6C, 0x67, 0xB8, 0x80,
    0x5F, 0x90, 0x00, 0x5F, 0x31, 0x00, 0x9D, 0x5F,
    0x5F, 0x92, 0x00, 0x2D, 0x20, 0x87, 0x98, 0x5F,
    0x20, 0x6E, 0x64, 0x23, 0xB2, 0x00, 0x00, 0x9A,
    0x6E, 0x11, 0x32, 0x00, 0x14, 0x0F, 0x07, 0x14,
    0x1C, 0x11, 0x92, 0x1C, 0x0C, 0x44, 0x1D, 0x4B,
    0x1C, 0x5B, 0x6E, 0x0E, 0x00, 0x00, 0x3C, 0x06,
    0x04, 0x0C, 0x20, 0x18, 0x90, 0x98, 0x00, 0x07,
    0x19, 0x5F, 0x6E, 0x19, 0x04, 0x06, 0x5F, 0x80,
    0x58, 0xB8, 0xB9, 0x10, 0x47, 0xAB, 0x90, 0x5F,
    0x18, 0x10, 0x67, 0x20, 0x6E, 0x37, 0x6E, 0x10,
    0x21, 0x02, 0x20, 0x00, 0x00, 0x00, 0x84, 0xBE,
    0x53, 0x10, 0x18, 0x24, 0x5F, 0x87, 0x90, 0x37,
    0xB8, 0x6C, 0x0E, 0x24, 0x3F, 0x1C, 0x00, 0x52,
    0x08, 0x00, 0x00, 0x5F, 0x84, 0x53, 0x27, 0x90,
    0x6E, 0x22, 0x8C, 0xAB, 0x10, 0x25, 0x64, 0x1C,
    0x46, 0x67, 0x52, 0x18, 0x66, 0x3B, 0x18, 0x80,
    0xC5, 0x8B, 0x72, 0xD5, 0x8C, 0x6D, 0xB4, 0x00,
    0x5F, 0x53, 0xA8, 0x79, 0x79, 0x53, 0x00, 0x00,
    0x7C, 0x10, 0x23, 0x7C, 0x85, 0x72, 0x92, 0x5F,
    0x00, 0x10, 0x21, 0x21, 0x00, 0xB9, 0x00, 0x4A,
    0x0A, 0x00, 0x20, 0x00, 0x43, 0xB9, 0xB3, 0x00,
    0xA2, 0xF5, 0x6D, 0x03, 0x00, 0x53, 0x00, 0x21,
    0x08, 0x00, 0x21, 0x00, 0x6D, 0xDE, 0x00, 0x08,
    0x10, 0x00, 0x7A, 0x76, 0x76, 0xA3, 0xB0, 0x80,
    0x4C, 0x99, 0x7A, 0x4B, 0x22, 0x6D, 0x5F, 0x84,
    0x10, 0x55, 0xE6, 0x91, 0x0F, 0x90, 0x55, 0x18,
    0x21, 0x24, 0x4B, 0x70, 0x00, 0x78, 0xA2, 0x18,
    0x5B, 0x52, 0x5B, 0x4B, 0x67, 0x4B, 0x5F, 0x0E,
    0x20, 0x84, 0x21, 0x91, 0x5F, 0x5F, 0x6D, 0x66,
    0x5B, 0xB4, 0x00, 0x0B, 0xA5, 0x52, 0x07, 0x5F,
    0x11, 0x22, 0x18, 0x57, 0xB1, 0x25, 0x5F, 0x38,
    0x2C, 0x97, 0x5F, 0x55, 0x15, 0x95, 0x0D, 0x80,
    0x74, 0x80, 0x75, 0x1D, 0x0D, 0xAF, 0x11, 0x9F,
    0x05, 0x14, 0x75, 0x23, 0x2C, 0x1D, 0x74, 0x57,
    0x10, 0x19, 0x20, 0x0C, 0x64, 0x06, 0x4C, 0x38,
    0x99, 0x4C, 0x11, 0x04, 0x25, 0x07, 0x4F, 0x24,
    0x80, 0x11, 0x0E, 0x10, 0x06, 0x11, 0x11, 0xB9,
    0x5F, 0x0D, 0x05, 0x00, 0x3F, 0x05, 0x52, 0x9E,
    0x55, 0x3F, 0x8A, 0x0A, 0x4A, 0x48, 0x82, 0x54,
    0xB7, 0xAE, 0x10, 0x9C, 0x54, 0x21, 0x22, 0x80,
    0xCA, 0x6E, 0x8C, 0x73, 0x10, 0x6C, 0x6D, 0x73,
    0x6D, 0x23, 0xA6, 0xC6, 0x2C, 0x88, 0xC6, 0x78,
    0x73, 0x80, 0x49, 0x31, 0x01, 0x31, 0x73, 0x4E,
    0xCD, 0x4C, 0x53, 0x73, 0xBE, 0x73, 0xDD, 0x78,
    0x6D, 0xF5, 0x70, 0xDA, 0x7B, 0x5F, 0x01, 0xE6,
    0xDA, 0x00, 0x00, 0xDE, 0x73, 0xCD, 0x07, 0xDB,
    0x76, 0x73, 0xA8, 0xFC, 0x73, 0x23, 0xC6, 0x77,
    0xE4, 0x57, 0xCD, 0xD9, 0x6D, 0x48, 0xC2, 0x80,
    0x18, 0x6E, 0x94, 0x3C, 0x01, 0x64, 0x5F, 0x71,
    0x31, 0x00, 0x94, 0x01, 0x6E, 0xA8, 0x6D, 0xB5,
    0x10, 0x00, 0x31, 0x05, 0x01, 0x31, 0x20, 0x5B,
    0x6D, 0x8B, 0x54, 0x5F, 0x02, 0x6D, 0x09, 0x24,
    0x02, 0x27, 0x00, 0xE7, 0x8B, 0x00, 0x5F, 0x18,
    0x6D, 0x20, 0x00, 0xA7, 0x7A, 0x02, 0x24, 0x5B,
    0x53, 0x6D, 0x6C, 0x6B, 0x76, 0x4B, 0xB9, 0x80,
    0xBD, 0x14, 0xE4, 0xB5, 0x6B, 0x0A, 0x64, 0x80,
    0x21, 0x00, 0x00, 0x8B, 0x20, 0x00, 0xA1, 0x92,
    0x74, 0x9B, 0x00, 0x4B, 0xC0, 0x53, 0x53, 0x64,
    0x53, 0x92, 0x7A, 0x43, 0x42, 0x80, 0x92, 0xEF,
    0x53, 0x00, 0x22, 0x20, 0x5F, 0x21, 0xB3, 0x53,
    0x5B, 0x25, 0x5B, 0x64, 0x9B, 0x0C, 0x94, 0x53,
    0xBA, 0xAA, 0x78, 0x5F, 0x9B, 0x53, 0x01, 0xBB,
    0x84, 0x25, 0x00, 0x20, 0x8B, 0x41, 0x8B, 0xB9,
    0x5F, 0x22, 0x6C, 0x21, 0x40, 0x53, 0x20, 0x80,
    0xFC, 0x80, 0x79, 0x1C, 0x53, 0x00, 0xA8, 0x64,
    0x53, 0x29, 0x00, 0x53, 0x94, 0x83, 0x9B, 0x5B,
    0x08, 0x64, 0x64, 0x0C, 0x79, 0x00, 0x22, 0x01,
    0x9B, 0x53, 0x09, 0x5F, 0x9B, 0x53, 0x22, 0xBB,
    0x5F, 0x2F, 0x94, 0x25, 0x94, 0x94, 0x4B, 0x82,
    0x10, 0x0D, 0x8C, 0x2F, 0x26, 0x40, 0x5F, 0x1C,
    0x43, 0x53, 0x64, 0x54, 0x40, 0x66, 0x10, 0xBC,
    0x67, 0xAE, 0x20, 0x3A, 0x26, 0x10, 0x09, 0x80,
    0x66, 0xB7, 0x7A, 0x54, 0x5A, 0x6D, 0x47, 0x89,
    0x38, 0x6A, 0xD3, 0xA6, 0xBA, 0xC8, 0x7F, 0x4F,
    0x04, 0x5F, 0xD3, 0x80, 0xD3, 0xD3, 0xE2, 0x0E,
    0x6D, 0x71, 0x0E, 0x6D, 0x7E, 0x6D, 0x80, 0xBB,
    0x56, 0xB4, 0xA6, 0xE6, 0x06, 0xD3, 0x7C, 0x56,
    0xBA, 0xF6, 0xD3, 0x47, 0x74, 0xEA, 0x80, 0x4F,
    0xAF, 0xEA, 0x6D, 0x97, 0x0C, 0x0F, 0xC0, 0x0F,
    0x67, 0x6D, 0xEA, 0x6D, 0x4F, 0x7C, 0x07, 0x80,
    0x58, 0x00, 0x00, 0x6C, 0x80, 0xB2, 0xB4, 0xAC,
    0x99, 0x73, 0x72, 0x73, 0x80, 0x54, 0x55, 0x6D,
    0xAC, 0xF5, 0x6D, 0x44, 0x14, 0x6D, 0x6D, 0xB2,
    0x56, 0x74, 0x4B, 0x55, 0x6D, 0x6C, 0x9C, 0x57,
    0xBC, 0x54, 0x7C, 0xB6, 0x77, 0xA0, 0x5F, 0x71,
    0xB6, 0x2B, 0xA9, 0x00, 0x6E, 0x92, 0x7D, 0xBB,
    0x7B, 0x6C, 0x80, 0xC0, 0x55, 0x5F, 0x6F, 0xB0,
    0x96, 0x6D, 0xB1, 0x47, 0xC1, 0x55, 0x40, 0x80
};

