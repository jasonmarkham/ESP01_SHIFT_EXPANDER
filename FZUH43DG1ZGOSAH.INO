#define data 0
#define clock 2

void setup()
{
  pinMode(clock, OUTPUT); // make the clock pin an output
  pinMode(data , OUTPUT); // make the data pin an output
  for(int i = 0; i < 8; ++i) //for 0 - 7 do
  {
    shiftOut(data, clock, MSBFIRST, 1 << i); // bit shift a logic high (1) value by i
    delay(100); // delay 100ms or you would not be able to see it
  }
    
}

void loop(){} // empty loop for now
