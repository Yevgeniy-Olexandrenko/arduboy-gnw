// -----------------------------------------------------------------------------
// Controls configuration
// keys: right_down right_up left_down left_up time game_b game_a alarm acl
// size: 13 bytes
// -----------------------------------------------------------------------------

const uint8_t rkosmosa_controls[] PROGMEM =
{
    0x41, 0x42, 0x43, 0x44, 0x31, 0x32, 0x33, 0x34,
    0xFF, 0xFF, 0xFF, 0xFF, 0x10
};

// -----------------------------------------------------------------------------
// Segments rendering info
// size: 288 bytes
// -----------------------------------------------------------------------------

const uint8_t rkosmosa_segments[] PROGMEM =
{
    0x46, 0x22, 0xD7, 0x00, 0x48, 0x2F, 0x65, 0x00,
    0x48, 0x34, 0x65, 0x00, 0x48, 0x2B, 0x65, 0x00,
    0x45, 0x20, 0x2D, 0x01, 0x53, 0x37, 0xDE, 0x00,
    0x46, 0x38, 0xBD, 0x00, 0x54, 0x28, 0x69, 0x00,
    0x2A, 0x24, 0x55, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x32, 0x0B, 0x89, 0x00, 0x4D, 0x25, 0x2A, 0x00,
    0x34, 0x2B, 0x65, 0x00, 0x2A, 0x1B, 0x05, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x4C, 0x1C, 0x61, 0x01,
    0x27, 0x28, 0x33, 0x00, 0x32, 0x38, 0x46, 0x00,
    0x19, 0x37, 0xEF, 0x00, 0x33, 0x20, 0x53, 0x01,
    0x24, 0x29, 0xA4, 0x00, 0x34, 0x34, 0x65, 0x00,
    0x34, 0x2F, 0x65, 0x00, 0x33, 0x22, 0x39, 0x00,
    0x1C, 0x13, 0xAA, 0x00, 0x1F, 0x15, 0x76, 0x01,
    0x11, 0x2C, 0x7D, 0x01, 0x1D, 0x2C, 0x4F, 0x00,
    0x11, 0x0B, 0xA8, 0x01, 0x23, 0x17, 0xB7, 0x00,
    0x25, 0x19, 0x26, 0x01, 0x20, 0x2B, 0x19, 0x00,
    0x3D, 0x05, 0xC7, 0x01, 0x32, 0x05, 0x89, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x28, 0x0A, 0xCF, 0x01,
    0x47, 0x13, 0xD7, 0x01, 0x4F, 0x13, 0x96, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x04, 0x3F, 0x01,
    0x45, 0x07, 0x26, 0x00, 0x43, 0x05, 0xB1, 0x00,
    0x43, 0x09, 0xC2, 0x01, 0x44, 0x0A, 0x00, 0x00,
    0x48, 0x07, 0x01, 0x01, 0x42, 0x06, 0x92, 0x00,
    0x41, 0x0A, 0x9F, 0x00, 0x42, 0x0E, 0x20, 0x00,
    0x50, 0x06, 0x3B, 0x01, 0x4D, 0x05, 0xE1, 0x01,
    0x4E, 0x0A, 0xD2, 0x00, 0x4F, 0x0B, 0xCD, 0x00,
    0x56, 0x12, 0x6B, 0x01, 0x4D, 0x06, 0xC9, 0x00,
    0x4C, 0x0A, 0xC5, 0x00, 0x4D, 0x0E, 0xA3, 0x01,
    0x59, 0x06, 0x3B, 0x01, 0x56, 0x05, 0xE1, 0x01,
    0x57, 0x0A, 0xD2, 0x00, 0x58, 0x0B, 0xCD, 0x00,
    0x61, 0x0C, 0x6F, 0x00, 0x56, 0x06, 0xC9, 0x00,
    0x55, 0x0A, 0xC5, 0x00, 0x56, 0x0E, 0xA3, 0x01,
    0x5B, 0x2B, 0x40, 0x00, 0x62, 0x2C, 0x06, 0x01,
    0x57, 0x19, 0x9D, 0x01, 0x5A, 0x17, 0x97, 0x01,
    0x58, 0x2A, 0x20, 0x01, 0x5E, 0x2C, 0x69, 0x00,
    0x54, 0x1A, 0x26, 0x01, 0x5D, 0x15, 0x26, 0x01
};

// -----------------------------------------------------------------------------
// Graphics rendering info
// size: 256 bytes
// -----------------------------------------------------------------------------

