# Prioritetskø
![[Pasted image 20220927131854.png]]
I en kø tager man det tal der blev lagt ind først og tager det ud først.

man vil tit betegne en kø som en linked list som peger på næste element. 

man kan enten lave enqueue eller dequeue. 

{1,2,3,4,5,6}

hvis man kører dequeue vil man få 1

i enqueue med 7 vil man sætte 7 bagved og man ville være nødt til at køre enqueue 6 gange før man får 7 ud af køen. Last in last out. 

modsat stacks hvor der er first in first out. 

is empty giver en boolean værdi for om køen er tom eller ej.

en kø har et Q.head og en Q.tail. head peger på  første element i køen Q.tail er resten af køen uden head.

![[Pasted image 20221018181244.png]]