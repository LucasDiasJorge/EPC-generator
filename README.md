# EPC Generator
  
  ### Installation

1. Linux only, for now;
2. Clone the repo;
   ```sh
   git clone https://github.com/LucasDiasJorge/EPC-generator
   ```
3. Install xclip;
   ```sh
    sudo apt install xclip # Debian, Ubuntu, Mint, ...
    sudo dnf install xclip # Red Hat, CentOS, Fedora, ...
    ```
4. Install xdotool;
    ```sh
    sudo apt-get install xdotool # Debian, Ubuntu, Mint, ...
    sudo dnf -y install xdotool # Red Hat, CentOS, Fedora, ...
    ```
5. Compile main.c;
    ```sh
    gcc main.c -o epcgenerator
    ```   
6. Move all to "/bin";
    ```sh
    sudo mv epcgenerator macro.sh /bin
    ```  


7. Set as a macro in your keyboard shortcuts;

    - [Fedora](https://docs.fedoraproject.org/en-US/quick-docs/gnome-setting-key-shortcut/)

    - [Ubuntu](https://help.ubuntu.com/stable/ubuntu-help/keyboard-shortcuts-set.html.en)