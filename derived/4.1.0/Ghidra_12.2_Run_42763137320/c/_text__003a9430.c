/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9430; name: FUN_.text__003a9430
 */


undefined8 FUN__text__003a9430(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined8 local_50 [3];
  long local_38;
  
  if (param_2 != 1) {
    return 1;
  }
  lVar4 = param_1 + 0x3c0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x408) + 8);
  iVar2 = FUN__text__003b6390(*(long *)(param_1 + 0x408),lVar4);
  uVar3 = FUN__text__003b6364(*(undefined8 *)(param_1 + 0x408),lVar4);
  if (((uVar3 & 1) != 0) && (*(code **)(param_1 + 0x330) != (code *)0x0)) {
    lVar9 = *(long *)(param_1 + 0x408);
    if (*(int *)(lVar9 + 0x1c) == 0) {
      iVar10 = *(int *)(lVar9 + 0xc);
      iVar8 = 0;
      if (iVar10 != 0) {
        iVar8 = iVar1 / iVar10;
      }
      iVar10 = iVar1 - iVar8 * iVar10;
    }
    else {
      iVar8 = *(int *)(lVar9 + 0x10);
      iVar10 = 0;
      if (iVar8 != 0) {
        iVar10 = iVar1 / iVar8;
      }
      iVar8 = iVar1 - iVar10 * iVar8;
    }
    local_50[0] = CONCAT44(iVar8,iVar10);
    uVar3 = (**(code **)(param_1 + 0x330))(param_1 + 0x350,local_50,lVar4);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
  }
  lVar9 = *(long *)(param_1 + 0x408);
  if (iVar2 == *(int *)(lVar9 + 8)) {
    if (*(code **)(param_1 + 0x2b0) != (code *)0x0) {
      if (*(int *)(lVar9 + 0x1c) == 0) {
        iVar2 = *(int *)(lVar9 + 0xc);
        iVar10 = 0;
        if (iVar2 != 0) {
          iVar10 = iVar1 / iVar2;
        }
        iVar2 = iVar1 - iVar10 * iVar2;
      }
      else {
        iVar10 = *(int *)(lVar9 + 0x10);
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = iVar1 / iVar10;
        }
        iVar10 = iVar1 - iVar2 * iVar10;
      }
      local_50[0] = CONCAT44(iVar10,iVar2);
      (**(code **)(param_1 + 0x2b0))(param_1 + 0x2d0,local_50,lVar4);
      lVar4 = **(long **)(param_1 + 0x428);
      goto joined_r0x003a9584;
    }
  }
  else {
    *(int *)(lVar9 + 8) = iVar2;
    if (**(long **)(param_1 + 0x428) == 0) {
LAB__text__003a9540:
      uVar7 = 0;
    }
    else {
      plVar5 = (long *)(*(code *)**(undefined8 **)(**(long **)(param_1 + 0x428) + 0x50))();
      plVar6 = (long *)FUN__text__003a9f60();
      if (plVar6 != plVar5) {
        do {
          plVar5 = (long *)*plVar5;
        } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
        if (plVar5 == (long *)0x0) goto LAB__text__003a9540;
      }
      uVar7 = 1;
    }
    FUN__text__003a8394(param_1,iVar2,iVar1,uVar7);
    FUN__text__005e927c(local_50,param_1 + 0x448);
    FUN__text__003c1e4c(local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  lVar4 = **(long **)(param_1 + 0x428);
joined_r0x003a9584:
  if (lVar4 != 0) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x50))();
    plVar6 = (long *)FUN__text__003a9f60();
    if (plVar6 != plVar5) {
      do {
        plVar5 = (long *)*plVar5;
      } while (plVar5 != plVar6 && plVar5 != (long *)0x0);
    }
  }
  return 1;
}


