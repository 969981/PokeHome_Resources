/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e7ef0; name: FUN_.text__005e7ef0
 */


void FUN__text__005e7ef0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  for (puVar2 = *(undefined8 **)(param_1 + 0x90); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x38))((long *)*puVar2,param_2);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 8);
  FUN__text__005e2890(param_1 + 0x1d8,param_2);
  return;
}


