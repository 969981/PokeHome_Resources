/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555a50; name: FUN_.text__00555a50
 */


void FUN__text__00555a50(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if ((param_2 & 1) == 0) {
      uVar2 = *(uint *)(param_1 + 0x28);
      if ((param_3 & 1) == 0) {
        uVar2 = *(uint *)(param_1 + 0x28) >> 2;
      }
      FUN__text__00556960(param_1,uVar2);
      iVar3 = *(int *)(param_1 + 0x20);
    }
    else {
      FUN__text__00556960(param_1,**(undefined4 **)(param_1 + 0x38));
      iVar3 = *(int *)(param_1 + 0x20);
    }
    if (iVar3 != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x40) + lVar4;
        FUN__text__0054fa64(lVar1,*(undefined4 *)(param_1 + 0x28),param_3 & 1);
        *(undefined1 *)(lVar1 + 0x3c) = 0;
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x60;
        *(undefined1 *)(lVar1 + 0x4c) = 0;
        *(undefined1 *)(lVar1 + 0x5c) = 0;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


