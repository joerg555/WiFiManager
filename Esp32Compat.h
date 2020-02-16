#pragma once

#ifdef ESP32

class EspClass32
{
  public:
    static uint32_t getFlashChipId()
    {
      return 0;
    }
    static uint32_t getChipId()
    {
      return (int32_t)ESP.getEfuseMac();
    }
    static uint32_t getFlashChipSize()
    {
      return ESP.getFlashChipSize();
    }
    static void reset()
    {
      ESP.restart();
    }
    static uint32_t getFlashChipRealSize()
    {
      return 0;
    }
};

extern EspClass32 ESP32Compat;

#define ESP ESP32Compat
#define ETS_UART_INTR_DISABLE()
#define ETS_UART_INTR_ENABLE()

#endif
