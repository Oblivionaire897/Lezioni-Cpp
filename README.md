# Lezioni C++
Qui puoi trovare tutto quello che abbiamo affrontato durante le lezioni. Scrivimi per qualsiasi dubbio

---

## Guida all'Installazione di Visual Studio Code e C++ per il Debug

Questa guida ti aiuterà a configurare Visual Studio Code (VSC) e un compilatore C++ per eseguire e fare debug di codice C++.

---

### 1. Scaricare e Installare Visual Studio Code
1. Scarica Visual Studio Code dal seguente link: [Download Visual Studio Code](https://code.visualstudio.com/docs/?dv=win64user).
2. Esegui il file scaricato e segui le istruzioni per completare l'installazione.
3. Una volta completata l'installazione, avvia Visual Studio Code.

---

### 2. Installare l'Estensione per C++
1. Apri il pannello delle estensioni in Visual Studio Code premendo `Ctrl + Shift + X`.
2. Cerca "C++" nella barra di ricerca.
3. Installa l'estensione "C/C++" sviluppata da Microsoft (il logo è costituito da bande viola).
4. Attendi il completamento dell'installazione delle librerie associate.

---

### 3. Scaricare e Configurare il Compilatore C++
1. Scarica il compilatore C++ (MSYS2) dal seguente link: [Download MSYS2](https://github.com/msys2/msys2-installer/releases/download/2023-05-26/msys2-x86_64-20230526.exe).
2. Esegui il file scaricato e segui le istruzioni per completare l'installazione.
3. Al termine dell'installazione, MSYS2 si aprirà automaticamente con una finestra di terminale.

---

### 4. Installare il Toolchain
1. Nella finestra di terminale di MSYS2, esegui il seguente comando:
   ```bash
   pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
   ```
2. Attendi il completamento del download delle librerie.
3. Quando richiesto, premi `Invio` per selezionare tutte le opzioni.
4. Alla richiesta di conferma, digita `Y` e premi `Invio`.

---

### 5. Configurare le Variabili di Ambiente
1. Apri le impostazioni di sistema e cerca "Modifica le variabili di ambiente per il proprio account".
2. Nella finestra che si apre, seleziona "Path" e fai doppio clic su di esso.
3. Fai clic su "Nuovo" e incolla il seguente percorso:
   ```
   C:\msys64\ucrt64\bin
   ```
4. Premi "OK" in tutte le finestre aperte per salvare le modifiche.

---

### 6. Verifica dell’Installazione
1. Chiudi e riapri il terminale.
2. Verifica che tutto sia configurato correttamente eseguendo il comando seguente nel terminale di sistema:
   ```bash
   g++ --version
   ```
3. Se il comando restituisce la versione del compilatore, la configurazione è completa.

---

Ora sei pronto per iniziare a scrivere, eseguire e fare debug di codice C++ su Visual Studio Code!
