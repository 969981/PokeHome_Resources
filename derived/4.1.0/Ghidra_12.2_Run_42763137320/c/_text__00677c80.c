/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677c80; name: FUN_.text__00677c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00677c80(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1158);
  if ((lVar1 != 0) &&
     ((*(byte **)(param_1 + 0xe8) == (byte *)0x0 || ((**(byte **)(param_1 + 0xe8) >> 4 & 1) == 0))))
  {
    if (*(long *)(param_1 + 0xbf8) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        FUN__text__00677c20(*(long *)(param_1 + 0x1158) + lVar1);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0xb8;
      } while (uVar2 < *(ulong *)(param_1 + 0xbf8));
      lVar1 = *(long *)(param_1 + 0x1158);
    }
    FUN__text__006783e4(lVar1);
    *(undefined8 *)(param_1 + 0x1158) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00677d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*_DAT_008a6598 + 0x80))(param_1);
  return;
}


