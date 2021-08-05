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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       bomb
//  action 1:   the bomb explodes
bomb.detonate();
//  action 2:   the bomb arms
bomb.arm();
//  action 3:   the bomb disarms
bomb.disarm();
//  2)
//  Noun:       phone
//  action 1:   the phone dials the number on display
phone.dialDisplayedNumber();
//  action 2:   the phone terminates the call
phone.hangup();
//  action 3:   the phone sends the text message
phone.sendTxt(); 
//  3)
//  Noun:       dog
//  action 1:   the dog takes a drink
dog.drink();
//  action 2:   the dog eats any nearby food
dog.eat();
//  action 3:   the dog makes the feces
dog.makePoop(); 
//  4)
//  Noun:       car       
//  action 1:   the car starts the engine
car.startEngine();
//  action 2:   the car opens the trunk
car.openTrunk();
//  action 3:   the car applies the brakes
car.applyBrakes(); 
//  5)
//  Noun:       tv
//  action 1:   the TV changes current channel
tv.changeChannel();
//  action 2:   the TV mutes the sound
tv.mute()
//  action 3:   the TV turns off
tv.turnOff(); 
//  6)
//  Noun:       bird
//  action 1:   the bird takes off in flight
bird.fly();
//  action 2:   the bird builds a nest
bird.makeNest();
//  action 3:   the bird eats any nearby worm
bird.eatWorm(); 
//  7)
//  Noun:       guitarplayer
//  action 1:   guitarplayer plays face-melting solo
guitarplayer.playSolo();
//  action 2:   guitarplayer distorts face because badass
guitarplayer.makeWierdFace();
//  action 3:   guitarplayer antagonizes keyboard player
guitarplayer.talkSmackToKeyboardPlayer(); 
//  8)
//  Noun:       keyboardplayer
//  action 1:   keyboardplayer unplugs guitarplayer from amp
keyboardplayer.unplugGuitarPlayer();
//  action 2:   keyboardplayer evades fists from guitarplayer
keyboardplayer.takeEvasiveAction();
//  action 3:   keyboardplayer protects expensive gear from melee
keyboardplayer.protectGear();
//  9)
//  Noun:       drummer
//  action 1:   drummer strikes drum head
drummer.bangDrum()
//  action 2:   drummer twirls sticks around fingers
drummer.twirlSticks();
//  action 3:   drummer throws sticks out to crowd
drummer.throwSticksIntoAudience();
//  10)
//  Noun:       teslaModelS
//  action 1: enable extended range power option         
teslaModelS.enableExtendedRange();
//  action 2:   activate autonomous driving mode
teslaModelS.activateAutoDrive();
//  action 3:   call 911 and delete logs
teslaModelS.reportAccidentAndPreserveEvidence();

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
