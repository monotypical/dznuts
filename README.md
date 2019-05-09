QMK keymap for my keyboard

ESC acts like the grave key when held: [QMK docs]( https://github.com/qmk/qmk_firmware/blob/master/docs/feature_grave_esc.md/)

Lock key holds next key until tapped again: [QMK docs](https://beta.docs.qmk.fm/features/feature_key_lock)

# Flashing the firmware
To flash this firmware, clone [QMK_firmware](https://github.com/qmk/qmk_firmware) and move this folder to `keyboards/dz60/keymaps/dznuts` and from the root of the qmk repository run `sudo make dz60:dznuts:dfu` then place the keyboard into bootloader mode by connecting it while holding spacebar + b

# Parts
* Keycaps: [KBDFans GK64 2u lshift  set](https://www.aliexpress.com/item/kbdfans-new-arrival-pbt-keycaps-diy-mechanical-keyboard-gk64-keycaps-2u-shift-dz60/32840831830.html)
* Switches: Kailh speed copper
* PCB: [KBDFans DZ60](https://www.aliexpress.com/item/DZ60-Custom-mechanical-keyboard-PCB-60-keyboard-support-arrow-key/32824638057.html)
* Stabilizers: GMK PCB mount

# Viewing changes to the layout
To change the layout, make changes at [keyboard-layout-editor.com](http://www.keyboard-layout-editor.com/#/gists/14fe6c21a671fab9978bb9f6b1bdf1d0) and edit `keymap.c` and `rules.mk` as appropriate
