my layouts, probably always unfinished and under development

usage should work like this:
* install qmk and run `qmk setup`
* link keymap directories `ln -s ~/Workspace/qmk-layouts/reviung41/aehm03 $QMK_DIR/keyboards/reviung41/aehm03
* run `qmk compile -kb KB  -km KM && qmk flash -kb KB -km KM`
