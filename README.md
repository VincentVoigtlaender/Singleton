# Singleton
Codebase des Singleton-Vortrag

### Arbeiten mit Multi-Threading in Eclipse

- Damit das Projekt erfolgreich gebaut werden kann, muss in Eclipse unter:

  `Project` -> `Properties` -> `C/C++ Build` -> `Settings` -> `GCC C++ Linker` -> `Libraries`

  in der oberen Liste (`Libraries (-l)`) der Eintrag "pthread" hinzugefügt werden.
  
  

- Damit das Mulitthreading auch tatsächliche Auswirkungen hat, muss in "VirtualBox" bei der
  "MRT Virtual Appliance" unter

  `Ändern` -> `System` -> `Prozessor`

  die Anzahl an Prozessoren
  auf mindestens 2 erhöht werden.
