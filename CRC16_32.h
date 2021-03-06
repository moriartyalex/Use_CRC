#ifndef CRC16_32__H
#define CRC16_32__H

unsigned short CalcCRC16(unsigned short StartCRC, unsigned char *Addr, unsigned long Size);
unsigned long CalcCRC32(unsigned long StartCRC, unsigned char *Addr, unsigned long Size);
unsigned update_crc32(unsigned long crc, const unsigned char *data, size_t len);
int CalcFileCRC(char *path);

#endif
