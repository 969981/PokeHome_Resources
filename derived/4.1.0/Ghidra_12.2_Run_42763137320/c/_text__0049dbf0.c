/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049dbf0; name: FUN_.text__0049dbf0
 */


void FUN__text__0049dbf0(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = (int)param_1[2] + -1;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  lVar5 = *param_1;
  uVar4 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) == 0) {
    if (lVar5 == 0) goto LAB__text__0049dca8;
  }
  else {
    lVar2 = lVar5;
    do {
      lVar6 = lVar2;
      if ((*(long *)(lVar6 + 0x18) != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
        FUN__text__0049ce60();
        lVar5 = *param_1;
        uVar4 = (ulong)*(uint *)(param_1 + 1);
      }
      lVar2 = lVar6 + 0x28;
    } while (lVar6 + 0x28 != lVar5 + uVar4 * 0x28);
    if (lVar5 == 0) goto LAB__text__0049dca8;
    if (uVar4 != 0) {
      do {
        FUN__text__0049d9d0(lVar5);
        bVar3 = lVar6 != lVar5;
        lVar5 = lVar5 + 0x28;
      } while (bVar3);
      lVar5 = *param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN__text__00400fc0(0,lVar5);
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
LAB__text__0049dca8:
  FUN__text__00400fc0(0,param_1);
  return;
}


