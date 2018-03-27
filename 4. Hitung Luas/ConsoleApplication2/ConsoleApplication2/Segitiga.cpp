#include "Segitiga.h"
using namespace std;

float Segitiga::LuasSegitiga() {
	return alas * tinggi / 2;
}

float Segitiga::KelilingSegitiga() {
	return alas + tinggi + miring;
}