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

int conMic = A2;                 // Connect the MEMS AUD output to the Arduino A0 pin
int ledPin = 11;

int micOut;                      // Variable to hold analog values from mic

void setup() {
  Serial.begin(115200);
  pinMode(ledPin,OUTPUT);        //set correct digital pinmode to output 

}

void loop() {
  micOut = analogRead(conMic);    // read the input on analog pin 0:
  
    if (conMic > 100) {           //if statement setting flash threshhold 
      digitalWrite(ledPin,HIGH);  
    }
    else if (conMic < 100) {
      digitalWrite(ledPin,LOW);
    }

  Serial.println(micOut);         //print value to serial monitor 
  Serial.println(conMic);
}