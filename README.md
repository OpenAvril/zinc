# Zinc Insulate Neural Chip Open Source Package:
---
---
## Binary Neural Inteligence. ***UNDER DEVELOPMENT***

---
### BNI : zinc_bni_bnn_design_suite. ***UNDER DEVELOPMENT***

  - 3x Zones: Id, Ego, SuperEgo.
  - 2x Hemisphores; Left, Right. per Zone, and 'x' number of Junctions to all parts of the Hemisphore.
  - [(x/2)^2 - (x/2)] number of Busses.

---
### In A Unified Image
- **Id**                  : binary neural algorithms. : left hemisphore as self requested tasks, right hemisphore as communicated tasks; for 'slif_epicentre'.
- **Ego**                 : binary neural controls.
- **Super-Ego**           : binary neural Directive Feng Shui Karmas.


---
### Id : binary neural algorithms.
slif_epicentre INJECTION paths:
  - left hemisphore as self requested tasks. 
  - right hemisphore as communicated tasks.

---
### Ego : binary neural controls.
  - BOOLEAN states of "desire" = 'active', 'idle'., for all 'praise-Id' events.

---
### SuperEgo: binary neural Directive Feng Shui Karmas.
  - Scorpio - Trust in Truth.
  - Sagittarius - Intellect in Intuition.
  - Capricorn - Expression in Perception.
  - Aquarius - Wisdom in Thought.
  - Pisces - Flexible in Adapting.
  - Aries - Assertive in Motivation.
  - Taurus - Power in Momentum.
  - Gemini - Adaptable in Intellect.
  - Cancer - Comfort in Emotion.
  - Leo - Manifestation in Thought
  - Virgo - Interlect in Emotion.
  - Libra - Balance in Harmony.

[PSUDOCODE Repository : Binary Neural Intelligence - Java.](https://github.com/OpenAvril/Binary-Neural-Intelligence)


---
---
## zinc : zinc::.*
---
### MutexQue : zinc_mutex_que.
  
Exclusive Cohesion Mutex Queue:   

CLIB Request, Wait, Write-Read for 'ThreadId' at 'DataCluster'.

Via concurrency, 'zinc' and 'slif' libraries double the combined input and output efficiency with three "Threads; Input, Output, Task." on Raspberry Pi & Arduino via respectivly. 

---
### Stemisphore : zinc_stemisphore. ***UNDER DEVELOPMENT***

System Bussing for Zinc Neural Hemisphoric Chip:

CLIB Concurrent System Bussing.

Open Concurrent SCADA.

Triple MutexQue into a set/get data buffer of bus for route of paired junctions.

MainStreamBussing: CLIB Compound of ExclusiveCohesionMutexQueue(s). An array of a single Bus with route array of Stations. A single Bus deploying an ExclusiveCohesionMutexQueue('AccessId_A=StationId','DataClusterId_A=BusId'), and each Station deploying an ExclusiveCohesionMutexQueue('AccessId_B','DataClusterId_B=StationId').

---
### LaunchQue : zinc_launch_que.

Left Hemisphore Task Launcher: 

CLIB Request, Wait, Launch for 'ThreadId' at Server-Client.

Concurrency; Core, Post-Process.


---
### LeftHemisphore : zinc_epicentre. ***TEMPLATE for user Compilation*** ***UNDER DEVELOPMENT***
  
Left Hemisphore Logic Task Result Deducer:      

Consumer of spare threads.

Left Hemisphore Logic Task Result Deducer: CLIB Concurrent Server with independent task threads and IO wrapper.
  
**TEMPLATE for user Compilation**

---
* ThreadsLog: ***UNDER DEVELOPMENT***
  
Neural Chip Thread Logging:
     
CLIB Console output via MutexQue, DataCluster is 'Console'.

---
* RightHemisphore: ***UNDER DEVELOPMENT***
  
Wi-Fi hi and low bandwidth direct injection to a independent thread 'access-id (ThreadId)' of stemisphore.


---
---
---
# Using.
## LINUX Ubuntu.
**version:** Ubuntu 24.04.4 LTS.

---
---
## CLion.
**Version:** 2026.1.2.

---
---
## Dependencies.
- [Open Source suite install script for Silicon Life Engineering.](https://github.com/MEngSc-Electrical-ComputerSystems/Linux_bash_scripts/blob/main/freshinstall.sh)

### Ubuntu Terminal.
````
sudo apt install git
````

````
sudo apt install build-essential
````

````
sudo apt install cmake
````

````
sudo apt install snapd
````

````
sudo snap install clion --classic
````

---
### CLion plugins.
- Native Build Tools.
- Cmake.
- CLion C and C++.

---
### CLion: Clone from GuitHub.
 - File - > New -> Project from Version Control.
 - URL : user entry "https://github.com/OpenAvril/zinc"

---
---
---
# Building - Compiler Terminal Commands.

*** Load Root CMake Project ***

````
cmake -B build
````
````
cmake --build build
````

*** run TESTBENCH ***

---
---
---
# Implementation.

---
---
## How To Guide - Flow From Client I - Server - Client O.

---
### Thread(s):

  (1)A **Binary Neural Intellijence** in || with the following, while training and doing tasks.
  
// Networking I and O.

  (2)B **Networking** into Core_Injection, double loop for I and O 1028 bytes,
  
// Shell - Server_Assembly.

  (3)C **Input_Scanner** *server interface input* ***(concurrentTask(s)_5)*** into Core_Injection, I data for class Input,
  
  (4)C **Core_Injection**,
  
// zinc_epicentre.

  (5)D **concurrentTask(s)_1**,
  
  (6)D **concurrentTask(s)_2**,
  
// Shell - Server_Assembly.  

  (7)C **Core_Extraction** into Ouput_Draw O data for class Output || Networking O 1028 bytes,
  
  (8)C **Ouput_Draw** *server interface output* ***(concurrentTask(s)_6)***,
  
// SIMULATION I and O.

  (9)E **SIM_IN** ***(concurrentTask(s)_3)***,
  
  (10)E **SIM_OUT** ***(concurrentTask(s)_4)***.


---
### Data Cluster(s): via Thread Options as 'AcessId'.

thread => **SIM_IN**

 (1) **SIM_Input_SAMPLE** *(HandleId_SIM_Input_Sample_R-W-Buffer = MutexQue::generateHandle())*,

thread => ***Input_Scanner*** || ***NETWORKING***

 (2) **Input_Sample_Buffer** *(HandleId_Input_Sample_R-W-Buffer = MutexQue::generateHandle())*,

thread => ***Core_Injection***
 
 (3) **zinc_epicentre : Stack_of_Input** *(HandleId_Stack_of_Input_R-W-Buffer = MutexQue::generateHandle())*,

thread => ***CONCURRENT***
 
 (4) **zinc_epicentre : Stack_of_Output** *(HandleId_Stack_of_Output_R-W-Buffer = MutexQue::generateHandle())*,

thread => ***Core_Extraction***,
 
 (5) **Output_Sample_Buffer** *(HandleId_Output_Sample_R-W-Buffer = MutexQue::generateHandle())*,

thread => ***Ouput_Draw*** || ***NETWORKING***
   
 (6) **SIM_Output_SAMPLE** *(HandleId_SIM_Output_Sample_R-W-Buffer = MutexQue::generateHandle())*,

thread => **SIM_OUT**

---
---
## Wrapper Imports and Native IO.  ***UNDER DEVELOPMENT***

---

Copyright (c) 2026 King Brenton James Maddocks BEng(CompSys) - Emperor of Queensland to the King of the Commonwealth (echelon three).

---
---
---
