#include <IRremote.hpp>
const int RECV_PIN = 4;
IRrecv irrecv(RECV_PIN);

String buttons[] = {"CH-", "CH", "CH+", "Prev", "Next", "Play", "Vol-", "Vol+", "EQ", "0", "100+", "200+", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
uint32_t codes[] = {3125149440, 3108437760, 3091726080, 3141861120, 3208707840, 3158572800, 4161273600, 3927310080, 4127850240, 3910598400, 3860463360, 4061003520, 4077715200, 3877175040, 2707357440, 4144561920, 3810328320, 2774204160, 3175284480, 2907897600, 3041591040};


void setup(){
    Serial.begin(9600);
    irrecv.enableIRIn();
}

void loop(){
    if (irrecv.decode()){
        uint32_t readCode = irrecv.decodedIRData.decodedRawData;
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
