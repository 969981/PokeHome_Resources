/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068408c; name: FUN_.text__0068408c
 */


void FUN__text__0068408c(long *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  lVar5 = *(long *)(lVar7 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 8);
  bVar1 = *(byte *)(param_2 + 0xd);
  if (lVar7 != param_1[1]) {
    bVar1 = *(byte *)(param_2 + 0xd) & 0xfb;
  }
  uVar4 = *(undefined1 *)(param_2 + 0xc);
  *(long *)(lVar7 + 0x18) = lVar5 + -9;
  FUN__text__0067999c(lVar5 + -9,(*(int *)(lVar7 + 0x20) - (int)lVar5) * 0x100);
  *(undefined1 *)(lVar5 + -6) = uVar4;
  *(byte *)(lVar5 + -5) = bVar1;
  FUN__text__0067999c(lVar5 + -4,uVar3);
  plVar2 = (long *)param_1[1];
  if ((long *)*param_1 == plVar2) {
    return;
  }
  for (plVar6 = *(long **)*param_1; plVar6 != plVar2; plVar6 = (long *)*plVar6) {
    lVar7 = plVar6[3];
    plVar6[3] = lVar7 + -9;
    FUN__text__0067999c(lVar7 + -9,(*(int *)(plVar6 + 4) - (int)lVar7) * 0x100);
    *(undefined2 *)(lVar7 + -6) = 9;
    FUN__text__0067999c(lVar7 + -4,uVar3);
  }
  lVar7 = plVar2[3];
  plVar2[3] = lVar7 + -9;
  FUN__text__0067999c(lVar7 + -9,((int)plVar2[4] - (int)lVar7) * 0x100);
  *(undefined2 *)(lVar7 + -6) = 0x409;
  FUN__text__0067999c(lVar7 + -4,uVar3);
  return;
}


