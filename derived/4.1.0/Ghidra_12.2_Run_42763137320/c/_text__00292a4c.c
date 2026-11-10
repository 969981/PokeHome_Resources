/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00292a4c; name: FUN_.text__00292a4c
 */


void FUN__text__00292a4c(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x1668);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1678) = 0;
    *(undefined8 *)(param_1 + 0x1670) = 0;
    *(undefined8 *)(param_1 + 0x1668) = 0;
    *(undefined8 *)(param_1 + 0x1660) = 0;
    (*pcVar1)(param_1 + 0x1680);
  }
  pcVar1 = *(code **)(param_1 + 0x15e8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x15f8) = 0;
    *(undefined8 *)(param_1 + 0x15f0) = 0;
    *(undefined8 *)(param_1 + 0x15e8) = 0;
    *(undefined8 *)(param_1 + 0x15e0) = 0;
    (*pcVar1)(param_1 + 0x1600);
  }
  pcVar1 = *(code **)(param_1 + 0x1568);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1578) = 0;
    *(undefined8 *)(param_1 + 0x1570) = 0;
    *(undefined8 *)(param_1 + 0x1568) = 0;
    *(undefined8 *)(param_1 + 0x1560) = 0;
    (*pcVar1)(param_1 + 0x1580);
  }
  if (*(long *)(param_1 + 0x1550) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1550) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1550) = 0;
  }
  FUN__text__003d1120(param_1 + 0xef0);
  FUN__text__003d1120(param_1 + 0x890);
  if (*(long *)(param_1 + 0x888) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x888) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x888) = 0;
  }
  if (*(long *)(param_1 + 0x880) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x880) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x880) = 0;
  }
  FUN__text__0028bbfc(param_1);
  return;
}


