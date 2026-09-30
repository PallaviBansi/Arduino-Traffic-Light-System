# Arduino Traffic Light System

## Project Description

The Arduino Traffic Light System is a simple embedded system project that simulates a basic traffic signal using three LEDs.

The system uses:
- Red LED for STOP
- Yellow LED for WAIT
- Green LED for GO

The LEDs are controlled by an Arduino according to predefined timing intervals.

## Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| Resistor | 3 |
| Breadboard | 1 |
| Jumper Wires | As required |

## Pin Configuration

| LED | Arduino Pin | Function |
|---|---:|---|
| Red | 8 | STOP |
| Yellow | 9 | WAIT |
| Green | 10 | GO |

## Working

The traffic light operates in the following sequence:

1. Red LED turns ON for 5 seconds.
2. Yellow LED turns ON for 2 seconds.
3. Green LED turns ON for 5 seconds.
4. The sequence repeats continuously.

Only one traffic signal LED remains ON at a time.

## Software

- Arduino IDE
- Embedded C/C++
- Arduino Uno

## Project Objective

The objective of this project is to demonstrate basic Arduino programming, digital output control, timing functions, and a simple real-world traffic signal application.

## QA and Issue Tracking

GitHub Issues are used to identify, document, discuss, and resolve software and hardware-related problems in the project.

QA issues will be tracked with:
- Problem description
- Severity
- Root cause
- Proposed solution
- Testing
- Resolution

## Project Status

Initial Arduino traffic light implementation completed.

QA testing and issue tracking are in progress.
