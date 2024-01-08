#!/bin/bash

# Execute o programa e copie o output para a área de transferência
./keyboard | xclip -selection c

# Cole o conteúdo da área de transferência usando xdotool
xdotool key ctrl+shift+v
