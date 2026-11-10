/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8b70; name: FUN_.text__006a8b70
 */


void FUN__text__006a8b70(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN__text__006973a8(lVar1,0);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  if ((param_2 & 1) != 0) {
    for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != param_1 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
      FUN__text__006a8b70(*(undefined8 *)(lVar1 + 0x10),1);
    }
  }
  return;
}


