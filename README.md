# 🔑 Encriptador_LlucOmella_AndualemLuisCendoya

## 🔑 Punts claus del codi

El codi és molt simple. Per una banda tenim els **rotors**, que consisteixen en tres arxius `.txt` amb l’abecedari en ordres diferents. La idea és que no segueixin un ordre clàssic per dificultar el procés d’encriptació a qui no disposi de la clau (`notch`).

Parlant de **notch**, és la **clau inicial**, composta per 3 lletres. El programa utilitza aquesta clau per establir la posició inicial dels rotors.

<p align="center">
  <img src="/ilustracioexplicativa.png" alt="Il·lustració explicativa" width="500"/>
</p>

---

## 🧪 Pràctica amb un exemple

Farem una prova encriptant un missatge. Per fer-ho més senzill, utilitzarem el notch `"GAT"`.

El menú del programa és aquest i ofereix diverses opcions:

<p align="center">
  <img src="/menucodi.png" alt="Menú del programa" width="500"/>
</p>

---

### 1️⃣ Cifrar missatge

Aquesta opció encripta el missatge que introduïm per terminal. El contingut es xifra utilitzant la lògica dels tres rotors. Cada rotor és un `.txt` amb l’abecedari desordenat. El codi assigna una posició inicial a cada rotor segons el notch.

<p align="center">
  <img src="/encriptarfoto.png" alt="Xifrant el missatge" width="500"/>
</p>

Per exemple, si la posició inicial dels rotors és `"GAT"`, el programa fa un bucle per trobar la lletra inicial en cada rotor. Suposem que tenim un rotor com aquest:

A R T H U P G L


El programa anirà saltant lletres fins a trobar la indicada. Quan els tres rotors estan a lloc, el missatge s’encripta.

<p align="center">
  <img src="/rotorilustracio.png" alt="Exemple de rotor" width="400"/>
</p>

---

### 2️⃣ Desxifrar missatge

Per desxifrar el missatge, cal utilitzar el mateix **notch**. El procés és l’invers: desfà les operacions realitzades durant la xifra. Com que els rotors són els mateixos i tenen la posició inicial coneguda, el missatge es pot recuperar correctament. El resultat es guarda a `Desxifrat.txt`.

<p align="center">
  <img src="/desencriptarfoto.png" alt="Desxifrant el missatge" width="500"/>
</p>

---

### 👁️ Visualitzar el missatge

Per veure el missatge desxifrat, només cal obrir el fitxer `Desxifrat.txt`. Com es pot veure, el text es mostra en **grups de 5 lletres** i en **majúscules**. Això és perquè el programa aplica un filtre que elimina accents, espais i minúscules, convertint tot a majúscules abans de dividir-ho.

<p align="center">
  <img src="/desencriptartxt.png" alt="Missatge desxifrat" width="500"/>
</p>
