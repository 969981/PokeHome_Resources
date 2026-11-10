/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006516a8; name: FUN_.text__006516a8
 */


void FUN__text__006516a8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN__text__00651724();
  if (puVar1 != (undefined8 *)0x0) {
    do {
      *puVar1 = *(undefined8 *)(param_1 + 0x50);
      FUN__text__00650d38(puVar1,1);
      FUN__text__00670414(*(undefined8 *)(param_1 + 0x50),puVar1,0);
      puVar1 = (undefined8 *)FUN__text__00651724(param_1);
    } while (puVar1 != (undefined8 *)0x0);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    return;
  }
  FUN__text__00654c3c(lVar2,*(undefined8 *)(lVar2 + 200));
  FUN__text__0066fef4(*(undefined8 *)(param_1 + 0x50));
  return;
}


