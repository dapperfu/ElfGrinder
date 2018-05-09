
// Config

// Serial
unsigned long BAUD __attribute__((section("CFG_BAUD"))) = 115200;
// Main Loop
unsigned long MSG_DELAY __attribute__((section("CFG_MSG_DELAY"))) = 1000;

char var_char __attribute__((section("DT_CHAR"))) = -4;

int8_t var_int8 __attribute__((section("DT_INT8"))) = -8;
int16_t var_int16 __attribute__((section("DT_INT16"))) = -16;
int32_t var_int32 __attribute__((section("DT_INT32"))) = -32;

uint8_t  var_uint8  __attribute__((section("DT_UINT8"))) = 8;
uint16_t var_uint16 __attribute__((section("DT_UINT16"))) = 16;
uint32_t var_uint32 __attribute__((section("DT_UINT32"))) = 32;

float var_float __attribute__((section("DT_FLOAT"))) = 5;
double var_double __attribute__((section("DT_DOUBLE"))) = 5;

// Arduino Setup
void setup() {
	Serial.begin(BAUD);
	
	Serial.write(var_int8);
	
	Serial.write(var_int16);
	Serial.write(var_int32);
	
	
	Serial.write(var_uint8);
	Serial.write(var_uint16);
	Serial.write(var_uint32);
}

// Arduino Main Loop

uint8_t counter = 0;

void loop() {
	var_double += var_double;
}
