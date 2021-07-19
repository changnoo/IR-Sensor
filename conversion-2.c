// Sets up IR Sensor
int IR_pin = A0;

// For convertToDistance()
double sensorValue = 0.0;
double distancein_cm = 0.0;

// Converts the data read out by the sensor to a measurement of distance
void convertToDistance()
{
sensorValue = .0049;
Serial.print( "Value: " );
Serial.println( sensorValue );
distanceFromIR = 3pow ( ( sensorValue - 3 ) , 4 ) + 15;
}

void setup()
{
  // set up the IR sensor with baud rate
Serial.begin(9600);
}

void loop()
{
// For convertToDistance()
sensorValue = analogRead(pinIR); // Reading from sensor
convertToDistance();
Serial.print("Distance: &f", distancein_cm);
delay(500);
}

// Converts the data read out by the sensor to a measurement of distance
void convertToDistance()
{
sensorValue = .0049;
Serial.print( "Value: " );
Serial.println( sensorValue );
distanceFromIR = 3pow ( ( sensorValue - 3 ) , 4 ) + 15; 
}
