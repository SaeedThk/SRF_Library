#include "Arduino.h"
class SRF{
public:
	int dist_cm();
	int dist_mm();
	void Print_dist_cm(int Serial_rate);
	void Print_dist_mm(int Serial_rate);
private:
	int trig, echo;
	SRF(int trig, int echo);
	int Calculate_distance();
};



