Begin with a statement, it could be:
  
3^n + 6n - 1 er deleligt  med 4 for ethvert helt tal n > 0
Derfor ser P(n) således ud:
4 | 3n +6n - 1

Derefter tjekker man basecaset. I dette tilfælde er det 1.
4 | 3^1 + 6 * 1 - 1 <=> 4 | 3 + 6 - 1 <=> 4 | 8
Basecaset kan ses til at holde

Nu laver man en b(n) ud fra P(n). Da det er 3^1 + 6n - 1 vi vil tjekke om det kan divideres med 4 bliver vores P(n) til dette udtryk.

Nu skal man omskrive b(n) = 3^n + 6n - 1 sådan man får et udtryk med b(n) i.
dette gør man ved at rykke rundt på ligningen.
b(n) = 3^n + 6n - 1 <=> 3^n = 

Nu laver vi en udtryk for b(n+1). Dette gør vi ved at indsætte n+1 på n's plads i vores b(n).
3^(n+1) + 6(n+1) - 1
