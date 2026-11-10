/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cb8c0; name: FUN_.text__001cb8c0
 */


void FUN__text__001cb8c0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
LAB__text__001cbb40:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar9 = 0;
  lVar5 = param_1;
  do {
    bVar1 = *(long *)(lVar5 + 0x4f0) == param_3;
    uVar8 = (undefined4)lVar9;
    if (bVar1) {
      local_70 = lVar9 << 0x20;
      FUN__text__001cbb44(param_1,&local_70,0);
      if (*(long *)(lVar5 + 0x720) != param_3) goto LAB__text__001cb93c;
LAB__text__001cb990:
      bVar1 = true;
      local_70 = CONCAT44(uVar8,1);
      FUN__text__001cbb44(param_1,&local_70,0);
      if (*(long *)(lVar5 + 0x950) != param_3) goto LAB__text__001cb948;
LAB__text__001cb9b4:
      local_70 = CONCAT44(uVar8,2);
      FUN__text__001cbb44(param_1,&local_70,0);
      bVar1 = true;
      if (*(long *)(lVar5 + 0xb80) != param_3) goto LAB__text__001cb954;
LAB__text__001cb9d8:
      local_70 = CONCAT44(uVar8,3);
      FUN__text__001cbb44(param_1,&local_70,0);
      bVar1 = true;
      if (*(long *)(lVar5 + 0xdb0) != param_3) goto LAB__text__001cb960;
LAB__text__001cb9fc:
      local_70 = CONCAT44(uVar8,4);
      FUN__text__001cbb44(param_1,&local_70,0);
      bVar1 = true;
      lVar4 = *(long *)(lVar5 + 0xfe0);
    }
    else {
      if (*(long *)(lVar5 + 0x720) == param_3) goto LAB__text__001cb990;
LAB__text__001cb93c:
      if (*(long *)(lVar5 + 0x950) == param_3) goto LAB__text__001cb9b4;
LAB__text__001cb948:
      if (*(long *)(lVar5 + 0xb80) == param_3) goto LAB__text__001cb9d8;
LAB__text__001cb954:
      if (*(long *)(lVar5 + 0xdb0) == param_3) goto LAB__text__001cb9fc;
LAB__text__001cb960:
      lVar4 = *(long *)(lVar5 + 0xfe0);
    }
    if (lVar4 == param_3) {
      local_70 = CONCAT44(uVar8,5);
      FUN__text__001cbb44(param_1,&local_70,0);
      lVar5 = *(long *)(param_1 + 0x60);
      goto joined_r0x001cba40;
    }
    bVar2 = lVar9 == 4;
    lVar5 = lVar5 + 0x70;
    lVar9 = lVar9 + 1;
    if (bVar2) {
      bVar1 = true;
    }
  } while (!bVar1);
  lVar5 = *(long *)(param_1 + 0x60);
joined_r0x001cba40:
  if (lVar5 == param_3) {
    *(undefined1 *)(param_1 + 0x5820) = 1;
    **(undefined4 **)(lVar7 + 0x80) = 2;
  }
  else if (*(long *)(param_1 + 0x1b0) == param_3) {
    local_70 = 0;
    uStack_68 = 0;
    FUN__text__001a19ec(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),3,&local_70,
                        0,1);
  }
  else if (*(long *)(param_1 + 0x288) == param_3) {
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB__text__001cbb40;
    FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
  }
  else {
    if (*(long *)(param_1 + 0xd0) == param_3) {
      uVar3 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x140) != param_3) goto LAB__text__001cbb0c;
      uVar3 = 1;
    }
    FUN__text__001cc0d0(param_1,uVar3);
  }
LAB__text__001cbb0c:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


