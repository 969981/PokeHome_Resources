/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c44b8; name: FUN_.text__001c44b8
 */


void FUN__text__001c44b8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x6f8);
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x700) + 0x18))
              (*(long **)(param_1 + 0x700),puVar1,*(undefined8 *)(param_1 + 0x708),
               *(undefined8 *)(param_1 + 0x710));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x6d8);
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x6e0) + 0x18))
              (*(long **)(param_1 + 0x6e0),puVar1,*(undefined8 *)(param_1 + 0x6e8),
               *(undefined8 *)(param_1 + 0x6f0));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x6b8);
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x6c0) + 0x18))
              (*(long **)(param_1 + 0x6c0),puVar1,*(undefined8 *)(param_1 + 0x6c8),
               *(undefined8 *)(param_1 + 0x6d0));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x698);
  *(undefined8 *)(param_1 + 0x698) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x6a0) + 0x18))
              (*(long **)(param_1 + 0x6a0),puVar1,*(undefined8 *)(param_1 + 0x6a8),
               *(undefined8 *)(param_1 + 0x6b0));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x678);
  *(undefined8 *)(param_1 + 0x678) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x680) + 0x18))
              (*(long **)(param_1 + 0x680),puVar1,*(undefined8 *)(param_1 + 0x688),
               *(undefined8 *)(param_1 + 0x690));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x658);
  *(undefined8 *)(param_1 + 0x658) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x660) + 0x18))
              (*(long **)(param_1 + 0x660),puVar1,*(undefined8 *)(param_1 + 0x668),
               *(undefined8 *)(param_1 + 0x670));
  }
  FUN__text__00128620(param_1);
  return;
}


