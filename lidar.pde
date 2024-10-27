import processing.serial.*;
Serial myPort;  // The serial port
String myString = null;
float x,y,z, angle;
int servo_pos1;
int servo_pos2;
float distance;

void setup() {
  // List all the available serial ports
  printArray(Serial.list());
  // Open the port you are using at the rate you want:
  myPort = new Serial(this, Serial.list()[0], 115200);
  
  size(820, 820, P3D);
  noSmooth();
  background(0);
  translate(410, 410);
  stroke(255);
  strokeWeight(3);  // Default
}

void draw() {
  
  while (myPort.available() > 0) {
    myString = myPort.readStringUntil(19);
    if (myString != null) {
    String[] q = splitTokens(myString, ",");   
    
    
    servo_pos1=int(q[0]);  // Converts and prints float
    servo_pos2=int(q[1]);  // Converts and prints float
    distance=float(q[2]);
    
    //Pass from polars to cartesians adna dd 410 to be in the middle of the 820 by 820 screen. 
    //angle = num * 0.0174533;
    //x = (sin(angle)*num2 + 410);
    //y = (cos(angle)*num2 + 410);
   
    }
    //if(num == 0 )
    //{
    //  background(0);    
    //  translate(410, 410);
    //}
    point(x, y, z);
    
  }
  myPort.clear();
}