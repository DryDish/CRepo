#include "write.h"

/*
void write1()
{
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    delayMicroseconds(48);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    delayMicroseconds(48);
}

void write0()
{
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    delayMicroseconds(96);
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    delayMicroseconds(96);
}

 void writeByte(int byte)
 {
    for (int i = 7; i >= 0; i--) {
      if ((byte & (1 << i)) > 0) {
        write1();
      } else {
        write0();
      }
    }
  }
*/