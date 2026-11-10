/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd528; name: FUN_.text__005cd528
 */


undefined4 FUN__text__005cd528(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x60);
  if (param_2 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x6c);
  }
  puVar1 = (undefined4 *)(param_1 + 0x60);
  if (param_2 != 1) {
    puVar1 = puVar2;
  }
  puVar2 = (undefined4 *)(param_1 + 0x78);
  if (param_2 != 2) {
    puVar2 = puVar1;
  }
  return *puVar2;
}


