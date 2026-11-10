/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005613e4; name: FUN_.text__005613e4
 */


void FUN__text__005613e4(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x380);
  if (iVar1 == 1) {
    FUN__text__00561760(param_1 + 0x280,param_3,param_2);
    return;
  }
  if (iVar1 == 2) {
    FUN__text__00561830();
    return;
  }
  if (iVar1 == 3) {
    FUN__text__00561890();
    return;
  }
  FUN__text__00561970();
  return;
}


