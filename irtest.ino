#include <IRremote.hpp>
const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);

String buttons[] = {"CH-", "CH", "CH+", "Prev", "Next", "Play", "Vol-", "Vol+", "EQ", "0", "100+", "200+", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
uint32_t codes[] = {3125149440, 3108437760, 0xE21D, 0x22DD, 0x02FD, 0xC23D, 0xE01F, 0xA857, 0x906F, 0x6897, 0x9867, 0xB04F, 0x30CF, 0x18E7, 0x7A85, 0x10EF, 0x38C7, 0x5AA5, 0x42BD, 0x4AB5, 0x52AD};


void setup(){
    Serial.begin(9600);
    irrecv.enableIRIn();
    irrecv.blink13(true);
}

void loop(){
    if (irrecv.decode()){
        uint32_t readCode = irrecv.decodedIRData.decodedRawData;
        Serial.println(readCode);
        irrecv.resume();

        if (readCode != 0){
            for (int i = 0; i < sizeof(buttons); i++){
                if (codes[i] == readCode){
                    Serial.println(buttons[i]);
                }
            }
        }

    }
}
