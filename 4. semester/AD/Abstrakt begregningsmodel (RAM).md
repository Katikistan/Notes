---
Type: note
Author: Filuris
Date: 05.09.22
Status: 📝
---

Fungerer som en abstrakt matematisk model af en computer. Den har en hukommelse i form af et array med n pladser hvori man kan gemme data. Denne computer kan læse eller skrive på de forskellige pladser. Den kan udfører nogle basale instuktioner, det indebærer: læse og skrive fra hukommelsen, udfører aritmetiske operationer som: +,-,*,/,

Den kan udfører logiske operationer: and, or, XOR, not
Den kan lave sammenligninger : = =,<,>,<=,>=,!=.
Den har program flow: if, else, if else, for, while og funktionskald.

Hver instruktion tager konstant tid. 

Hver plads kan indeholde ord i form af bits, eller tal. store tal og karakterer må gemmes i flere pladser.

man kan binde variabler sammen med tal så man kan f.eks. sige at b = 4 hvor at 4 bliver gemt i hukommlsen. Her bliver 8 lagt til b således at b = 9 og dernæst bliver der lagt 9 til 4altså at a+b =13 som nu bliver gemt på a's plads. man ser også at et array kan blive gemt sammenhængende i denne RAM model. 
![[Pasted image 20221018163210.png|200]]![[Pasted image 20221018163057.png|200]]
# Hvad RAM modellen abstraherer væk
- Nogle maskinoperationer gør > 1 ting (SIMD, compare-swap, ...)
- Uafhængige operationer kan ofte køre parallelt
- Hukommelsesadgange er ikke lige hurtige (cache vs hukommelse vs SSD)
- Computere har flere kerner, der kan arbejde parallelt
- Computere har flere typer kerner (typisk CPU(er), GPU, måske FPGA, TPU)
- Store beregninger kan fordeles over mange computere
- ...
- **Fokus i er RAM:** 1-trådet asymptotisk skalérbarhed, ikke optimering, parallelisme, etc.
