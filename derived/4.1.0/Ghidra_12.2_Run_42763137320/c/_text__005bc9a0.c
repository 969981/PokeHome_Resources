/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bc9a0; name: FUN_.text__005bc9a0
 */


void FUN__text__005bc9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar2 = *(undefined8 **)(param_1 + 0xb0); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN__text__005b87e0(*puVar2,param_2,param_3,param_4);
  }
  return;
}


