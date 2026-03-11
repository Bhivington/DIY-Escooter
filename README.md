# DIY-Escooter
A DIY E-Scooter designed for modulartity and customization by Shiv Khatri Jason Louie and Terry Yu as part of a UCR senior design project under principal investigator Dr.Ahmad Mohammadpanah Foroutaghe  

Design report can be found at
https://docs.google.com/document/d/161jiW37B_JrqkYkJVltfunsu745c3fMzF1_8elbnEi8/edit?usp=sharing
# Overview
This project includes the files to recreate what we have done.
The project was modeled in AutoDesk Fusion and fusion archive titled Final Assembly 175c.f3z is included in the repository. 

This should serve as a jumping off point to create a scooter that is made to your own needs and specifications.
Modules can be added or removed depending on your needs.  

There is a final design report in there one can find the design verification section, this section illustrates how one can make modifications and verify them to ensure saftey.
The general idea is once a design is made, to run FEA stress analysis on the design to ensure saftey requirements are met under the load conditions specified in the paper.
An arduino is installed in the design to allow for expansion electronically on the project. PWM pin 3 was chosen to be the control pin for the ESC. We have opted to emulate the throttle signal that came with the Motor kit as a demonstration of how PWM can control the motor, this control loop can be modified to have additional inputs and outputs to control various things added to the system as well as control the motor in various ways beyond the throttle input.
The included code works for an Arduino R4 and any arduino suppourted by the default PWM.h library. Another method of fast PWM may be needed if using a differnt micro controller.
The final design report goes over how the scooter is assemebled and manufactured.
