#include <EEPROM.h>
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    String buffer = "";
    buffer = Serial.readString();
    int address, data;
    if (buffer.startsWith("read"))
    {
        address = buffer.substring(buffer.indexOf(' ') + 1).toInt();
        Serial.print("Data:");
        Serial.print(address);
        Serial.println();
        Serial.println(EEPROM.read(address));
    }
    else if (buffer.startsWith("write"))
    {
        address = buffer.substring(6, 7).toInt();
        data = buffer.substring(8).toInt();
        Serial.print("Address:");
        Serial.print(data);
        Serial.println();
        Serial.print(address);
        Serial.println();
        EEPROM.write(address, data);
    }
}