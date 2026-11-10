/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650bb0; name: FUN_.text__00650bb0
 */


undefined8 FUN__text__00650bb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_14 [4];
  
  if ((*(byte *)(param_1 + 0x2a0) & 1) == 0) {
    if (*(int *)(param_1 + 600) == -1) {
      return 0;
    }
    local_14[0] = 0;
    lVar1 = nnsocketRecv(*(int *)(param_1 + 600),local_14,1,2);
    if (lVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = FUN__text__00677dc4();
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}


