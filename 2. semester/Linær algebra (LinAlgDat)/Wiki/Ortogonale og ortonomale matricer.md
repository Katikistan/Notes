---
date: 17-05-23
day: ons
week: 21
year: 2023
type: Wiki
course: LinAlgDat
status: open
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 21 - 2023]]

# Ortogonalitet
To vektorer kaldes ortogonale  (vinkelrette) hvis $\mathbf{u} \cdot \mathbf{v}=0$, her siger man at $u \perp v$
![](https://i.imgur.com/onoi2a2.png)
![](https://i.imgur.com/pSu554M.png)

![](https://i.imgur.com/BGTAPI4.png)
**For at checke ortogonalitet af to underrum, er det nok at checke om de to frembringersæt er ortogonale på hinanden.**

$$
\operatorname{null} \mathbf{A} \perp \operatorname{row} \mathbf{A} \text {. }
$$
## Prik produkt
![](https://i.imgur.com/DGDi14m.png)
## Norm
**HUSK KVADRATRODEN DIN NØD!**
![](https://i.imgur.com/q39ArzK.png)
En enhedsvektor er en vektor hvor $||v||= 1$

En vektor kan gøres til en enhedsvektor:
$$
\mathbf{u}^{\prime}=\frac{\mathbf{u}}{\|\mathbf{u}\|}
$$
![|400](https://i.imgur.com/vvVyxgC.png)
## Euklidisk afstand (afstand mellem vektorer)
![](https://i.imgur.com/xHYNWpv.png)
## Vinkel mellem vektor
![](https://i.imgur.com/EXsCvq8.png)
![](https://i.imgur.com/wPfNl3V.png)

# Ortonormalitet
![](https://i.imgur.com/Uz7umvO.png)
## Ortonormale Baser
Ved at normere vektorer i en ortogonal base kan man bestemme en ortonormal base. 
![](https://i.imgur.com/UwkoJyx.png)
![](https://i.imgur.com/uHJkzln.png)
![](https://i.imgur.com/pPNOjej.png)
![](https://i.imgur.com/dooanW0.png)
Hvis du skal bestemme en ortonomal basis bruger man graham schmidt
# Ortogonal Projektion(matricen), komponent og spejling
**Når Man arbejder med en ortonormal basis er længden af vektoren 1, derfor kan man fjerne divisionen.** 
man får da:
$proj_\mathcal{u}(v)=(v \bullet u_{1})u_1+(v\bullet u_{k})u_k$
![](https://i.imgur.com/wSindBU.png)
$$
\text { Pointe: } \mathbf{v}=\operatorname{proj}_{\mathcal{U}}(\mathbf{v})+\operatorname{comp}_{\mathcal{U}}(\mathbf{v}) \quad \text { og } \quad \operatorname{proj}_{\mathcal{U}}(\mathbf{v}) \perp \operatorname{comp}_{\mathcal{U}}(\mathbf{v}) \text {. }
$$
Det er v der bliver projecteret ned i planen
![](https://i.imgur.com/e6Jc1LJ.png)
projectionen er den der har kortest afstand til v af alle vektorer i underummet u.
## Projektionsmatricen
**hvis du få givet to ortogonale vektorer skal du blot normerer dem. Så bliver det nemt at finde en protejectionsmatrice** 
![](https://i.imgur.com/uI4yyAZ.png)
![](https://i.imgur.com/hCpqOpx.png)
![](https://i.imgur.com/XVRnpq1.png)
# Ortogonale matricer
![](https://i.imgur.com/zJLVGzW.png)
![](https://i.imgur.com/r0k6jIN.png)
![](https://i.imgur.com/mXE2fUM.png)
![](https://i.imgur.com/ygqJkle.png)
## Projektions matricen
![](https://i.imgur.com/5IdUcG7.png)
# Ortogonale lineære transformationer
![](https://i.imgur.com/tmrSTvq.png)
Theorem 4.7 giver, at en ortogonal lineær transformation T opfylder:
$$
\|T(\mathbf{x})\|^2=\|\mathbf{Q} \mathbf{x}\|^2=\mathbf{Q x} \cdot \mathbf{Q x}=\mathbf{x} \cdot \mathbf{x}=\|\mathbf{x}\|^2
$$
dvs. T bevarer norm / længde af vektorer, så T er en isometri

Typiske eksempler: Rotationer og spejlinger.
# Ortogonalt komplement (ortogonalt underum)
Definition 4.11 (Ortogonalt komplement)
Lad $\mathcal{U}$ være et underrum af $\mathbb{R}^n$. Det ortogonale komplement $\mathcal{U}^{\perp}$ til $\mathcal{U}$ består af samtlige vektorer som er ortogonale på alle vektorer i $\mathcal{U}$, dvs
$$
\mathcal{U}^{\perp}=\left\{\mathbf{v} \in \mathbb{R}^n \mid \mathbf{v} \cdot \mathbf{u}=0 \text { for alle } \mathbf{u} \in \mathcal{U}\right\}
$$
![|300](https://i.imgur.com/JFqtFmx.png)
![](https://i.imgur.com/4TvRAKg.png)
![](https://i.imgur.com/nGQisn8.png)
man kan altså bestemme nul rummet og det vil være det ortogonale rækkerum, man kan også transponer nulrummet
**Det virker til at den her altid er fortrukket med tallene, hmmm... ROTTER!**
![|300](https://i.imgur.com/w95NYAD.png)
## Eksempel
![|400](https://i.imgur.com/9mSkx1t.png)
![|300](https://i.imgur.com/U7B2WkQ.png)
![](https://i.imgur.com/T9aa2Ef.png)
![](https://i.imgur.com/hg32pZk.png)
$\text { Hvis man samler baserne for } \mathcal{U} \text { og } \mathcal{U}^{\perp} \text { så fås en basis for } \mathbb{R}^n \text {. }$
# Gram–Schmidt processen og QR-faktorisering
## Gram–Schmidt processen
Givet en (almindelig) basis for U, er der så en metode til at konstruere en ortonormal basis for U ? Ja! Brug Gram–Schmidt processen.
![](https://i.imgur.com/CEf0TTq.png)
## QR-faktorisering
Ved at holde lidt nøjere regnskab med hvad der foregår i Gram–Schmidt processen kan man opnå følgende:
![](https://i.imgur.com/aYbFzSZ.png)
![](https://i.imgur.com/xrgNK0B.png)
![](https://i.imgur.com/xbFOdbi.png)
![](https://i.imgur.com/s5ix5Os.png)

# Mindste kvadraters metode
![](https://i.imgur.com/WzzgsKV.png)
