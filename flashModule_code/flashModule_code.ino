//  ___ _      _   ___ _  _   __  __  ___  ___  _   _ _    ___ 
// | __| |    /_\ / __| || | |  \/  |/ _ \|   \| | | | |  | __|
// | _|| |__ / _ \\__ \ __ | | |\/| | (_) | |) | |_| | |__| _| 
// |_| |____/_/ \_\___/_||_| |_|  |_|\___/|___/ \___/|____|___|
//#############################################################
// SEE PARTS ON GITHUB

// SOURCES
//https://learn.sparkfun.com/tutorials/mems-microphone-hookup-guide/all
//https://create.arduino.cc/projecthub/wemissdominguez/led-flash-91fade
//https://www.arduino.cc/reference/en/language/structure/control-structure/else/

int conMic = A2;  // MEMS AUD output to Arduino analog A2 pin
int ledPin = 11;  // pin LED+ is attached to

int micOut;       // hold analog values from mic

void setup() {
  Serial.begin(115200);
  pinMode(ledPin,OUTPUT);         //set correct digital pinmode to output 

}

void loop() {
  micOut = analogRead(conMic);    // read the input on analog pin
  
    if (conMic > 100) {           // if statement setting flash threshhold, play with what works best for you
      digitalWrite(ledPin,HIGH);
    }
    else if (conMic < 100) {
      digitalWrite(ledPin,LOW);
    }

  Serial.println(micOut);   //print value to serial monitor
  Serial.println(conMic);   
}