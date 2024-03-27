# Log of PiPico Workshop

## day one

At 10:00 we met in the classroom and started with introductions.
The two workshops teachers and staff were introduced and students were encouraged to introduce themselves and their background with flowery adjectives.
Then we played a game, in which one participant had to leave the room and everyone would pick a person for them to guess. The person would then come back in and ask yes or no questions to figure out who they were.
Anna made a point against bullying and for being nice to each other. We had a round of students giving each other compliments.
Afterwards there was a quiz to test the students about general knowledge about tech trivia.
at 13:00 we had luch at Rathauskeller.
At 14:00 we were back in the classroom and had students make a decision on which workshop (Game Development with scratch or Microcontroller programming with Python) they wanted to attend.
Anna and I gave a brief outline again on what the students could expect from either workshop.
Around 10 students wanted to join the Microcontroller workshop -- it was therefore decided to switch rooms and have the larger group in the bigger room.

It was 14:15 already when we could start with the first PiPico session.
The first step was to download the Thonny IDE. Also, the participants plugged their PiPicos to the breadboard. I gave a short intro to how the breadboard is wired up.
I explained what a REPL is and how to use it with Thonny.
Most students didn't have any former experience with Python, I gave a quick primer on variables and data types.
The session ended at 15:00.

## day two

Between sessions, some students had decided to join the other workshop. There was some indecision whether we should switch rooms, but the PiPico participants still outnumbered the Scratch crew by one person, so it was decided to keep the status quo.
I think it was the right decision, as we need the space for hands-on electronics work in addition to the programming.

We started right where we left off the previous day: Students should write a function (what is a function?) that would calculate the amount of marble blocks needed to build a swimmingpool in minecraft.
We were now ready to actually connect the Picos via USB and install the MicroPython firmware.

With that out of the way we wrote some code to make the onboard LED blink.

Next, students should do the same with an external LED.
I gave some explanation on how LEDs work (Cathode, Anode) and how they need a limiting resistor to prevent them from burning out. 
We took a look at our resistors and students tried to find out the resistance by consulting a sheet with the color code. Then we used a multimeter to confirm the actual value.
Everybody then wired up LEDs and resistors to the Pico and wrote a program to make it blink.
Some explanation on while loops and the sleep function was given.

## day three

Today, it was planned to introduce soldering to the students, however there was a change in our room allocation: The Scratch workshop was moved in with us and the remaining space would have been a bit cramped for soldering.
Instead, I introduced some more electronics components to the students: buzzers, buttons and seven segment displays.
The participants are starting to develop their own ideas for a final project.
We have several "Traffic light" projects in the making; One student is making a counter with the seven segment display; And one is working on a morse-encoder using the buzzer.
