# 👥 Majority Checker

Un programme en **C** qui vérifie si une personne est **majeure ou mineure** selon son âge et son sexe ✅

## 📖 Description

**Majority Checker** est un petit projet en langage **C** qui permet de :

- demander l’année de naissance 🎂
- demander le sexe (`F` ou `M`) 👩👨
- calculer automatiquement l’âge
- afficher si la personne est :
  - ✅ majeure
  - ❌ mineure
- compter les résultats pour **10 personnes** 📊

## ⚙️ Installation

### 📥 Cloner le dépôt

```bash
git clone https://github.com/biyayinux/majority-checker.git
```

### 📂 Entrer dans le dossier

```bash
cd majority-checker/src/
```

### 🛠️ Compiler le programme

```bash
gcc main.c -o majority-checker
```

### ▶️ Exécuter

```bash
./majority-checker
```

## 🎥 Exemple de sortie

```text
Bonjour madame, vous êtes majeure
Bonjour monsieur, vous êtes mineur
```

📊 Résumé final :

```text
Femmes majeures : 3
Femmes mineures : 2
Hommes majeurs : 4
Hommes mineurs : 1
```

## ⚠️ Problème connu

- L’année courante est fixée à **2025** 📅

## 📜 Licence

Projet pédagogique 🎓  
Libre d’utilisation pour apprendre le langage C 💻
