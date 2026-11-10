/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ffd60; name: FUN_.text__004ffd60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ffd60(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  short sVar6;
  long *plVar7;
  long lVar8;
  char local_34 [4];
  
  sVar6 = *(short *)(param_1 + 0x32);
  if (1 < sVar6) {
    sVar6 = sVar6 + -1;
LAB__text__004ffd88:
    *(short *)(param_1 + 0x32) = sVar6;
    return;
  }
  if (sVar6 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (uVar1 == 0) {
    return;
  }
  local_34[0] = '\x01';
  plVar7 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x18 + -0x18);
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return;
    }
    if ((*(uint *)(plVar7 + 6) & 0xfffffffd) == 0) goto LAB__text__004ffe78;
    lVar8 = *(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x18;
    sVar6 = *(short *)(lVar8 + -0x10);
    if (sVar6 == 0) goto LAB__text__004ffe78;
    if (1 < sVar6) break;
    plVar7 = (long *)plVar7[1];
    if ((*(long **)(lVar8 + -8) != (long *)0x0) &&
       ((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
      (**(code **)(**(long **)(lVar8 + -8) + 0x10))();
    }
    *(undefined8 *)(lVar8 + -8) = 0;
    uVar1 = *(int *)(param_1 + 0x20) - 1;
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  *(short *)(lVar8 + -0x10) = sVar6 + -1;
LAB__text__004ffe78:
  do {
    uVar5 = FUN__text__004ffc18(param_1,*(long *)(param_1 + 0x18) +
                                        (ulong)*(uint *)(param_1 + 0x20) * 0x18 + -0x18,local_34);
    if (local_34[0] == '\0') {
      plVar7 = *(long **)(plVar7[4] + (uVar5 & 0xffff) * 8);
      uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if ((uVar5 & 1) != 0) {
        lVar8 = plVar7[4];
        *(int *)(param_1 + 0x28) = (int)lVar8;
        *(bool *)(param_1 + 0x30) = (int)lVar8 != 0;
        *(int *)(param_1 + 0x2c) = (int)plVar7[2];
        sVar6 = *(short *)((long)plVar7 + 0x14);
        if (sVar6 == 0) {
          sVar6 = 0;
        }
        else if (*(short *)((long)plVar7 + 0x16) != 0 || (short)plVar7[3] != 0) {
          iVar4 = (int)*(short *)((long)plVar7 + 0x16) + (int)sVar6;
          iVar2 = (int)(short)iVar4;
          iVar3 = (int)(short)((short)plVar7[3] + sVar6);
          if (iVar4 < 1) {
            iVar2 = 1;
          }
          if (iVar2 != iVar3) {
            iVar4 = (iVar3 - iVar2) + 1;
            lVar8 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
            *_DAT_008a45e8 = lVar8;
            sVar6 = 0;
            uVar5 = (ulong)lVar8 >> 0x21;
            if (iVar4 != 0) {
              sVar6 = (short)((int)(uint)uVar5 / iVar4);
            }
            sVar6 = ((short)uVar5 - sVar6 * (short)iVar4) + (short)iVar2;
          }
        }
        goto LAB__text__004ffd88;
      }
      if (((int)plVar7[5] == 0) || (*(char *)((long)plVar7 + 0x36) == '\0')) {
        plVar7 = (long *)plVar7[1];
        local_34[0] = '\x01';
      }
      else {
        iVar4 = FUN__text__004ff89c(param_1,plVar7);
        if (iVar4 != 1) {
          FUN__text__004ffa40(param_1);
          return;
        }
        local_34[0] = '\x01';
      }
    }
    else {
      lVar8 = *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x18;
      plVar7 = (long *)plVar7[1];
      if ((*(long **)(lVar8 + -8) != (long *)0x0) &&
         ((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
        (**(code **)(**(long **)(lVar8 + -8) + 0x10))();
      }
      *(undefined8 *)(lVar8 + -8) = 0;
      uVar1 = *(int *)(param_1 + 0x20) - 1;
      *(uint *)(param_1 + 0x20) = uVar1;
      while( true ) {
        if (plVar7 == (long *)0x0) {
          return;
        }
        if ((*(uint *)(plVar7 + 6) & 0xfffffffd) == 0) goto joined_r0x004fffb4;
        lVar8 = *(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x18;
        sVar6 = *(short *)(lVar8 + -0x10);
        if (sVar6 == 0) goto joined_r0x004fffb4;
        if (1 < sVar6) break;
        plVar7 = (long *)plVar7[1];
        if ((*(long **)(lVar8 + -8) != (long *)0x0) &&
           ((*(uint *)(*(long *)(lVar8 + -0x18) + 0x30) & 0xfffffffd) != 1)) {
          (**(code **)(**(long **)(lVar8 + -8) + 0x10))();
        }
        *(undefined8 *)(lVar8 + -8) = 0;
        uVar1 = *(int *)(param_1 + 0x20) - 1;
        *(uint *)(param_1 + 0x20) = uVar1;
      }
      *(short *)(lVar8 + -0x10) = sVar6 + -1;
    }
joined_r0x004fffb4:
    if (plVar7 == (long *)0x0) {
      return;
    }
  } while( true );
}


