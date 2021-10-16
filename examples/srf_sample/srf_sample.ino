### include the SRF_LIB library
#include "SRF_LIB"

### create SRF object with trig and echo pins
#define trig 13
#define echo 12
SRF srf(trig, echo);

void setup() {
  ### create variables to store distance
  int distance_cm = 0;
  int distance_mm = 0;
}

void loop() {
  ### measure the distance in cm and mm
  distance_cm = srf.dist_cm();
  distance_mm = srf.dist_mm();
  ### print distance on serial monitor with 9600 baud rate
  Print_dist_cm(9600);
  Print_dist_mm(9600);
  delay(50);
}
