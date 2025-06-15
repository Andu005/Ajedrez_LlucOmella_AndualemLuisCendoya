# 🔑 Encriptador_LlucOmella_AndualemLuisCendoya


---

## Índex
1. [Punts claus](#claus)
2. [Pràctica amb un exemple](#exemple)
3. [Xifrar missatge](#xifrar)
4. [Desxifrar missatge](#desxifrar)
5. [Visualitzar el missatge](#visualitzar)
6. [Repositori](#repositori)
7. [Crèdits](#credits)
8. [Llicencia](#llicencia).

---

## 🔑 Punts claus del codi <a name="claus"></a>

El codi presenta una simulació de la màquina enigma. Per una banda tenim els **rotors**, que consisteixen en tres arxius `.txt` amb l’abecedari en ordres diferents. La idea és que no segueixin un ordre clàssic per dificultar el procés d’encriptació a qui no disposi de la clau (`notch`).

Parlant de **notch**, és la **clau inicial**, composta per 3 lletres. El programa utilitza aquesta clau per establir la posició inicial dels rotors.

<p align="center">
  <img src="/ilustracioexplicativa.png" alt="Il·lustració explicativa" width="500"/>
</p>

[▲ Tornar a l'índex](#índex).

---

## 🧪 Pràctica amb un exemple <a name="exemple"></a>

Farem una prova encriptant un missatge. Per fer-ho més senzill, utilitzarem el notch `"GAT"`.

El menú del programa és aquest i ofereix diverses opcions:

<p align="center">
  <img src="/menucodi.png" alt="Menú del programa" width="500"/>
</p>

[▲ Tornar a l'índex](#índex).

---

### 1️⃣ Xifrar missatge <a name="xifrar"></a>

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

[▲ Tornar a l'índex](#índex).

---

### 2️⃣ Desxifrar missatge <a name="desxifrar"></a>

Per desxifrar el missatge, cal utilitzar el mateix **notch**. El procés és l’invers: desfà les operacions realitzades durant la xifra. Com que els rotors són els mateixos i tenen la posició inicial coneguda, el missatge es pot recuperar correctament. El resultat es guarda a `Desxifrat.txt`.

<p align="center">
  <img src="/desencriptarfoto.png" alt="Desxifrant el missatge" width="500"/>
</p>

[▲ Tornar a l'índex](#índex).

---

### 👁️ Visualitzar el missatge <a name="visualitzar"></a>

Per veure el missatge desxifrat, només cal obrir el fitxer `Desxifrat.txt`. Com es pot veure, el text es mostra en **grups de 5 lletres** i en **majúscules**. Això és perquè el programa aplica un filtre que elimina accents, espais i minúscules, convertint tot a majúscules abans de dividir-ho.

<p align="center">
  <img src="/desencriptartxt.png" alt="Missatge desxifrat" width="500"/>
</p>

[▲ Tornar a l'índex](#índex).

---

### 📁 Repositori <a name="repositori"></a>

```text
├── Arxius/
    ├── const.h
    ├── logica.h
    ├── Desxifrat.txt
    ├── Rotor1.txt
    ├── Rotor2.txt
    ├── Rotor3.txt
    ├── Xifrat.txt
    ├── main.cpp
    ├── rotors.cpp
    ├── variables.cpp
    └── operations.cpp
```
[▲ Tornar a l'índex](#índex).

---

## 📚 Crèdits <a name="credits"></a>

Pràctica realitzada per:

- Lluc Omella  
- Andualem

[▲ Tornar a l'índex](#índex).

---

## 🪪 Llicencia <a name="llicencia"></a>

Llicencia GNU-GPL  
[https://www.gnu.org/licenses/gpl-3.0.html](https://www.gnu.org/licenses/gpl-3.0.html)

[▲ Tornar a l'índex](#índex).
