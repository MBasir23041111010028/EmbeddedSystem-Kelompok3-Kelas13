const int sigPin = 4;     // pin tilt sensor
const int ledPin = 13;   // pin LED
const int buzzerPin = 8; // pin buzzer

void setup()
{
  pinMode(sigPin, INPUT);     
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  // kondisi awal mati
  digitalWrite(ledPin, HIGH);    // LED OFF 
  digitalWrite(buzzerPin, LOW);  // Buzzer OFF
}

void loop()
{
  if (digitalRead(sigPin) == HIGH)
  {
    // ADA KEMIRINGAN
    digitalWrite(ledPin, LOW);     // LED ON
    digitalWrite(buzzerPin, HIGH); // BUZZER ON
  }
  else
  {
    // TIDAK MIRING
    digitalWrite(ledPin, HIGH);    // LED OFF
    digitalWrite(buzzerPin, LOW);  // BUZZER OFF
  }
}
