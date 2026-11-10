/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a153c; name: FUN_.text__004a153c
 */


bool FUN__text__004a153c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(param_1 + 0x10) != 0;
  }
  puVar1 = (undefined8 *)FUN__text__00400f80(2,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return false;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  lVar2 = FUN__text__00466bd4(param_1 + -0x28);
  return lVar2 != 0;
}


