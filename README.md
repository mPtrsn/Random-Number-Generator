# Random-Number-Generator
Der Code zum Ausgabe einer Zufallszahl mithilfe eines Arduinos
## Benutzer-Dokumentation

1. Den Arduino mit den LED's und dem Button verbinden. (LED's: Pins 13-7) (Button: Pin 2)
2. Den Arduino mit Strom verbinden.
3. Auf die Start Animation warten.
4.1. Den Knopf drücken, um eine Zufallszahl zu Würfeln und anzeigen zu lassen.
4.2. Den Knopf halten, um die Animation erneut abzuspielen.

  **Zum Beenden die Stromverbindung trennen.**
  
  
  
## Entwickler-Dokumentation
Der Code ist in drei Module geteilt.

1. Config
  - beinhaltet alle includes
  - und definiert das Ausgabeformat (siehe unten)
  - definiert alle Pins der LED's
  - definiert den Eingangspin und die zu haltene Zeit des Button
  
2. Das Ausgabeformat
  (enthalten: die Ausgabe in einem Würfelmuster)
  - ist eine c++ Klasse
  - private enthält die Variablen für die verschiedenen LED Pins
  - public muss enthalten:
    construcktor <className>( 7 ints for the LED-Pins) -> 
    void doOutput(int num)  -> gibt die übergebene zahl aus 
    void doAnimation()      -> gibt die Start animation aus
    void doReset()          -> schaltet alle LED's aus
  
 3. .ino Datei
  - erstellt das Object des Ausgabeformates
  - setzt die PinModes der LEDs (Output) und des Buttons (Input)
  - setzt den Randomseed für die Zufallsfunktion
  - spielt die Startanimation ab
  - im loop wird der Button ausgelesen und bei einem Knopfdruck kürzer als die definierte Zeit eine Zahl generiert und angezeigt, sonst die Animation abgespielt
  - void generateNumber nutzt die eingebaute Zufallsfunktion von Arduino für eine Zufallszahl
  
  
  Um die LEDs in der Standartausgabe zu benutzen, müssen die LED's an den Pins 13- 7 angeschlossen und mit jeweils einem Widerstand mit GND verbunden werden. Der Button muss mit Strom an Pin 2 angeschlossen werden und auch mit einem PullDown Widerstand an GND angeschlossen werden muss.
  
    
