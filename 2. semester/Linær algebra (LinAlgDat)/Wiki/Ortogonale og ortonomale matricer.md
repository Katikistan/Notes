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
# Ortogonal Projektion
Når Man arbejder med en ortonormal basis er længden af vektoren 1, derfor kan man fjerne divisionen. 
![](https://i.imgur.com/nlc3JDr.png)
$$
\text { Pointe: } \mathbf{v}=\operatorname{proj}_{\mathcal{U}}(\mathbf{v})+\operatorname{comp}_{\mathcal{U}}(\mathbf{v}) \quad \text { og } \quad \operatorname{proj}_{\mathcal{U}}(\mathbf{v}) \perp \operatorname{comp}_{\mathcal{U}}(\mathbf{v}) \text {. }
$$
## Projektionsmatricen
![](https://i.imgur.com/hCpqOpx.png)
![](https://i.imgur.com/XVRnpq1.png)
# Ortogonale matricer
![](https://i.imgur.com/zJLVGzW.png)
![](https://i.imgur.com/r0k6jIN.png)
![](https://i.imgur.com/mXE2fUM.png)
![](https://i.imgur.com/ygqJkle.png)
# Ortogonale lineære transformationer
![](https://i.imgur.com/tmrSTvq.png)
Theorem 4.7 giver, at en ortogonal lineær transformation T opfylder:
$$
\|T(\mathbf{x})\|^2=\|\mathbf{Q} \mathbf{x}\|^2=\mathbf{Q x} \cdot \mathbf{Q x}=\mathbf{x} \cdot \mathbf{x}=\|\mathbf{x}\|^2
$$
dvs. T bevarer norm / længde af vektorer, så T er en isometri

Typiske eksempler: Rotationer og spejlinger.
# Ortogonalt komplement
# Gram–Schmidt processen og QR-faktorisering
## Gram–Schmidt processen
## QR-faktorisering
# Mindste kvadraters metode
