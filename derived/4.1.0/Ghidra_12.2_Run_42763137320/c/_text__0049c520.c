/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049c520; name: FUN_.text__0049c520
 */


void FUN__text__0049c520(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 == 0) {
    return;
  }
  *(byte *)(lVar4 + 200) = *(byte *)(lVar4 + 200) | 4;
  if (*(int *)(lVar4 + 0xb8) + 1U < 2) goto LAB__text__0049c57c;
  uVar1 = *(int *)(lVar4 + 0xb8) - 1;
  do {
    uVar5 = (ulong)uVar1;
    if (*(int *)(*(long *)(lVar4 + 0xb0) + uVar5 * 0x10 + 8) != 0) {
      goto LAB__text__0049c5a0;
    }
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0xffffffff);
  goto LAB__text__0049c578;
  while( true ) {
    while (iVar3 = (int)uVar5,
          *(int *)(*(long *)(lVar4 + 0xb0) + (ulong)(iVar3 - 1) * 0x10 + 8) == 0) {
      uVar5 = uVar5 - 1;
      if ((int)uVar5 == 0) goto LAB__text__0049c578;
    }
    uVar5 = (ulong)(iVar3 - 1);
    if (iVar3 == 0) break;
LAB__text__0049c5a0:
    plVar2 = *(long **)(*(long *)(lVar4 + 0xb0) + uVar5 * 0x10);
    (**(code **)(*plVar2 + 0x188))(plVar2,param_2 & 1,param_3 & 1);
    if ((int)uVar5 == 0) goto LAB__text__0049c57c;
  }
LAB__text__0049c578:
  if (lVar4 == 0) {
    return;
  }
LAB__text__0049c57c:
  *(byte *)(lVar4 + 200) = *(byte *)(lVar4 + 200) & 0xfb;
  return;
}