const uint8_t rkosmosa_graphics[] PROGMEM =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x03, 0xE7, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEF, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xC7, 0x02, 0xFF, 0x02, 0x00, 0x00, 0x37, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x27, 0x03, 0xCF, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x77, 0x02, 0xAF, 0x02,
    0x00, 0x00, 0x57, 0x03, 0xFF, 0x01, 0x00, 0x00,
    0x3F, 0x02, 0x00, 0x00, 0x9F, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x2F, 0x02, 0x00, 0x00, 0x37, 0x02, 0x67, 0x03,
    0x00, 0x00, 0xBF, 0x02, 0x77, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x02, 0x27, 0x02, 0x57, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x87, 0x02, 0x5F, 0x02, 0x00, 0x00, 0x4F, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x7F, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB7, 0x02,
    0x6F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x97, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0x02,
    0x0F, 0x03, 0x17, 0x02, 0x6F, 0x02, 0xF7, 0x02,
    0x00, 0x00, 0x00, 0x00, 0xF7, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x03,
    0x7F, 0x02, 0xA7, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x8F, 0x02, 0x1F, 0x02, 0x47, 0x02, 0x2F, 0x03,
    0x00, 0x00, 0xD7, 0x02, 0xEF, 0x01, 0x0F, 0x02,
    0x67, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x03,
    0x47, 0x03, 0xE7, 0x01, 0x17, 0x03, 0x07, 0x03
};

// -----------------------------------------------------------------------------
// Tiles for rendering
// size: 903 bytes
// -----------------------------------------------------------------------------

const uint8_t rkosmosa_gfxtiles[] PROGMEM =
{
    0x03, 0x08, 0x0F, 0x0F, 0x3F, 0x09, 0x10, 0x7F,
    0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xF8,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x05, 0x08, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x04, 0x08, 0x03, 0x03, 0x03, 0x03, 0x02, 0x08,
    0x03, 0x07, 0x07, 0x08, 0x1F, 0x3F, 0x7F, 0xFF,
    0xFF, 0xFF, 0xFF, 0x04, 0x08, 0x01, 0x0F, 0x0F,
    0x0F, 0x05, 0x08, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x04, 0x08, 0x04, 0x07, 0x07, 0x01, 0x07, 0x08,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x04,
    0x08, 0x0F, 0x0F, 0x0F, 0x0C, 0x07, 0x10, 0x0F,
    0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x02, 0x08, 0x07,
    0x07, 0x04, 0x08, 0x0F, 0x0F, 0x0F, 0x0F, 0x0C,
    0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x07, 0x08, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x02, 0x08, 0x0F, 0x07, 0x07, 0x08,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x03,
    0x08, 0x1F, 0x0F, 0x0F, 0x04, 0x08, 0x03, 0x0F,
    0x0F, 0x0F, 0x05, 0x08, 0x0C, 0x0F, 0x0F, 0x03,
    0x03, 0x04, 0x08, 0x01, 0x03, 0x03, 0x03, 0x04,
    0x08, 0x0F, 0x0F, 0x03, 0x03, 0x06, 0x08, 0x0E,
    0x0E, 0x0F, 0x0F, 0x0C, 0x0C, 0x02, 0x08, 0x1F,
    0x0F, 0x02, 0x08, 0x0F, 0x0F, 0x03, 0x08, 0x07,
    0x1F, 0x1F, 0x03, 0x08, 0x03, 0x01, 0x01, 0x05,
    0x08, 0x1E, 0x1E, 0x1E, 0x1F, 0x1F, 0x0F, 0x08,
    0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
    0x1E, 0x1E, 0x1E, 0x00, 0x1F, 0x1F, 0x1F, 0x10,
    0x08, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
    0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x1F, 0x1F, 0x1F,
    0x1F, 0x03, 0x08, 0x63, 0x63, 0x03, 0x0C, 0x10,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xF0, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
    0x04, 0x08, 0x07, 0x07, 0x07, 0x07, 0x05, 0x08,
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x06, 0x10, 0x07,
    0x07, 0x87, 0x87, 0x80, 0x80, 0x00, 0x00, 0x03,
    0x03, 0x03, 0x03, 0x02, 0x08, 0x0E, 0x1F, 0x09,
    0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x06, 0x10, 0x80, 0x80, 0x83,
    0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00,
    0x00, 0x08, 0x08, 0xFC, 0xFC, 0xFE, 0xFF, 0xFF,
    0x7F, 0x7F, 0x7F, 0x09, 0x08, 0x1E, 0x1E, 0x1E,
    0x1F, 0x1F, 0x1F, 0x1F, 0x06, 0x06, 0x05, 0x08,
    0x0F, 0x0F, 0x0F, 0x0F, 0x03, 0x0C, 0x10, 0xF0,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04,
    0x08, 0x07, 0x07, 0x07, 0x04, 0x04, 0x08, 0x01,
    0x01, 0x07, 0x06, 0x03, 0x08, 0x03, 0x03, 0x03,
    0x0C, 0x10, 0x0E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x08, 0x01, 0x01, 0x01, 0x03,
    0x10, 0xFF, 0xFF, 0x3F, 0x07, 0x07, 0x00, 0x06,
    0x08, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x08,
    0x08, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0x04, 0x08, 0x01, 0x01, 0x03, 0x03, 0x10,
    0x10, 0x10, 0x00, 0x04, 0x04, 0x05, 0x3F, 0x04,
    0x04, 0x3F, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
    0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x80,
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x20, 0x20, 0x20, 0xFD, 0xA1, 0x3F,
    0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x02,
    0x02, 0x02, 0x1F, 0x02, 0x02, 0x02, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x21,
    0x2F, 0x01, 0x01, 0x01, 0x20, 0x21, 0x21, 0x00,
    0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
    0xFC, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00,
    0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x0F, 0xE0,
    0x00, 0x04, 0x04, 0x04, 0x3F, 0x04, 0x07, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
    0x08, 0x7F, 0x08, 0x08, 0x08, 0x00, 0x00, 0x40,
    0x40, 0x40, 0xF8, 0xE0, 0x40, 0x40, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x02, 0x0A, 0x1F, 0x0A, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x80, 0x80, 0x80, 0xF0, 0x80, 0x04,
    0x3F, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x0F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xE0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x02, 0x02, 0x02, 0x1F, 0x02, 0x02, 0x02, 0x00,
    0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xF0, 0x04,
    0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0xFD,
    0x2F, 0x25, 0x25, 0xFF, 0x04, 0x04, 0x04, 0x00,
    0x04, 0x04, 0x04, 0x3F, 0x04, 0x04, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x0F,
    0x01, 0x01, 0x01, 0x10, 0x10, 0x10, 0xFE, 0x20,
    0x20, 0x20, 0xFC, 0x20, 0x20, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x00,
    0x00, 0x04, 0x04, 0x04, 0x3F, 0x04, 0x04, 0x00,
    0x01, 0x01, 0x03, 0x0F, 0x01, 0x01, 0x01, 0x7F,
    0x0A, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0B,
    0x08, 0x7F, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00,
    0x08, 0x08, 0x08, 0x7F, 0x08, 0x08, 0x08
};

