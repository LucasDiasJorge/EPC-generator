#!/bin/bash

# Execute o programa e copie o output para a área de transferência
epcgenerator | xclip -selection c

# Cole o conteúdo da área de transferência usando xdotool
xdotool key ctrl+shift+v