/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00660844; name: FUN_.text__00660844
 */


undefined8 FUN__text__00660844(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 local_8;
  
  *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) & 0xfeff;
  if ((((*(int *)(param_1 + 0x14e0) != 10) && (iVar1 = *(int *)(param_2 + 0x230), iVar1 != 10)) &&
      ((lVar5 = *(long *)(param_1 + 0xa40), 10 < iVar1 || (lVar5 != 1)))) &&
     ((1 < lVar5 || lVar5 == 0 && (iVar1 != 0x14)))) {
    local_8 = param_3;
    lVar5 = FUN__text__0066c764(param_2,0x70f200);
    if (lVar5 == 0) {
      uVar3 = FUN__text__00660068(&local_8,0x714a07);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar4 = *(ushort *)(param_1 + 0x15a4) | 0x100;
    }
    else {
      uVar2 = FUN__text__00660220(lVar5,0x71bc3b,0x70e963);
      uVar4 = 0x100;
      if ((uVar2 & 1) == 0) {
        uVar4 = 0;
      }
      uVar4 = *(ushort *)(param_1 + 0x15a4) & 0xfeff | uVar4;
    }
    *(ushort *)(param_1 + 0x15a4) = uVar4;
  }
  return 0;
}