// -----------------------------------------------------------------------------
// Firmware dump
// file: IM-13.rom
// size: 1856 bytes
// -----------------------------------------------------------------------------

const uint8_t rkosmosa_firmware[] PROGMEM =
{
    0x70, 0x00, 0x00, 0x7C, 0x53, 0x00, 0xFA, 0xBA,
    0x00, 0x04, 0x00, 0x21, 0x4E, 0x7A, 0xE9, 0xDB,
    0x47, 0xD4, 0x5E, 0x10, 0x01, 0x00, 0x01, 0x44,
    0x4E, 0x91, 0x28, 0xFC, 0xE0, 0x00, 0xE6, 0x71,
    0x58, 0xC7, 0xAD, 0x7C, 0x58, 0x01, 0x20, 0xEA,
    0x55, 0x27, 0x5E, 0x56, 0xF4, 0x20, 0xED, 0x80,
    0x9C, 0xC7, 0x9C, 0x8F, 0x8C, 0x22, 0x91, 0xE6,
    0xEA, 0x8C, 0xD4, 0x7C, 0x9F, 0xC7, 0x8C, 0x80,
    0x42, 0xB7, 0x70, 0x6D, 0x7C, 0x9F, 0xA8, 0x08,
    0xEA, 0x98, 0x72, 0x6C, 0x6D, 0x56, 0x5F, 0x08,
    0x80, 0xDB, 0x5B, 0xA8, 0x07, 0x24, 0x6C, 0xE6,
    0x1B, 0xA9, 0x00, 0x0B, 0xEA, 0x0C, 0x28, 0x22,
    0xC5, 0x7B, 0xC0, 0x0D, 0x91, 0x24, 0x7B, 0x14,
    0x55, 0x5F, 0xC5, 0x7F, 0x0B, 0x1F, 0xB9, 0x14,
    0xCA, 0x43, 0x56, 0x0C, 0x82, 0x85, 0x34, 0x57,
    0x4B, 0xDB, 0x47, 0x8D, 0x20, 0x47, 0x11, 0x80,
    0xDB, 0x00, 0x00, 0x3F, 0x2C, 0x80, 0x84, 0x3D,
    0x18, 0x29, 0x73, 0x24, 0xF0, 0x83, 0xA5, 0x43,
    0x3C, 0x10, 0x27, 0xF8, 0xFC, 0xFE, 0x23, 0x18,
    0x64, 0x3E, 0x09, 0x21, 0x5F, 0x3E, 0x9C, 0x7A,
    0xD3, 0x98, 0x43, 0x92, 0x3E, 0x25, 0x3F, 0x29,
    0x96, 0x3D, 0x3B, 0x66, 0x18, 0x22, 0x05, 0xD0,
    0xB7, 0x89, 0xC0, 0x10, 0x3C, 0x64, 0x3B, 0x7C,
    0x5F, 0x8C, 0x8B, 0xC0, 0x4B, 0xD3, 0x18, 0x80,
    0xD3, 0x80, 0x74, 0xA3, 0x42, 0x8F, 0xC0, 0xC1,
    0xFE, 0x82, 0xE9, 0x80, 0x7A, 0x7A, 0x0F, 0xDB,
    0x10, 0x82, 0xF4, 0x8A, 0xD0, 0xC0, 0x71, 0x16,
    0xD0, 0x8F, 0x0C, 0x21, 0x8C, 0x52, 0xC3, 0x8F,
    0xAF, 0x4E, 0xF4, 0xE9, 0x7C, 0x4E, 0xC0, 0xEA,
    0x5F, 0x7A, 0x7C, 0xC7, 0xA5, 0x10, 0x5F, 0xC2,
    0xC1, 0x8F, 0xC0, 0x96, 0x15, 0x52, 0x4E, 0x8F,
    0x4E, 0xD3, 0x07, 0x5F, 0x20, 0x17, 0x10, 0x80,
    0x66, 0x80, 0x75, 0xC4, 0x14, 0xDB, 0xD9, 0x5F,
    0xCC, 0x5F, 0x0D, 0x19, 0xE2, 0x4D, 0x94, 0x4D,
    0xC4, 0x19, 0x94, 0x08, 0x4B, 0x52, 0xD9, 0x94,
    0x5F, 0x19, 0x00, 0x19, 0xCC, 0xE2, 0xE2, 0x3E,
    0x5F, 0x4C, 0xCC, 0x15, 0x19, 0xD9, 0x5F, 0xE2,
    0x48, 0xC4, 0x05, 0x00, 0x04, 0xC4, 0xD9, 0x87,
    0x40, 0xE2, 0xE2, 0xCC, 0xE2, 0x00, 0xC4, 0x3E,
    0x18, 0x4C, 0x49, 0x8D, 0x3E, 0x4C, 0x89, 0x80,
    0x42, 0x6E, 0x21, 0x77, 0x15, 0x22, 0x6D, 0x3E,
    0x6E, 0x5F, 0x28, 0x24, 0x6E, 0xD2, 0x90, 0x80,
    0x6D, 0x19, 0xB6, 0x82, 0x85, 0x24, 0x1C, 0xC2,
    0x5F, 0x10, 0x3C, 0x37, 0x6D, 0x3F, 0x77, 0xD3,
    0x19, 0xF4, 0x0E, 0xB9, 0x21, 0x5B, 0x3E, 0x6D,
    0x76, 0x3E, 0x3E, 0x86, 0x07, 0xA4, 0xA8, 0x97,
    0x0A, 0x80, 0x08, 0x79, 0x3E, 0x5F, 0x18, 0x4E,
    0x66, 0xD8, 0x96, 0xF4, 0x09, 0xA7, 0x9E, 0x80,
    0x4D, 0x80, 0x77, 0x24, 0xEB, 0x00, 0x25, 0xDC,
    0xC8, 0x19, 0x80, 0x04, 0x10, 0x52, 0x15, 0x00,
    0x5F, 0x0D, 0x82, 0xC6, 0x82, 0x78, 0x5F, 0xD1,
    0xC8, 0x20, 0xC8, 0x22, 0xF2, 0x5F, 0x8C, 0x0C,
    0xDC, 0x8C, 0x82, 0x82, 0x52, 0xEB, 0x42, 0x00,
    0x04, 0xD3, 0x6D, 0x82, 0x52, 0x8C, 0x82, 0xC8,
    0x82, 0x0C, 0x21, 0x00, 0xF2, 0x0E, 0x23, 0x52,
    0x4C, 0x4D, 0x82, 0x27, 0xDC, 0x26, 0x82, 0x80,
    0xDB, 0x00, 0x00, 0xD6, 0x18, 0x00, 0x7A, 0x98,
    0x56, 0x98, 0x00, 0x7A, 0x3E, 0x6D, 0x55, 0x9A,
    0xE4, 0x4B, 0x6D, 0x3E, 0x80, 0x00, 0x6D, 0x9A,
    0x5F, 0x9C, 0xDB, 0x84, 0x7B, 0x4B, 0xF9, 0x3E,
    0x5F, 0x6D, 0x78, 0x42, 0xA6, 0xD6, 0xBD, 0x7B,
    0xC9, 0xBE, 0x00, 0x7B, 0x40, 0x07, 0xCB, 0x9C,
    0x40, 0xC3, 0x3E, 0xD0, 0xE4, 0xD9, 0x57, 0x3E,
    0x18, 0x9A, 0xC9, 0xA7, 0x3E, 0x7B, 0xAB, 0x80,
    0x4C, 0x00, 0x00, 0x53, 0x5F, 0x80, 0x66, 0x21,
    0x5F, 0xB1, 0x79, 0x88, 0x10, 0x40, 0x11, 0x56,
    0x75, 0x18, 0xC7, 0x4B, 0x80, 0xC0, 0x53, 0x57,
    0x53, 0x4E, 0x5F, 0x5F, 0x5F, 0x4F, 0x04, 0x54,
    0x56, 0x67, 0x4B, 0x10, 0x4B, 0x4E, 0x72, 0x84,
    0xE6, 0x55, 0x7C, 0x84, 0x9B, 0x4B, 0x08, 0x84,
    0x84, 0x19, 0x10, 0x22, 0x52, 0x20, 0xA5, 0x25,
    0x27, 0x9A, 0x88, 0x9A, 0x9A, 0x5F, 0x49, 0x80,
    0xDB, 0x00, 0x00, 0x4F, 0x15, 0x00, 0xA6, 0xB6,
    0x0C, 0x5F, 0x00, 0xCD, 0x10, 0x53, 0xC0, 0xA6,
    0xC0, 0x5F, 0x90, 0x7C, 0x6D, 0x80, 0xD4, 0x53,
    0x7C, 0x22, 0x20, 0xBA, 0x5B, 0x7A, 0xD1, 0x53,
    0xC8, 0xD2, 0x05, 0x7A, 0xD2, 0x57, 0x6D, 0x75,
    0x7C, 0x80, 0x74, 0x22, 0xC0, 0x7A, 0xA6, 0x94,
    0x18, 0xD0, 0x4A, 0xD8, 0xC0, 0x53, 0xE9, 0x7A,
    0x75, 0x25, 0xDB, 0xC5, 0xE6, 0x4B, 0x4E, 0x80,
    0x2B, 0xF0, 0x67, 0x14, 0x0D, 0x20, 0x24, 0x07,
    0x44, 0x0C, 0x00, 0x84, 0x0F, 0x5F, 0x06, 0x28,
    0x4E, 0x00, 0x88, 0x00, 0x28, 0xF0, 0x44, 0x6E,
    0x05, 0x45, 0x23, 0xA5, 0x53, 0x05, 0x5B, 0x21,
    0x01, 0x84, 0x6E, 0x45, 0x0E, 0x34, 0x6E, 0x5B,
    0x10, 0x00, 0x66, 0x00, 0x07, 0x0D, 0x6F, 0x5B,
    0x00, 0x04, 0x32, 0x6E, 0x18, 0x21, 0x38, 0x22,
    0x00, 0x4E, 0x44, 0x5B, 0x6A, 0x24, 0x0B, 0x80,
    0x40, 0x6E, 0x8C, 0x6E, 0x00, 0x6C, 0xAB, 0x00,
    0x64, 0x01, 0xA6, 0x5F, 0x2C, 0x6C, 0x31, 0x64,
    0x5F, 0x89, 0x20, 0x31, 0x01, 0x31, 0x6E, 0x0B,
    0x00, 0x4C, 0xAB, 0x6C, 0x2A, 0x00, 0xB0, 0x00,
    0x0B, 0x00, 0x31, 0x01, 0x89, 0x05, 0x01, 0xB0,
    0x02, 0x00, 0x00, 0x01, 0x31, 0xBA, 0x40, 0x00,
    0x01, 0x00, 0x6E, 0x6E, 0x20, 0x31, 0xBA, 0x00,
    0x52, 0x23, 0x01, 0x00, 0xAF, 0x31, 0x00, 0x80,
    0x47, 0x00, 0xD0, 0x5A, 0x0E, 0x95, 0x0C, 0x47,
    0x05, 0x45, 0x16, 0x24, 0x94, 0xBA, 0xD0, 0xD0,
    0x52, 0x1C, 0x99, 0x1C, 0x5F, 0x1A, 0x5F, 0x5F,
    0x06, 0x54, 0x3E, 0x04, 0x3E, 0x05, 0x3D, 0x5E,
    0x0E, 0xD0, 0x5F, 0x06, 0x5F, 0x55, 0x5F, 0x5F,
    0x04, 0x0C, 0x25, 0x0C, 0x5F, 0x0D, 0xBA, 0x04,
    0x66, 0x45, 0x24, 0x15, 0xD0, 0x0D, 0x1C, 0x38,
    0x4A, 0x0D, 0x52, 0x67, 0x54, 0x18, 0xBD, 0x80,
    0x5F, 0x00, 0xE0, 0x54, 0x19, 0x10, 0x4B, 0x64,
    0x47, 0x06, 0x6C, 0x04, 0x05, 0x0E, 0x88, 0xAE,
    0x88, 0x0F, 0x88, 0x53, 0x2B, 0xA6, 0x5E, 0x57,
    0x0D, 0x5F, 0x1C, 0x0E, 0x47, 0x53, 0x3B, 0x07,
    0x0C, 0xA8, 0x06, 0xBA, 0x56, 0x38, 0x20, 0x5F,
    0x5F, 0xE0, 0x14, 0x88, 0x5F, 0x0F, 0x05, 0x46,
    0x06, 0x47, 0xE0, 0x0C, 0x24, 0x5F, 0x0C, 0x19,
    0x07, 0x0F, 0x19, 0x56, 0x19, 0xAE, 0x06, 0x80,
    0x66, 0x00, 0x00, 0x5D, 0x57, 0x94, 0x19, 0x69,
    0xB2, 0x18, 0x14, 0x14, 0x67, 0x05, 0x5D, 0x64,
    0x55, 0x63, 0x19, 0xA0, 0x18, 0x6E, 0x5F, 0x56,
    0x68, 0xA9, 0x5F, 0x18, 0x69, 0x19, 0x62, 0x18,
    0x60, 0x69, 0xA4, 0x6C, 0x62, 0x52, 0x5C, 0x2D,
    0x68, 0x64, 0x35, 0x9A, 0x5F, 0x5D, 0x47, 0x57,
    0x5F, 0x54, 0x52, 0x5B, 0x5F, 0x68, 0x07, 0x9E,
    0x18, 0x9F, 0x06, 0x63, 0x52, 0x8F, 0x19, 0x80,
    0x68, 0x9A, 0xC7, 0xE9, 0xE6, 0x7C, 0xFC, 0x90,
    0x58, 0xDA, 0xCB, 0x1C, 0xE6, 0xC1, 0xD0, 0x7A,
    0xDB, 0x00, 0x7A, 0x18, 0x8A, 0x85, 0x20, 0x06,
    0x10, 0x80, 0xE6, 0xB2, 0xB3, 0x8C, 0xC5, 0x11,
    0x21, 0x83, 0x65, 0x4E, 0x00, 0x96, 0x4E, 0xF5,
    0xEA, 0x3C, 0xE5, 0x7E, 0x4B, 0x46, 0x45, 0x2F,
    0x03, 0x21, 0x71, 0x1A, 0xAC, 0xC0, 0xDC, 0x1C,
    0x5F, 0x16, 0xD5, 0xBE, 0x0C, 0x1A, 0x2F, 0x80,
    0x2A, 0xF1, 0xFC, 0x2F, 0xE0, 0xF9, 0x21, 0x18,
    0xE9, 0xD9, 0xFB, 0xDF, 0xE5, 0x4F, 0x6F, 0x10,
    0x5F, 0xEB, 0xDB, 0xE1, 0xFD, 0xF3, 0x6E, 0x6E,
    0x00, 0xEA, 0x6E, 0x58, 0x54, 0x6E, 0x08, 0x5F,
    0x28, 0xA3, 0xE3, 0x66, 0xE4, 0xD6, 0xE2, 0x2F,
    0x38, 0xF0, 0xF6, 0x55, 0x10, 0xD0, 0x6F, 0x17,
    0x26, 0x09, 0xEC, 0x6E, 0x18, 0x6F, 0x6E, 0x10,
    0x25, 0x00, 0x5A, 0x5E, 0x24, 0x04, 0x23, 0x80,
    0x46, 0xB0, 0x64, 0x24, 0x54, 0x06, 0x5F, 0x3F,
    0xB2, 0x18, 0x10, 0x20, 0x0F, 0x00, 0xB0, 0x5F,
    0x54, 0x04, 0x6E, 0xB2, 0x6C, 0x08, 0x3F, 0x10,
    0x1C, 0xA6, 0x6E, 0x38, 0x21, 0x3F, 0x86, 0x18,
    0x66, 0x67, 0xA4, 0x94, 0x0C, 0x10, 0x6C, 0x27,
    0x82, 0x6E, 0x22, 0x52, 0x04, 0x18, 0x08, 0x3B,
    0x18, 0x21, 0x53, 0x67, 0x64, 0xB6, 0x5F, 0x9C,
    0x37, 0xB0, 0x18, 0x10, 0x9C, 0x52, 0x1C, 0x80,
    0x52, 0xA9, 0xB1, 0x52, 0x2F, 0x9C, 0x87, 0x66,
    0x5F, 0x20, 0xB7, 0x56, 0x57, 0x0D, 0x0C, 0x06,
    0x54, 0x08, 0x6E, 0x6E, 0x56, 0x6F, 0x6E, 0x55,
    0x34, 0x6E, 0xBA, 0x15, 0x52, 0x6E, 0x6E, 0x0F,
    0x9F, 0x8E, 0x42, 0x6E, 0x40, 0x6F, 0x6F, 0xBA,
    0x6E, 0x4B, 0x6E, 0x6E, 0x19, 0xAC, 0x8D, 0x87,
    0x57, 0x5F, 0x0B, 0x0E, 0x04, 0x05, 0x11, 0x52,
    0x6E, 0x87, 0x67, 0xB3, 0x07, 0x56, 0xBA, 0x80,
    0x5F, 0x94, 0x00, 0x2B, 0x11, 0x6E, 0x27, 0x31,
    0x89, 0x20, 0x10, 0x5F, 0x47, 0x23, 0x26, 0x00,
    0x4E, 0x1D, 0x00, 0x6E, 0x5F, 0x25, 0x6F, 0x00,
    0x8E, 0x00, 0x00, 0x5A, 0x00, 0x6F, 0x3F, 0x00,
    0x17, 0x01, 0x20, 0x87, 0x6E, 0x0C, 0x54, 0x53,
    0x6A, 0x6F, 0x38, 0x00, 0x4E, 0x8A, 0x00, 0x53,
    0x5E, 0x6C, 0x00, 0x6E, 0x5A, 0x00, 0x6A, 0x3F,
    0x04, 0x6F, 0x8E, 0x00, 0x53, 0x53, 0x3F, 0x80,
    0x3C, 0x00, 0x00, 0x8D, 0x10, 0x00, 0xE9, 0x80,
    0x10, 0x20, 0x00, 0x7C, 0x00, 0xDB, 0x7C, 0x6D,
    0xE6, 0x20, 0x42, 0x00, 0x00, 0x00, 0x05, 0xDB,
    0x46, 0x00, 0xF0, 0x0D, 0xD4, 0x6D, 0x0C, 0x8F,
    0xAF, 0x7A, 0x4F, 0x00, 0x75, 0xD2, 0x00, 0x7C,
    0x6D, 0x00, 0x00, 0xD3, 0x18, 0x3B, 0x6D, 0x5F,
    0x48, 0x00, 0x80, 0xC0, 0x75, 0x98, 0x4B, 0x08,
    0x0F, 0x7A, 0xD8, 0x0C, 0x49, 0x19, 0x0F, 0x80,
    0xF0, 0x00, 0x00, 0x18, 0x7C, 0x00, 0x5F, 0x96,
    0x00, 0x10, 0x00, 0xE6, 0x00, 0x96, 0x52, 0x48,
    0xC4, 0x00, 0xF4, 0x00, 0x00, 0x00, 0x7A, 0xCC,
    0xCB, 0x00, 0x52, 0x3C, 0x48, 0xD9, 0x66, 0xE9,
    0x6D, 0xE2, 0x86, 0x6D, 0x00, 0x77, 0x00, 0xC4,
    0xCC, 0x00, 0x00, 0x49, 0x6D, 0x80, 0xD9, 0xBE,
    0x7C, 0x7B, 0x00, 0x44, 0xD9, 0xCC, 0xCD, 0x4B,
    0xC0, 0xE2, 0x19, 0x55, 0x6D, 0xB6, 0xDB, 0x80,
    0xDB, 0x00, 0x00, 0x14, 0x6B, 0x80, 0x6C, 0x98,
    0xAC, 0xA4, 0x77, 0x09, 0x02, 0x6C, 0xC2, 0x15,
    0x64, 0x5B, 0x5A, 0x5B, 0x4F, 0x10, 0x67, 0x29,
    0x42, 0x14, 0x6C, 0x02, 0x18, 0x9C, 0x5F, 0x6D,
    0x7C, 0x6B, 0x23, 0x43, 0x18, 0x94, 0x24, 0x56,
    0x64, 0xA4, 0x20, 0x02, 0x64, 0x0A, 0x52, 0x4B,
    0xD2, 0xAC, 0x6B, 0x66, 0x64, 0x6C, 0x18, 0xD1,
    0x6D, 0x19, 0x64, 0x94, 0x7C, 0x67, 0xC0, 0x80,
    0xDB, 0x00, 0x00, 0x10, 0x8C, 0x00, 0x21, 0x08,
    0x3C, 0x3C, 0x6E, 0x2C, 0x21, 0x4E, 0x0C, 0x6D,
    0x71, 0x99, 0x11, 0x6E, 0x5A, 0x21, 0x5F, 0xEA,
    0x5F, 0x22, 0xAE, 0x6C, 0xC1, 0x5F, 0xCB, 0x7B,
    0x6D, 0x6D, 0x3C, 0x6C, 0x24, 0x08, 0x53, 0xCD,
    0x80, 0x08, 0x6E, 0xA1, 0x1C, 0xB6, 0xDB, 0xD9,
    0x7B, 0x87, 0x28, 0x57, 0x5E, 0xD0, 0x08, 0x7B,
    0xD0, 0x80, 0x04, 0xDC, 0x7B, 0x7B, 0xD0, 0x80,
    0xDB, 0x80, 0x79, 0x4E, 0x99, 0xE7, 0xC7, 0xAC,
    0x79, 0x53, 0x7A, 0x53, 0xC0, 0x19, 0x55, 0x9C,
    0x64, 0x18, 0x64, 0x7A, 0x7A, 0x67, 0x20, 0x0C,
    0x9B, 0x7A, 0xC7, 0x5F, 0x5F, 0xB1, 0xAB, 0x4E,
    0x5F, 0x18, 0x64, 0x9B, 0x3E, 0x99, 0x66, 0x3C,
    0x3C, 0xE7, 0xF8, 0x5F, 0x19, 0x05, 0x4C, 0x18,
    0x4C, 0x55, 0x90, 0x9C, 0x0C, 0x2C, 0x0C, 0x52,
    0xC7, 0xAB, 0x54, 0xA7, 0x79, 0x3C, 0xD8, 0x80,
    0x79, 0x6E, 0x18, 0x27, 0x5F, 0x07, 0x3D, 0x6D,
    0x54, 0x6E, 0x06, 0x66, 0x3C, 0x90, 0x10, 0x4F,
    0x25, 0x67, 0x67, 0x5F, 0x18, 0x10, 0x2C, 0xB4,
    0x5F, 0x5F, 0x3F, 0x84, 0xA1, 0x16, 0x18, 0x10,
    0xD9, 0x2F, 0x2C, 0x77, 0x66, 0x54, 0x94, 0x66,
    0x21, 0x4C, 0x43, 0x3D, 0x15, 0x5F, 0x3B, 0x79,
    0x40, 0x80, 0x6E, 0x09, 0x20, 0xA8, 0x57, 0xD3,
    0x0B, 0xAE, 0x5F, 0x41, 0x18, 0x0B, 0x4F, 0x80,
    0x5F, 0x6E, 0x04, 0x6E, 0x91, 0x19, 0x87, 0x21,
    0x14, 0x5B, 0x04, 0x18, 0x89, 0x53, 0x6E, 0x6E,
    0x52, 0x1C, 0x41, 0x07, 0x07, 0x08, 0x42, 0x52,
    0x10, 0x00, 0x28, 0x00, 0xA1, 0xA3, 0x32, 0x55,
    0x3C, 0x40, 0x6E, 0x2F, 0x00, 0x5F, 0x48, 0x5F,
    0x41, 0x49, 0x5F, 0x41, 0x6E, 0x00, 0x40, 0xBB,
    0xBE, 0x08, 0x14, 0x3C, 0x0B, 0x0B, 0x00, 0x31,
    0x5F, 0x54, 0x53, 0x56, 0x4C, 0x6E, 0x20, 0x80,
    0x47, 0x00, 0xA9, 0x8D, 0x5F, 0x71, 0xEA, 0x08,
    0x10, 0xC5, 0x6D, 0x10, 0x11, 0xDB, 0x5F, 0x1E,
    0x8A, 0x25, 0x07, 0x1D, 0x6D, 0x80, 0x24, 0x6D,
    0x49, 0x24, 0x6D, 0x21, 0x5B, 0x0E, 0x0B, 0x10,
    0x04, 0x55, 0x16, 0x0D, 0x5F, 0x5F, 0x24, 0x6C,
    0x4B, 0x99, 0x72, 0x7C, 0x23, 0x14, 0xB7, 0x42,
    0x49, 0x5F, 0x03, 0x6C, 0x0E, 0xC0, 0x14, 0x1A,
    0x0E, 0x24, 0x49, 0x0B, 0x77, 0x34, 0xF4, 0x80,
    0xD3, 0x6E, 0x04, 0x55, 0x11, 0x49, 0x4B, 0x76,
    0x5F, 0x20, 0x04, 0x00, 0x20, 0x00, 0xA7, 0x10,
    0x21, 0x10, 0x4C, 0x04, 0x08, 0x48, 0x00, 0x21,
    0x00, 0x11, 0x00, 0x00, 0x23, 0x57, 0x9C, 0x09,
    0xA7, 0x22, 0x20, 0x80, 0x04, 0x00, 0x14, 0x6D,
    0x4A, 0x5F, 0x07, 0x10, 0x00, 0x00, 0x14, 0x00,
    0x5F, 0x00, 0x20, 0x72, 0x08, 0x90, 0x00, 0x1C,
    0x4A, 0x80, 0x10, 0x2F, 0x67, 0x09, 0x2E, 0x80
};

