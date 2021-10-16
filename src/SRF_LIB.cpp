#include "SRF_LIB"

SRF::SRF(int trig, int echo) {
	SRF::trig = trig;
	SRF::echo = echo;
	pinMode(trig, OUTPUT);
	pinMode(echo, INPUT);
}
int SRF::Calculate_distance() {
	unsigned long duration;
	unsigned int distance;
	digitalWrite(trig, 0);
	delayMicroseconds(2);
	digitalWrite(trig, 1);
	delayMicroseconds(10);
	digitalWrite(trig, 0);
	duration = pulseIn(echo, 1);
	return distance = duration / 58;
}
int SRF::dist_cm(){
	return Calculate_distance();
}
int SRF::dist_mm() {
	return Calculate_distance()*10;
}
void SRF::Print_dist_cm(int Serial_rate) {
	Serial.begin(Serial_rate);
	Serial.println(dist_cm);
	Serial.end();
}
void SRF::Print_dist_mm(int Serial_rate) {
	Serial.begin(Serial_rate);
	Serial.println(dist_mm);
	Serial.end();
}
