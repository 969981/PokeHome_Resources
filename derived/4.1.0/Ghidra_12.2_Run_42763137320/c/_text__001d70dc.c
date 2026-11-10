/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d70dc; name: FUN_.text__001d70dc
 */


void FUN__text__001d70dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x6d8) + 0x18))
              (*(long **)(param_1 + 0x6d8),puVar1,*(undefined8 *)(param_1 + 0x6e0),
               *(undefined8 *)(param_1 + 0x6e8));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x6b0);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x6b8) + 0x18))
              (*(long **)(param_1 + 0x6b8),puVar1,*(undefined8 *)(param_1 + 0x6c0),
               *(undefined8 *)(param_1 + 0x6c8));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x690);
  *(undefined8 *)(param_1 + 0x690) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x698) + 0x18))
              (*(long **)(param_1 + 0x698),puVar1,*(undefined8 *)(param_1 + 0x6a0),
               *(undefined8 *)(param_1 + 0x6a8));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x670) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x678) + 0x18))
              (*(long **)(param_1 + 0x678),puVar1,*(undefined8 *)(param_1 + 0x680),
               *(undefined8 *)(param_1 + 0x688));
  }
  puVar1 = *(undefined8 **)(param_1 + 0x650);
  *(undefined8 *)(param_1 + 0x650) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(**(long **)(param_1 + 0x658) + 0x18))
              (*(long **)(param_1 + 0x658),puVar1,*(undefined8 *)(param_1 + 0x660),
               *(undefined8 *)(param_1 + 0x668));
  }
  FUN__text__00128620(param_1);
  return;
}


