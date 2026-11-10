/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001b1bb4; name: FUN_.text__001b1bb4
 */


void FUN__text__001b1bb4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 == 0) goto LAB__text__001b215c;
  lVar11 = *(long *)(lVar13 + 0x10);
  if (*(long *)(lVar13 + 0x250) == 0) goto LAB__text__001b215c;
  plVar10 = (long *)(*(long *)(lVar13 + 0x250) + 0x48);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  if (lVar11 == 0) goto LAB__text__001b215c;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108);
  bVar2 = FUN__text__0019f580();
  bVar2 = bVar2 ^ 1;
  uVar6 = FUN__text__0019f590(*(undefined8 *)(param_1 + 0x38));
  if ((uVar6 & 1) != 0) {
    iVar4 = FUN__text__001c1e90(uVar12,*(undefined4 *)(param_1 + 0x30));
    bVar2 = iVar4 == 0 & bVar2;
  }
  uVar6 = FUN__text__0019f530(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x4f0) == param_3) {
    uVar5 = 0;
    uVar8 = 0;
LAB__text__001b1f24:
    local_70 = CONCAT44(uVar5,uVar8);
    FUN__text__001b2160(param_1,&local_70,0);
  }
  else {
    if (*(long *)(param_1 + 0x720) == param_3) {
      uVar5 = 0;
      uVar8 = 1;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x950) == param_3) {
      uVar5 = 0;
      uVar8 = 2;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xb80) == param_3) {
      uVar5 = 0;
      uVar8 = 3;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xdb0) == param_3) {
      uVar5 = 0;
      uVar8 = 4;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xfe0) == param_3) {
      uVar5 = 0;
      uVar8 = 5;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x560) == param_3) {
      uVar8 = 0;
      uVar5 = 1;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x790) == param_3) {
      uVar5 = 1;
      uVar8 = 1;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x9c0) == param_3) {
      uVar8 = 2;
      uVar5 = 1;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xbf0) == param_3) {
      uVar8 = 3;
      uVar5 = 1;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xe20) == param_3) {
      uVar8 = 4;
      uVar5 = 1;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x1050) == param_3) {
      uVar8 = 5;
      uVar5 = 1;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x5d0) == param_3) {
      uVar8 = 0;
      uVar5 = 2;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x800) == param_3) {
      uVar8 = 1;
      uVar5 = 2;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xa30) == param_3) {
      uVar5 = 2;
      uVar8 = 2;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xc60) == param_3) {
      uVar8 = 3;
      uVar5 = 2;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xe90) == param_3) {
      uVar8 = 4;
      uVar5 = 2;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x10c0) == param_3) {
      uVar8 = 5;
      uVar5 = 2;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x640) == param_3) {
      uVar8 = 0;
      uVar5 = 3;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x870) == param_3) {
      uVar8 = 1;
      uVar5 = 3;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xaa0) == param_3) {
      uVar8 = 2;
      uVar5 = 3;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xcd0) == param_3) {
      uVar5 = 3;
      uVar8 = 3;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0xf00) == param_3) {
      uVar8 = 4;
      uVar5 = 3;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x1130) == param_3) {
      uVar8 = 5;
      uVar5 = 3;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x6b0) == param_3) {
      uVar8 = 0;
LAB__text__001b1f20:
      uVar5 = 4;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x8e0) == param_3) {
      uVar8 = 1;
      goto LAB__text__001b1f20;
    }
    if (*(long *)(param_1 + 0xb10) == param_3) {
      uVar8 = 2;
      goto LAB__text__001b1f20;
    }
    if (*(long *)(param_1 + 0xd40) == param_3) {
      uVar8 = 3;
      goto LAB__text__001b1f20;
    }
    if (*(long *)(param_1 + 0xf70) == param_3) {
      uVar5 = 4;
      uVar8 = 4;
      goto LAB__text__001b1f24;
    }
    if (*(long *)(param_1 + 0x11a0) == param_3) {
      uVar8 = 5;
      goto LAB__text__001b1f20;
    }
  }
  if (*(long *)(param_1 + 0x60) == param_3) {
    if ((uVar6 & 1) == 0) {
      lVar11 = FUN__text__00195844(lVar11,*(undefined4 *)(param_1 + 0x5a5c));
      cVar1 = *(char *)(param_1 + 0x5a58);
      if ((cVar1 != '\0') || (0xfffffffd < *(int *)(lVar11 + 0xc) - 4U)) {
        *(undefined1 *)(param_1 + 0x5b14) = 1;
        if (cVar1 == '\0') {
          **(undefined4 **)(lVar13 + 0x80) = 0;
        }
        else if (*(int *)(param_1 + 0x4cc) == 0) {
          **(undefined4 **)(lVar13 + 0x80) = 4;
        }
        else {
          **(undefined4 **)(lVar13 + 0x80) = 3;
        }
        goto LAB__text__001b20bc;
      }
      if (*(int *)(lVar11 + 0xc) == 1) {
LAB__text__001b1f94:
        **(undefined4 **)(lVar13 + 0xb0) = *(undefined4 *)(param_1 + 0x5a5c);
        lVar13 = *(long *)(lVar13 + 0xb0);
        uVar12 = *(undefined8 *)(param_1 + 0x5a60);
        *(undefined4 *)(lVar13 + 0xc) = *(undefined4 *)(param_1 + 0x5a68);
        *(undefined8 *)(lVar13 + 4) = uVar12;
        *(undefined1 *)(param_1 + 0x5b13) = 1;
      }
      else {
        lVar11 = FUN__text__00325bc0();
        if (*(int *)(lVar11 + 0x2c) != 0) {
          cVar1 = *(char *)(lVar11 + 0x49);
          FUN__text__0015ab30();
          cVar3 = FUN__text__0016a6f8();
          if (cVar1 == cVar3) goto LAB__text__001b1f94;
        }
        *(undefined1 *)(param_1 + 0x5b14) = 1;
        **(undefined4 **)(lVar13 + 0x80) = 1;
      }
      goto LAB__text__001b20bc;
    }
  }
  else if (*(long *)(param_1 + 0x1b0) == param_3) {
    if ((bVar2 & *(int *)(param_1 + 0x4cc) != 0) == 1) {
      if (*(char *)(param_1 + 0x5a58) != '\0') {
        local_70 = 0;
        uStack_68 = 0;
        FUN__text__001a19ec(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),3,
                            &local_70,0,1);
        goto LAB__text__001b20bc;
      }
      uVar5 = FUN__text__00191358(param_1 + 0x5a60);
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      uVar7 = 4;
LAB__text__001b2130:
      uStack_68 = 0;
      local_70 = 0;
      FUN__text__001a19ec(uVar12,uVar8,uVar7,&local_70,uVar5,0);
      goto LAB__text__001b20bc;
    }
  }
  else if (*(long *)(param_1 + 0x288) == param_3) {
    if ((bVar2 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      uVar7 = 2;
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      uVar5 = 0;
      goto LAB__text__001b2130;
    }
  }
  else if (*(long *)(param_1 + 0xd0) == param_3) {
    if ((bVar2 & 1) != 0) {
      FUN__text__001b2f80(param_1,0);
      goto LAB__text__001b20bc;
    }
  }
  else {
    if (*(long *)(param_1 + 0x140) != param_3) goto LAB__text__001b20bc;
    if ((bVar2 & 1) != 0) {
      FUN__text__001b2f80(param_1,1);
      goto LAB__text__001b20bc;
    }
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
LAB__text__001b215c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
LAB__text__001b20bc:
  (**(code **)(*plVar10 + 0x18))(plVar10);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


