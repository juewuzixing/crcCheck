#include <QCoreApplication>
#include <QDebug>

#include "Checksum.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Checksum checksum;

    auto data = QByteArray::fromHex("0123456789");
    auto crc16_Modbus = checksum.CRC16_MODBUS(data);
    auto crc16_X25 = checksum.crc16_X25(data);
    auto crc32 = checksum.crc32(data);

    qWarning() << "CRC16_Modbus:" << crc16_Modbus << QString::number(crc16_Modbus,16);
    qWarning() << "CRC16_X25:" << crc16_X25 << QString::number(crc16_X25,16);
    qWarning() << "CRC32:" << crc32 << QString::number(crc32,16);

    return a.exec();
}
