# OSU Capasitive Touch Keypad

This is a small 2 key capasitive touch keypad for osu that you can build with a few electronics.

This project is intended for use with provided 3d printed models although thease 3d prints are not required for you to use this. (More on this later)

## Requirements

To do this project yourself you will need:

- 1 * Arduino (any varient should work)
- 1 * Breadbord
- 2 * 1MΩ Resistor
- 6 * Jumper wires (preferably long ones)
- 1 * Roll of foil

Optional:

3D printed models (will work without them but the feel is alot better)

A favorite pet, freind, family member, significant other or comfort item of your chosing

## Step 1

Make sure you have all the required software installed correctly before starting

- Python 3.7 https://www.python.org/
- Pip https://pypi.org/project/pip/ 
- pynput (run command "pip install pyinput" in the command prompt after installing pip)
- Arduino IDE https://www.arduino.cc/en/Main/Software
- Python and arduino scripts for this project

## Step 2

Attach a 1MΩ resistor between pins 8,10 and 11,13 or whatever pins you changed the arduino script to use. Then attach a wire to pins 8 and 13. (Thease will connect to the touch pads)

Wiring diagram is provided (note that the capasitors shown are your body when it touches the pins 8 and 13)

## Step 3

- Make sure you change any pin values, com ports or keybindings in both scripts before using them.
- Upload the sketch to the arduino and then run the python script.
- Start OSU! and give it a test by toutching the output wires or attaching the wires to taped down foil.
- At this point you are done if you dont want to use the 3d printed models. Just tape the wires to taped down 2 sheets of taped down foil and have fun!
- If you encounter any problems or unexpected behaviour scroll down to the "Troubleshooting" section

## Step 4

Print the 3d printed models out. I reccomend that you use 0.1mm layer hight for everything althought this is not necessary.

## Step 5

-Place foil over the keys and fit them in to the housing leaving about 2cm toward the front of the housing to attach the wire later.
-I reccomend dabbing a glue stick on the keys first to stop the foil from lifting when you tap.
-Slide the retainer through the housing and over the keys making sure that the foil is still sticking out.
-Finaly, attach the wire to the foil with tape and stick down the assembely with hot glue, routing the wires through the hole in the back

# Troubleshooting

Its not working!!!!:
- Make sure that you are making good contact with the foil
- Make sure the python script is running and the arduino is pluged in
- Check the key bindings are correct
- Check the COM port in the python script is correct
- Make sure that the wires are striped and securly attatched to the foil with good contact
- Make sure that the wires are not lose in the breadboard
- Lower the trigger values in the arduino sketch

Key is pressed and released rapidly while holding down key:
- Make sure that you are making good contact with the foil
- Make sure that the wire is striped and securly attatched to the foil
- Make sure that the wires are not lose in the breadboard
- Lower the trigger values in the arduino sketch

Key permanently pressed down:
- Make sure no wires are touching
- Make sure that the wires are not lose in the breadboard
- Increase the trigger values in the arduino sketch

If you are having issues please feel free to contact me. lynxat0mic02@gmail.com

## Things to do
-Make it so that an arduino nano can fit inside so it is all self contained
