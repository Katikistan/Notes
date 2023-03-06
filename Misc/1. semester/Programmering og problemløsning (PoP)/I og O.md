i iterativ binder man mutable variabler til en adresse (en reference) 
y'=30 
her bliver y' bundet til adressen r1
når man så opdaterer y', er det i virkeligheden adressen r1 vi opdaterer, y' er jo fast bundet til en adresse
y' = r1
y' = 17
heap = r1 -> 17
hoben er global 
y' <- 30 (heap' = {r1 -> 30})
<- er en allokering
-> r en afbildning
omgivelserne er ikke opdaterbar, men det er hoben muligvis.
h bruger y=17 og returnerer 32
g bruger y, men opdaterer y nu er y =30, g returnerer 53
h bruger y, men returnerer nu 45 

x = 15 
h = y + x
g' z =
y' <- 30
f' z

f' = fun x -> x +y' + 8
![|200](https://i.imgur.com/axnoC2z.png)
sikke noget rod. 
semicolon har præcedens over ->, så hvis du vil have den tager tildeling først så parentes i f#. 
