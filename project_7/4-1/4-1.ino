// Project 7: Part 4.1

// The purpose of this part was to create a graphical interface in Processing that 
// communicates with an Arduino via Bluetooth. The program allows the user to click 
// on buttons to send commands to dim or brighten an LED. The interface also displays 
// real-time LED status feedback from the Arduino.
//
// Group Members: Josh Wild, Dayne Newman  
// Group Number: 14 (not sure this is what the bottom of the breadboard said)  
// Date: 4/14/2025  
// Code written by: Both team members 

import processing.serial.*; //Include Serial library and create a serial object to enable

serial communication
Serial myPort;
String ledStatus="LED: OFF";

void setup(){
  size(450, 500); // window size of the program
  myPort = new Serial(this, "COM11", 38400); // Starts the serial communication //Com port 11-- from device manager
  myPort.bufferUntil('\n'); // Defines up to which character the data from the serial port will be read. The character '\n' or 'New Line'
}

void serialEvent (Serial myPort){ // Checks for available data in the Serial Port
  ledStatus = myPort.readStringUntil('\n'); //Reads the data sent from the Arduino (the String "LED: OFF/ON) and it puts into the "ledStatus" variable
}

void draw(){ // graphics and funtions of program

  background(237, 240, 241);
  fill(20, 160, 133); // Green Color
  stroke(33); //
  strokeWeight(1);
  rect(50, 100, 150, 50, 10); // Turn ON Button
  rect(250, 100, 150, 50, 10); // Turn OFF Button
  fill(255);
  textSize(32);
  text("BRIGHT",67, 135);
  text("DIM", 293, 135);
  textSize(24);
  fill(33);
  text("Status:", 180, 200);
  textSize(30);
  textSize(16);
  text(ledStatus, 180, 240); // Prints the string comming from the Arduino

  // Make buttons functional
  // If the button "BRIGHT" is pressed 18
  if(mousePressed && mouseX>50 && mouseX<200 && mouseY>100 && mouseY<150){
    myPort.write('1'); // Sends the character '1' over the serial port to the Arduino and that will turn on the LED
    // Highlighs the buttons in red color when pressed
    stroke(255,0,0);
    strokeWeight(2);
    noFill();
    rect(50, 100, 150, 50, 10);
  }
  // If the button "DIM" is pressed
  if(mousePressed && mouseX>250 && mouseX<400 && mouseY>100 && mouseY<150){
    myPort.write('0'); // Sends the character '0' and that will turn on the LED
    stroke(255,0,0);
    strokeWeight(2);
    noFill();
    rect(250, 100, 150, 50, 10);
  }
}
// When hit run, the program will automatically activate the Bluetooth communication
