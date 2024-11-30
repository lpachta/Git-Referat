## Inicializace

```bash
git init  
```

Vytvoří skrytou složku .git => adresář slouží jako root nového git repozitáře

## Status

```bash
git status
```

Upozorní na nesledované neignorované a modifikované soubory. 

## Stage

```bash
git add <file> <file2> ...   # seperate files

git add .                    # all files and subdirs in current dir
```

Označíme soubor/y jako připravené na commit.

## Commit

```bash
git commit -m "Commit message"
```

Vytvoří nový commit s danou zprávou. Vytiskne svůj hash.

## Log

```bash
git log
```

Vytiskne všechny commity, jejich hash klíče, autora, datum a message

## Diff

```zsh
git diff <commit> <commit>
```

```bash
git status
```