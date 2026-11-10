/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a0758; name: FUN_.text__003a0758
 */


void FUN__text__003a0758(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1 + 0x50,param_1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  FUN__text__005e896c(lVar1,0x7146c6,0xffffffff,0x10);
  return;
}


