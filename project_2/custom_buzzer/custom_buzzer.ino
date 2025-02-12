// Project 2, Part 3: Custom buzzer tune. The purpose of this project was to create a custom buzzer tune. 
// We used chat GPT to generate the notes and note durations necessary to create twinkle twinkle little star with the buzzer

// Group Members: Josh Wild, Dayne Newman
// Group Number: 14 (not sure this is what the bottom of the breadboard said)
// Date: 2/11/2025
// Code written by: Both team members with help from ChatGPT

const int buzzer = 9;       // Pin number for buzzer
int noteDuration = 0;       // Declaration of variable to store the duration of a note
int pauseBetweenNotes = 0;  // Declarataion of variable to store the length of the delay between notes

// Array of note pitches
int notes[] = {
  262, 262, 392, 392, 440, 440, 392, 
  349, 349, 330, 330, 294, 294, 262, 
  392, 392, 349, 349, 330, 330, 294, 
  392, 392, 349, 349, 330, 330, 294, 
  392, 392, 349, 349, 330, 330, 294, 
  262, 262, 392, 392, 440, 440, 392  
};

// Array of note durations where the index of this array corresponds to the same index in the notes array. For example
// noteDurations[3] corresponds to the duration of note notes[3]
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 2, 
  4, 4, 4, 4, 4, 4, 2, 
  4, 4, 4, 4, 4, 4, 2, 
  4, 4, 4, 4, 4, 4, 2, 
  4, 4, 4, 4, 4, 4, 2, 
  4, 4, 4, 4, 4, 4, 2  
};

void setup() {
  // Initialize the buzzer pin to OUTPUT mode
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Loop over each of the notes in the notes array
  for (int thisNote = 0; thisNote < 42; thisNote++) {
    noteDuration = 1000 / noteDurations[thisNote];  // Calculate a more standardized value for the note duration that the tone function can use better
    tone(buzzer, notes[thisNote], noteDuration);  // Play the note on the buzzer for the calculated duration
    pauseBetweenNotes = noteDuration * 1.30; // Pause between notes 1.3x the length of the note
    delay(pauseBetweenNotes);   // Delay by the calculated pause between notes to let a note play for the correct amount of time
    noTone(buzzer); // Stop sound after each note
  }
  delay(2000); // Pause between repetitions of the song
}

