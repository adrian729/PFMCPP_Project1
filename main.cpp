#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.

 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.


        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: toaster
//  action 1: burn bread
toaster.burn()
//  action 2: ping (make sound)
toaster.ping()
//  action 3: throw bread
toaster.throw()
//  2)
//  Noun: keyboard
//  action 1: send key pressed signal
keyboard.sendKeySignal()
//  action 2: illuminate option led
keyboard.illuminateLed()
//  action 3: connect via bluetooth/usb
keyboard.connect()
//  3)
//  Noun: mouse
//  action 1: detect coordinates change
mouse.detectCoordinatesChange()
//  action 2: send click/movement signal
mouse.sendSignal()
//  action 3: connect via bluetooth/usb
mouse.connect()
//  4)
//  Noun: clock
//  action 1: move hand
clock.moveHand()
//  action 2: annoy with alarm
clock.alarm()
//  action 3: make tick sound
clock.tick()
//  5)
//  Noun: computer screen
//  action 1: paint image on itself
screen.paint()
//  action 2: show selected input (example: screen with 2 hdmi inputs)
screen.showSelectedInput()
//  action 3: illuminate more (more brightness)
screen.illuminateMore()
//  6)
//  Noun: soldering station
//  action 1: heat tip
solderingStation.heat()
//  action 2: show temperature
solderingStation.showTemperature()
//  action 3: consume power
solderingStation.consumePower()
//  7)
//  Noun: audio interface
//  action 1: send sound to headphones
audioInterface.sendSoundToHeadphones()
//  action 2: process sound from input
audioInterface.processInputSound()
//  action 3: illuminate gain leds
audioInterface.illuminateGain()
//  8)
//  Noun: Boss BD-2
//  action 1: change sound level
bd2.changeLevel()
//  action 2: change sound tone
bd2.changeTone()
//  action 3: change sound gain
bd2.changeGain()
//  9)
//  Noun: fridge
//  action 1: cool compartment A
fridge.coolCompartmentA()
//  action 2: freeze compartment B
fridge.freezeCompartmentB()
//  action 3: illuminate compartment
fridge.illuminate()
//  10)
//  Noun: shower
//  action 1: spray burning water
shower.sprayBurningWater()
//  action 2: spray frozen water
shower.sprayFrozenWater()
//  action 3: spray water from wrong head
shower.throwWaterFromHead()


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
