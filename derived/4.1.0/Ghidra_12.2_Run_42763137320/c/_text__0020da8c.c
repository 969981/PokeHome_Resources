/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020da8c; name: FUN_.text__0020da8c
 */


void FUN__text__0020da8c(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x740);
  *(undefined8 *)(param_1 + 0x740) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x748) + 0x18))
              (*(long **)(param_1 + 0x748),puVar2,*(undefined8 *)(param_1 + 0x750),
               *(undefined8 *)(param_1 + 0x758));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x720);
  *(undefined8 *)(param_1 + 0x720) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x728) + 0x18))
              (*(long **)(param_1 + 0x728),puVar2,*(undefined8 *)(param_1 + 0x730),
               *(undefined8 *)(param_1 + 0x738));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x700);
  *(undefined8 *)(param_1 + 0x700) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x708) + 0x18))
              (*(long **)(param_1 + 0x708),puVar2,*(undefined8 *)(param_1 + 0x710),
               *(undefined8 *)(param_1 + 0x718));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x6e0);
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x6e8) + 0x18))
              (*(long **)(param_1 + 0x6e8),puVar2,*(undefined8 *)(param_1 + 0x6f0),
               *(undefined8 *)(param_1 + 0x6f8));
  }
  if (*(long *)(param_1 + 0x6c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  pcVar1 = *(code **)(param_1 + 0x648);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x658) = 0;
    *(undefined8 *)(param_1 + 0x650) = 0;
    *(undefined8 *)(param_1 + 0x648) = 0;
    *(undefined8 *)(param_1 + 0x640) = 0;
    (*pcVar1)(param_1 + 0x660);
  }
  FUN__text__00128620(param_1);
  return;
}


