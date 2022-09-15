<h1>On-Demand-Traffic-Light-Control-System</h1>
  <p>The project is an on deman trffic light control system that contols both the traffic and pedestrian lights.</p>
  <h2>Project Description</h2>
    <h3>Normal Mode</h3>
      <p>
       <br>Cars lights will be changed every five seconds starting from green then yellow then red then yellow then green.</br>
       <br>The cars yellow light will blink for five seconds before moving to green or red lights.</br>
      </p>
    <h3>Pedestrian Mode</h3>
      <p>
       <br>Change from normal mode to pedestrian mode when the pedestrian button is pressed.</br>
       <br>If pressed when the cars red light is on, the pedestrian green light and the cars red lights will be on for five seconds, this means that pedestrians can              cross the street while the pedestrian green light is on.
       </br>
       <br>If pressed when the cars green light is on or the cars yellow light is blinking, the pedestrian red light will be on then both yellow lights start to blink            for five seconds, then the cars red light and pedestrian green light are on for five seconds, this means that pedestrian must wait until the green light is            on.
       </br>
       <br>At the end of the two states, the cars red light will be off and both yellow light start blinkirlg for 5 seconds and the pedestrian green light is still                on.
       </br>
       <br>After the five seconds the pedestrian green light will be off and both the pedestrian red light and the cars green light will be on. </br>
       <br>Traffic lights signals are going to the normal mode again.</br>
      </p>
  <h2>Project Specifications</h2>
    <p>
     <br>As a pedestrian when I make a short press on the crosswalk button while the cars green light is on and the pedestrian red light is off, I will wait for the            yellow lights to blink for five seconds then the cars red light is on and the pedestrian green light is on for five seconds, so that I can cross the street.        </br>
     <br>As a pedestrian when I make a short press o the crosswalk button while the cars yellow light is blinking and pedestrian red light is on, I will wait for all            yellow lights to blink for five seconds then the cars red light is on and the pedestrian green light is on for five seconds, so that I can cross the street.        </br>
     <br>As a pedestrian when I make a short press on the crosswalk button while the cars red light is onand pedestrian green is on, I expect nothing to be done.</br>
     <br>As a pedestrian when I make a double press on the crosswalk button, I expect that the first press will do the action and nothing to be done after the second            press.
     </br>
     <br>As a pedestrian when I make a long press on the crosswalk button, I expect nothing to be done.</br>
    </p>
  <h2>Project Components</h2>
    <h3>Micrcontroller</h3>
      <p>
       <br>- ATmega16</br>
      </p>
    <h3>Drivers</h3>
      <p>
       <br>- GPIO</br>
       <br>- Timres</br>
       <br>- External Interrupts</br>
      </p>
    <h3>Hardware</h3>
      <p>
       <br>- One push button connected to INT0 pin for pedestrian.</br>
       <br>- Three LEDs for cars - Grren, Yellow and Red connected to PORTA, PINs 0, 1 and 2.</br>
       <br>- Three LEDs for pedestrians - Grren, Yellow and Red connected to PORTA, PINs 3, 4 and 5.</br>
      </p>
  <h2>Files</h2>
    ![name-of-you-image](https://![image]([https://user-images.githubusercontent.com/104625612/190288043-8048d7e2-eaf0-40bb-930c-b5d2f8f618f7.png)](https://github.com/amremad19801/On-Demand-Traffic-Light-Control-System/blob/main/Schematic.png?raw=true))
  <h2>Files</h2>
    <p>main.c : This file contains the code of the project.</p>
