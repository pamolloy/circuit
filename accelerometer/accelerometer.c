int sleep_pin = 13;
int self_test_pin = 12;
int zero_g_pin = 11;
int g_select_pin = 10;
int x_pin = A0;
int y_pin = A1;
int z_pin = A2;

digitalWrite(sleep_pin, HIGH);      // Disable sleep mode
digitalWrite(self_test_pin, LOW);   // Disable self test

//analogReference(EXTERNAL);

// g-Select    g-Range Sensitivity
// 0           1.5g    800 mV/g
// 1           6g      206 mV/g
digitalWrite(g_select_pin, HIGH);


