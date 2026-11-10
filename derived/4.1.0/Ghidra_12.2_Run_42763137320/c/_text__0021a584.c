/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0021a584; name: FUN_.text__0021a584
 */


void FUN__text__0021a584(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + 0x2e8) != '\0' && *(long *)(param_1 + 0xb0) != 0) &&
     ((long *)**(long **)(param_1 + 0xa8) != (long *)0x0)) {
    (**(code **)(*(long *)**(long **)(param_1 + 0xa8) + 0x40))();
  }
  if (*(char *)(param_1 + 0x2e0) != '\0') {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x260);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    (*pcVar1)(param_1 + 0x278);
  }
  pcVar1 = *(code **)(param_1 + 0x1e0);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    (*pcVar1)(param_1 + 0x1f8);
  }
  pcVar1 = *(code **)(param_1 + 0x160);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    (*pcVar1)(param_1 + 0x178);
  }
  pcVar1 = *(code **)(param_1 + 0xe0);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    (*pcVar1)(param_1 + 0xf8);
  }
  FUN__text__0021a7d0(param_1 + -0x48);
  return;
}


