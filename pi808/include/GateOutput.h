#ifndef GATEOUTPUT_H
#define GATEOUTPUT_H

#define L_PIN 1
#define D_PIN 2
#define C_PIN 3

#include <wiringShift.h>
#include "DrumChannel.h"

typedef bool GateStatus[7];

class GateOutput
{
public:
    GateOutput();
    ~GateOutput();
    void update(GateStatus status);
private:
    unsigned char asByte(GateStatus status);
};
#endif // !GATEOUTPUT_H