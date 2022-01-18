#include <Servo.h>
#define Servopin 3
#define Sensorpin 2

Servo srituhobby;

void setup() {
  // Monitor serial dimulai
  Serial.begin(9600);
  // Mengatack pin Sensor
  srituhobby.attach(Servopin);
  // Mengeset Pin Sensor Sebagai Input
  pinMode(Sensorpin, INPUT);
  // Menyetel titik awal motor servo
  srituhobby.write(260);
}

void loop() {
  //Mendapatkan nilai sensor
  bool value = digitalRead(Sensorpin);
  Serial.println(value);
//Nilai-nilai ini diperiksa menggunakan kondisi IF. Jika nilai sensor 0, motor servo berputar dari 60 derajat ke 160 derajat
//Juga, nilai derajat ini bergantung pada posisi klakson motor servo Anda
  if (value == 0) {
    srituhobby.write(60);
    delay(5);
    srituhobby.write(160);
    delay(5);
  } else {
    srituhobby.write(260);
  }

}
