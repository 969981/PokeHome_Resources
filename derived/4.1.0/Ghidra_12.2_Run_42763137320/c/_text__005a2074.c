/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a2074; name: FUN_.text__005a2074
 */


void FUN__text__005a2074(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(param_3 + 8);
  lVar5 = *(long *)(param_3 + 0x20);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (lVar6 < -0xfc6d48c7846dba1) {
    if (lVar6 < -0x437b2bcfbf35b4a2) {
      if (lVar6 == -0x5ac36e4631b31c05) {
        lVar6 = 0x895200;
      }
      else if (lVar6 == -0x583687a497cb1451) {
        lVar6 = 0x895280;
      }
      else {
        if (lVar6 != -0x48a9998249434bc1) goto LAB__text__005a23c4;
        lVar6 = 0x895240;
      }
    }
    else if (lVar6 == -0x437b2bcfbf35b4a2) {
      lVar6 = 0x895260;
    }
    else if (lVar6 == -0x314cdd465db6dada) {
      lVar6 = 0x895120;
    }
    else {
      if (lVar6 != -0x314695465db1f4d4) goto LAB__text__005a23c4;
      lVar6 = 0x895140;
    }
  }
  else if (lVar6 < 0xd89318003f83896) {
    if (lVar6 == -0xfc6d48c7846dba1) {
      lVar6 = 0x895180;
    }
    else if (lVar6 == -0xfc0048c78410e83) {
      lVar6 = 0x895160;
    }
    else {
      if (lVar6 != 0x180eb169eb336e5) goto LAB__text__005a23c4;
      lVar6 = 0x8951a0;
    }
  }
  else if (lVar6 < 0x13e9325efccbafab) {
    if (lVar6 == 0xd89318003f83896) {
      lVar6 = 0x8952a0;
    }
    else {
      if (lVar6 != 0x13beb5548ad69525) {
LAB__text__005a23c4:
        *param_1 = 0;
        goto joined_r0x005a23c8;
      }
      lVar6 = 0x8951e0;
    }
  }
  else if (lVar6 == 0x13e9325efccbafab) {
    lVar6 = 0x895220;
  }
  else {
    if (lVar6 != 0x73457ac941aa4b35) goto LAB__text__005a23c4;
    lVar6 = 0x8951c0;
  }
  uVar4 = *(uint *)(lVar6 + 0x18);
  iVar1 = 0;
  if ((uVar4 & 0xf) != 0) {
    iVar1 = 0x10 - (uVar4 & 0xf);
  }
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = *(long **)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,0x140,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN__text__005a23ec(lVar6,(long)(int)(iVar1 + uVar4),*(undefined4 *)(param_2 + 0x18),uVar3);
  *param_1 = lVar6;
  *(long **)(lVar6 + 8) = plVar2;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x140;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
joined_r0x005a23c8:
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005a23c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


