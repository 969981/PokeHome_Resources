/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d74b0; name: FUN_.text__006d74b0
 */


undefined8 FUN__text__006d74b0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_50;
  undefined8 uStack_48;
  
  lVar5 = param_1[1];
  lVar8 = *(long *)(lVar5 + 0x3f0);
  lVar7 = *(long *)(lVar5 + 1000);
  if (((*(long *)(lVar5 + 0x3e0) != 0) &&
      (pcVar4 = *(code **)(*(long *)(lVar5 + 0x3e0) + 0x50), pcVar4 != (code *)0x0)) &&
     (uVar3 = (*pcVar4)(param_1), (uVar3 & 1) == 0)) {
    return 0;
  }
  if ((lVar7 == 0) || (pcVar4 = *(code **)(lVar7 + 0x50), pcVar4 == (code *)0x0)) {
    lVar5 = *(long *)(param_1[1] + 0x238);
    if (*(long *)(lVar5 + 0x300) != 0) {
      uVar6 = *param_1;
      lVar7 = *(long *)(lVar5 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x340);
      iVar2 = *(int *)(lVar7 + 0x14c);
      iVar1 = *(int *)(lVar7 + 0x150);
      uStack_48 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x198);
      local_50 = *(long *)(*(long *)(lVar5 + 0x20) + 400) + *(long *)(lVar5 + 0x38);
      if (iVar2 != -1) {
        FUN__text__006ee1d4(uVar6,iVar2,0,&local_50,*(undefined8 *)(lVar5 + 0x308));
      }
      if (iVar1 != -1) {
        FUN__text__006ee1d4(uVar6,iVar1,4,&local_50,*(undefined8 *)(lVar5 + 0x308));
      }
    }
  }
  else {
    uVar3 = (*pcVar4)(param_1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x50) == 0)) {
    lVar5 = *(long *)(param_1[1] + 0x238);
    if (*(uint *)(param_1 + 2) == 3) {
      lVar7 = 0;
      lVar8 = *(long *)(lVar5 + 0x338);
    }
    else {
      lVar7 = *(long *)(lVar5 + (ulong)*(uint *)(param_1 + 2) * 8 + 0x340);
      lVar8 = *(long *)(lVar5 + 0x338);
    }
    if (lVar8 != 0) {
      iVar2 = *(int *)(lVar7 + 0x150);
      uStack_48 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x198);
      local_50 = *(long *)(*(long *)(lVar5 + 0x20) + 400) + *(long *)(lVar5 + 0x30);
      uVar6 = *param_1;
      if (*(int *)(lVar7 + 0x14c) != -1) {
        FUN__text__006ee1d4(uVar6,*(int *)(lVar7 + 0x14c),0,&local_50,0x80);
      }
      if (iVar2 != -1) {
        FUN__text__006ee1d4(uVar6,iVar2,4,&local_50,0x80);
      }
    }
  }
  return 1;
}


