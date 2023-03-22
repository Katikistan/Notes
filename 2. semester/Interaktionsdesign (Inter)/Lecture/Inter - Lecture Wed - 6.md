---
date: 08-02-23
day: Wed
week: 6
year: 2023
type: Lecture
course: Inter
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 6 - 2023]]

# Perception 
Der eksisterer generelle indsiger som vedrører disse to situationer, fx  
- Hvilke psykologiske behov er involveret?
- Hvad oplever brugerne? 
- Hvad og hvordan tænker de involverede?  
- Hvordan bevæger de sig?  
- Hvordan skifter de deres opmærksomhed?  


Disse indsigter kommer i form af teorier, modeller, retningslinier osv.  
- Som vi kan bruge til at forklare empiriske resultater og til at overveje hvordan et design skal se ud  
- Kan vi forudse opmærksomhedsskift mellem vej og telefon?  
- Kan vi designe effektive skærmlayouts for eksperter?  
- Kan vi ræsonere om hvordan teams virker i esport?  

Perception handler om hvordan mennesker går fra sanseindtryk (fx lys  
som rammer øjet) til at opfatte ting (fx se en sommerfugl)

**En simpel men forkert model:** Vi opfatter det som vores sanser stimuleres med

Vi er interesseret i at forstå perception så vi kan evaluere og designe  
bedre brugergrænseflader

Perception er formet af både  erfaring, sammenhæng og mål  OG af vores opmærksomhed  
- Ikke en ren bottom-up proces, dvs. sværere at designe  ()
- Fungerer også som multisensorisk integration på tværs af sanser(vores foventinger former hvad vi ser)
![|200](https://i.imgur.com/Ngv1e1A.png)
gorillaer bold kast, når man bliver bedt om at holde øje med noget hvidt ligger man ikke mærke til goriallen fordi ens perception styre ens opfattelse. 

Sensory information (Bottom up) dominerer i nogle tillfælde , fordi jeg kan i VR stå på en planke og selvom jeg ved at jeg ikke er på en rigtig planke kommer det til at følelse virkeligt
### Erfaring afgør hvor vi kigger
![](https://i.imgur.com/uxXcU4z.png)
### Centrale opgaver i perception
- **Discrimination** The task of telling whether a difference occurs in sensory stimulation  
- **Detection** The task of telling whether an event of interest occurs (or not) in the environment  
- **Recognition** The task of categorizing a stimulus as something  
- **Estimation** The task of estimating a property of an object of event in the environment  
- **Search** The task of localizing an object of interest.
### Eksempel 
- Hvordan skal vi vælge fontstørrelser til tre typer font størrelse?  
- Hvis vi tænker på Discrimination skal vi sørge for at størrelserne nemt kan skelnes fra hinanden  
- Hvis vi tænker på Recognition skal vi
### Bias i perception kan også være nyttigt

## Gestalt principper - a theory of perception 
Syv principper:  
- Proxmity 
- similarity
- continuity
- closure
- symmetry
- figure/ground 
- common fate
Man ser grupper 
![|300](https://i.imgur.com/GqPoz8Y.png)
her ser man formentligt 6 grupper af 2
![|300](https://i.imgur.com/ISrruPQ.png)
Nærhed(proximity) vinder over farvekodning derfor failer de på gestalts love
Nærhed er meget stærkt 
## Loven om nærhed 
### Relater elementer
Skab struktur med  
- klynger tæt på hinanden  
- mellemrum (eng. white space)
![|350](https://i.imgur.com/iKqi7hF.png)
### Layout med gitter (eng. grid)
![|400](https://i.imgur.com/LCqW9fU.png)
![400](https://i.imgur.com/0BCz7VA.png)
![|350](https://i.imgur.com/Df5XQve.png)
**Parush, Nadir & Shtub (1998):**
- 6 forskellige skærmbilleder, baseret på alle kombinationer af  
	- alignment, grouping, size, local density (+/-)  
- 75 forsøgspersoner prøvede flere opgaver på hvert skærmbillede  
- Alignment og grouping har effekt på tidsforbrug og præferencer
# Fitts law - motor control 
- Modellerer bevægelser mod et mål (fx et ikon, en menupunkt)  
- Kan bruges til  
	- At modellere den tid det tager at ramme et mål  
	- At komme på designs som mindsker tiden det tager at ramme et mål  
![|350](https://i.imgur.com/4spIUYE.png)
- Fire afstande 2, 4, 8, 16 tommer
- Fire bredde 0.25, 0.5, 1 2 tommer
![|400](https://i.imgur.com/ZJWaEjS.png)

![|400](https://i.imgur.com/uECPkmf.png)
```math
||{"id":709887695761}||
I D=\log _2(1+ \frac{D}{W})
```
```math
||{"id":159402039833}||

MT = a + bID
```
**MT:** movement time  
**a & b:** input device-dependent  constants  
**D:** distance to the target  
**W:** width of the target
![|200](https://i.imgur.com/bE52Wdl.png)
![|300](https://i.imgur.com/ruLHAl5.png)
![|300](https://i.imgur.com/X5SUeHO.png)
Fitts’s lov holder på tværs af mange områder  

Bevægelsestiden er givet ved denne formel:
$$MT = a+b ~~log_2(1+\frac{D}{W})$$
### hvad kan man så bruge det til:
$a=0.028s$
$b = 0.112s/bit$
How long does it take to select a target that is 21 inch away and 3 inch wide?
$MT = 0.028+0.112*log_2(1+\frac{21}{3}) = 0.364ms$
## Expandable menus
## Drag’n’pop (Baudisch et al. 2003)
## Hvad betyder det for interaktionsdesign
![|350](https://i.imgur.com/qCEoMJg.png)
## Steering law
- Samme ide som Fitts’s lov men når vi skal holde os inden for rammer, ikke kun ramme målet  
- Fitts’s lov bruges til at pege, Steering law fx til at tegne
$$T_{msec}=a+b(\frac{d}{s})$$
a, b = empirically-derived constants  
d = distance, s = width of tunnel  
ID (Index of Difficulty) = (d/s)  
Index of Difficulty now linear, not logarithmic  
(i.e. steering is more difficult then pointing)
![|200](https://i.imgur.com/2H8jxYW.png)

## Hicks-Hyman Lov
- Kan anvendes for beslutninger mellem lige sandsynlige alternativer  
- Beslutningstiden er givet som  $T = a + b ~~ log_2(n + 1)$  
- Konstanterne kan for eksempel være $a = 200ms$ og $b = 150ms$
**Implikationer:** Menuer skal være brede snarere end dybe
