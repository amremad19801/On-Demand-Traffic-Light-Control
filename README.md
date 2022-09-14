<h1>On-Demand-Traffic-Light-Control-System</h1>
  <p>The project is a stop watch system that controls the stop-watch time and displays it on 7-segments.</p>
  <h2>Project Description</h2>
    <h3>Normal Mode</h3>
      <p>
       <br></br>
       <br></br>
       <br></br>
       <br></br>
      </p>
    <h3>Pedestrian Mode</h3>
      <p>
       <br></br>
       <br></br>
       <br></br>
       <br></br>
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
       <br>ATmega16</br>
      </p>
    <h3>Drivers</h3>
      <p>
       <br>- GPIO</br>
       <br>- Timres</br>
       <br>- External Interrupts</br>
      </p>
    <h3>Hardware</h3>
      <p>
       <br>one push button connected to INT0 pin for pedestrian.</br>
       <br>Three LEDs for cars - Grren, Yellow and Red connected to PORTA, PINs 0, 1 and 2.</br>
       <br>Three LEDs for pedestrians - Grren, Yellow and Red connected to PORTA, PINs 3, 4 and 5.</br>
      </p>
  <h2>Files</h2>
    <p>main.c : This file contains the code of the project.</p>
