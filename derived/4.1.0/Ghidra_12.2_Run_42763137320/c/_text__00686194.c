/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686194; name: FUN_.text__00686194
 */


void FUN__text__00686194(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xe6) != '\0') {
    while (lVar2 = *(long *)(param_1 + 0x70), lVar2 != 0) {
      FUN__text__0068596c(lVar2 + 0x18,param_1 + 0x10);
      *(undefined1 *)(param_1 + 0xe6) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      if ((*(long *)(lVar2 + 0xa8) != 0) && ((*(byte *)(lVar2 + 0xe4) & 0xc) == 0)) {
        return;
      }
      iVar1 = FUN__text__00685a20(lVar2 + 0x18);
      param_1 = lVar2;
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}


