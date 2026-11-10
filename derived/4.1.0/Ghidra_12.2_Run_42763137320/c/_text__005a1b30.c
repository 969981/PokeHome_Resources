/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a1b30; name: FUN_.text__005a1b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a1b30(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  
  piVar3 = _DAT_008a0300;
  lVar4 = *(long *)(param_1 + 0xb8) + param_2 * 0x10;
  iVar2 = *(int *)(lVar4 + 8);
  iVar5 = *(int *)(lVar4 + 0xc);
  if (iVar2 < iVar5) {
    lVar4 = (long)iVar2 << 6;
    iVar5 = iVar5 - iVar2;
    do {
      lVar1 = *(long *)(param_1 + 0xe8) + lVar4;
      FUN__text__006ee104(*(long *)(param_3 + 0x58) + (long)*piVar3 * 0x168,
                          *(undefined4 *)(lVar1 + 0x3c),*(undefined4 *)(lVar1 + 0x38),
                          *(long *)(param_1 + 0xe8) + lVar4 + (long)*piVar3 * 8 + 0x28);
      lVar4 = lVar4 + 0x40;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


