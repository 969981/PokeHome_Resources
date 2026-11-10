/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4700; name: FUN_.text__003f4700
 */


undefined8 FUN__text__003f4700(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x18) - 1U < 2) {
    nn::fs::FlushFile(uVar1);
  }
  nn::fs::CloseFile(uVar1);
  return 1;
}


