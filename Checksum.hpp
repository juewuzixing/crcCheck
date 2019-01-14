#ifndef CHECKSUM_HPP
#define CHECKSUM_HPP

#include <QByteArray>

class Checksum
{
public:
    Checksum() {}

    quint16 CRC16_MODBUS(const QByteArray &data);
    quint16 crc16_X25(const QByteArray &data);
    quint32 crc32(const QByteArray &data);
};

#endif // CHECKSUM_HPP
