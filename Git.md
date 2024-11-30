Oficiální webová stránka: [git-scm.com](https://git-scm.com/)

Git je zdarma a open source **distribuovaný systém pro správu verzí** navržený tak, aby rychle a efektivně zvládl vše od malých až po velmi velké projekty.

![Git logo](https://git-scm.com/images/logo@2x.png)

## Co umí?

### 1. Zachovávat verze projektu

- možnost vrátit se zpět k předešlé verzi

### 2. Paralelně rozdělovat a spojovat verze - Větvení

- možnost pracovat paralelně s více větvemi projektu, které se dají sloučit zpět 

![Git branching 1](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fthe-turing-way.netlify.app%2F_images%2Fsub-branch.png&f=1&nofb=1&ipt=56d6c30367f44de1b224cc9b02c8cabf8ce1a434190b8f5da07e4cf0252d1118&ipo=images)

![Git branching 1](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fmap-client.readthedocs.io%2Fen%2Flatest%2F_images%2Fgitflow.png&f=1&nofb=1&ipt=62c8b9533ae62488f0d48410e6c0d6297f277de2256f5257ff0bbfe4dbc9e289&ipo=images)

### 3. Distribuce projektu mezi kolaboranty

#### Subversion-Style Workflow

![Subversion-style workflow](https://git-scm.com/images/about/workflow-a@2x.png)

#### Integration Manager Workflow

![Subversion-style workflow](https://git-scm.com/images/about/workflow-b@2x.png)

#### Dictator and Lieutenants Workflow

![Subversion-style workflow](https://git-scm.com/images/about/workflow-c@2x.png)

# Práce s git (jupí)

## 1. Instalace 

Pokud je git nainstalovaný, tak vrátí svoji verzi. Pokud ne, je potřeba ho nainstalovat.

```bash
git -v
```

**Ubuntu**:

```bash
sudo apt-get install git
```

**Fedora:**

```bash
sudo dnf install git
```

**Arch:**

```bash
sudo pacman -S git
```

**Ostatní:**

[Webová stránka git s návodem na instalaci](https://git-scm.com/downloads)

## 2. Konfigurace git

Nastavíme jméno a emailovou adresu:

```bash
git config --global user.name "Full Name"
git config --global user.email deez@nuts.com
```

Jméno a emailová adresa se zapisuje do všech commitů

```bash
git config --global init.defaultBranch main
```

Nastavíme jméno hlavní větve při nové inicializaci

## 3. Vytvoření repozitáře

Git pracuje s repozitáři.

Repozitář je adresář, který obsahuje podadresář `.git/`.

Repozitář vyrobíme pomocí:

```bash
git init [-b <branch_name>]
```

Příkaz vytvoří skrytou složku .git => adresář slouží jako root nového git repozitáře

Repozitář se ruší smazáním `.git/`:

```bash
rm -rf .git
```

## 4. Přidání souborů do indexu

Index je mezistav, kdy soubor je připraven na commit, ale commit ještě neproběhl.

Soubory přidáme příkazem:

```bash
git add <file 1> <file 2> ... # Přidání jednotlivých souborů

git add . # Přidání všech souborů
```

