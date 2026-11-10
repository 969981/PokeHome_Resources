/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013f4cc; name: FUN_.text__0013f4cc
 */


void FUN__text__0013f4cc(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  uVar1 = *(uint *)(param_1 + 0xc9);
  *(undefined4 *)((long)param_1 + 0x64c) = *param_2;
  lVar10 = *(long *)(param_2 + 2);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar8 = param_1[0xca];
  param_1[0xca] = lVar10;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    lVar10 = param_1[0xca];
  }
  if (((lVar10 == 0) || (lVar10 = *(long *)(param_2 + 4), lVar10 == 0)) ||
     (lVar8 = *(long *)(param_2 + 6), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar12 = *(undefined8 *)(lVar10 + 0x70);
  lVar16 = *(long *)(lVar10 + 0x290);
  if (lVar16 != 0) {
    plVar11 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  local_70 = lVar16;
  FUN__text__001916b0(uVar12,&local_70,lVar10 + 0xa4,0);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  lVar10 = param_1[0x5a];
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  plVar11 = param_1 + 0x22;
  uVar3 = FUN__text__001933c8(uVar12);
  lVar13 = *(long *)(param_1[0xca] + 0x60);
  if (lVar13 != 0) {
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar13,0x7243b0,lVar15);
  uVar12 = FUN__text__005f3244(lVar15);
  FUN__text__0012c9f0(plVar11,0x7243a8,uVar12,0xb);
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  lVar8 = *(long *)(lVar8 + 0x108);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar4 = FUN__text__0063c6c8(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
  local_68 = 0xdb96836f3e150bf2;
  uVar12 = FUN__text__00155100(param_1[0x5a],&local_68);
  FUN__text__003d3dac(lVar8,uVar4,1,uVar12,0,0);
  if ((uVar3 & 0xff) == 7) {
    FUN__text__003c7c60(lVar10,0x7243e8,0);
    FUN__text__003c7c60(lVar10,0x7243c8,0);
    FUN__text__003c7c60(lVar10,0x7243d8,0);
    FUN__text__003c7c60(lVar10,0x7243f8,0);
    uVar12 = FUN__text__00306bc4(lVar16);
    uVar5 = FUN__text__00635e38(uVar12,*(undefined4 *)((long)param_1 + 0x64c));
    FUN__text__003c7c60(lVar10,0x724408,uVar5 & 1);
    if (lVar13 != 0) goto LAB__text__0013fb08;
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
  }
  else {
    FUN__text__003c7c60(lVar10,0x7243e8,1);
    FUN__text__003c7c60(lVar10,0x7243c8,1);
    FUN__text__003c7c60(lVar10,0x7243d8,1);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar13,0x7243d0,lVar15);
    uVar12 = FUN__text__005f3244(lVar15);
    FUN__text__0012c9f0(plVar11,0x7243c8,uVar12,0xb);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    uVar2 = FUN__text__0063cbb8(*(undefined4 *)((long)param_1 + 0x64c),0,uVar3);
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
    if (lVar15 == 0) {
      FUN__text__005f2d98(lVar13,0x7243e0,0);
      lVar15 = *(long *)(param_1[0x5a] + 0x2e0);
    }
    else {
      plVar17 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN__text__005f2d98(lVar13,0x7243e0,lVar15);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      lVar15 = *(long *)(param_1[0x5a] + 0x2e0);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar15,0,uVar2,2,1,1);
    FUN__text__003c8c20(param_1[0x5a],0x7243d8,0xb);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    (**(code **)(*plVar14 + 0x18))(plVar14);
    uVar5 = 0;
    if ((uVar3 & 0xff) == 3) {
      uVar12 = FUN__text__00306bc4(lVar16);
      uVar5 = FUN__text__00635280(uVar12,*(undefined4 *)((long)param_1 + 0x64c));
    }
    FUN__text__003c7c60(lVar10,0x7243f8,uVar5 & 1);
    FUN__text__003c7c60(lVar10,0x724408,0);
LAB__text__0013fb08:
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar13,0x724420,lVar15);
  uVar12 = FUN__text__005f3244(lVar15);
  FUN__text__0012c9f0(plVar11,0x724418,uVar12,0xb);
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  if (lVar13 == 0) {
    FUN__text__0012c300(plVar11,0x70c241);
    uVar6 = FUN__text__0063c7c4(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
    uVar5 = uVar6 & 0xff;
    if (2 < (int)uVar6) {
      uVar5 = 0;
    }
    FUN__text__0012c8d0(*(undefined4 *)((ulong)uVar5 * 4 + 0x724398),plVar11,0x70c241);
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
  }
  else {
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    FUN__text__0012c300(plVar11,0x70c241);
    uVar6 = FUN__text__0063c7c4(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
    uVar5 = uVar6 & 0xff;
    if (2 < (int)uVar6) {
      uVar5 = 0;
    }
    FUN__text__0012c8d0(*(undefined4 *)((ulong)uVar5 * 4 + 0x724398),plVar11,0x70c241);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar13,0x724440,lVar15);
  uVar12 = FUN__text__005f3244(lVar15);
  FUN__text__0012c9f0(plVar11,0x724438,uVar12,0xb);
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  if (lVar13 == 0) {
    iVar7 = FUN__text__0063c8c0(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
    if (1 < iVar7) goto LAB__text__0013fb94;
LAB__text__0013f8c0:
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar13,0x724498,lVar15);
    uVar12 = FUN__text__005f3244(lVar15);
    FUN__text__0012c9f0(plVar11,0x724448,uVar12,0xb);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  else {
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    iVar7 = FUN__text__0063c8c0(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    if (iVar7 < 2) goto LAB__text__0013f8c0;
LAB__text__0013fb94:
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
    if (lVar15 == 0) {
      FUN__text__005f2d98(lVar13,0x724450,0);
      lVar15 = *(long *)(param_1[0x5a] + 0x2e0);
    }
    else {
      plVar14 = (long *)(lVar15 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN__text__005f2d98(lVar13,0x724450,lVar15);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      lVar15 = *(long *)(param_1[0x5a] + 0x2e0);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar15,0,iVar7,3,1,1);
    FUN__text__003c8c20(param_1[0x5a],0x724448,0xb);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  if ((uVar3 & 0xff) == 7) {
    FUN__text__0012c300(plVar11,0x70ac8f);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar13,0x724470,lVar15);
    uVar12 = FUN__text__005f3244(lVar15);
    FUN__text__0012c9f0(plVar11,0x724468,uVar12,0xb);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    if (lVar13 == 0) {
      uVar4 = FUN__text__0063ccf0(*(undefined4 *)((long)param_1 + 0x64c));
      lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
      goto joined_r0x0013fef8;
    }
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    uVar4 = FUN__text__0063ccf0(*(undefined4 *)((long)param_1 + 0x64c));
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
    if (lVar15 != 0) goto LAB__text__0013fefc;
LAB__text__0013feac:
    FUN__text__005f2d98(lVar13,0x724480,0);
    lVar15 = *(long *)(param_1[0x5a] + 0x2e0);
  }
  else {
    FUN__text__0012c300(plVar11,0x719db4);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar13,0x724460,lVar15);
    uVar12 = FUN__text__005f3244(lVar15);
    FUN__text__0012c9f0(plVar11,0x724458,uVar12,0xb);
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    if (lVar13 == 0) {
      uVar9 = FUN__text__0063cab8(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      uVar9 = FUN__text__0063cab8(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    if ((uVar9 & 1) != 0) {
      lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      FUN__text__005f2d98(lVar13,0x724498,lVar15);
      uVar12 = FUN__text__005f3244(lVar15);
      FUN__text__0012c9f0(plVar11,0x724478,uVar12,0xb);
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      goto joined_r0x0013fe40;
    }
    uVar4 = FUN__text__0063c9bc(*(undefined4 *)((long)param_1 + 0x64c),uVar3);
    lVar15 = *(long *)(param_1[0x5a] + 0x2e8);
joined_r0x0013fef8:
    if (lVar15 == 0) goto LAB__text__0013feac;
LAB__text__0013fefc:
    plVar14 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN__text__005f2d98(lVar13,0x724480,lVar15);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar15 = *(long *)(param_1[0x5a] + 0x2e0);
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar15,0,uVar4,3,1,1);
  FUN__text__003c8c20(param_1[0x5a],0x724478,0xb);
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
joined_r0x0013fe40:
  local_78 = lVar13;
  if (lVar13 != 0) {
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  FUN__text__0014007c(plVar11,0x724488,&local_78,*(undefined4 *)((long)param_1 + 0x64c),uVar3);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (uVar1 < 2) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  return;
}


