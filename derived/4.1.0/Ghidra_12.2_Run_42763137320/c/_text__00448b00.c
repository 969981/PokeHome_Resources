/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00448b00; name: FUN_.text__00448b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00448b00(long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  uint local_44;
  
  plVar9 = *(long **)(param_2 + 0x10);
  local_44 = param_4;
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)FUN__text__00400f80(4,0xf0);
    piVar5 = _DAT_008a3828;
    if (plVar9 == (long *)0x0) {
      return;
    }
    plVar9[1] = 0;
    plVar9[2] = 0;
    piVar2 = *(int **)(piVar5 + 2);
    lVar7 = *(long *)(piVar5 + 4);
    *(long **)(piVar5 + 2) = plVar9;
    plVar9[3] = (long)piVar2;
    piVar1 = piVar5;
    if (lVar7 != 0) {
      piVar1 = piVar2;
    }
    *(long **)(piVar1 + 4) = plVar9;
    *piVar5 = *piVar5 + 1;
    plVar9[8] = 0;
    plVar9[9] = 0;
    *(undefined2 *)(plVar9 + 0x1c) = 0;
    plVar9[0xc] = 0;
    plVar9[0xd] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    *plVar9 = (long)&DAT_008874b8;
    plVar9[0x16] = 0;
    plVar9[0x17] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1b] = 0;
    *(long **)(param_2 + 0x10) = plVar9;
    plVar9[1] = param_2;
    iVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_2 + 0x58));
    if (iVar6 != 1) {
      (**(code **)*plVar9)(plVar9);
      FUN__text__00400fc0(4,plVar9);
      *(undefined8 *)(param_2 + 0x10) = 0;
      return;
    }
  }
  if ((param_4 != 0) && ((param_5 & 1) != 0)) {
    uVar10 = 0;
    do {
      lVar7 = *(long *)(param_3 + uVar10 * 0x10);
      if ((lVar7 != -1) && (uVar3 = *(uint *)(param_1 + 0x38), uVar3 != 0)) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = (uint)lVar7 / uVar3;
        }
        plVar8 = (long *)(*(long *)(param_1 + 0x30) + (ulong)((uint)lVar7 - uVar4 * uVar3) * 8);
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB__text__00448b54;
        } while (plVar8[1] != lVar7);
        lVar7 = plVar8[2];
        if ((*(long *)(lVar7 + 0x20) == 0) &&
           (plVar8 = (long *)FUN__text__00400f80(4,0xa0), plVar8 != (long *)0x0)) {
          FUN__text__0047d448();
          *(long **)(lVar7 + 0x20) = plVar8;
          plVar8[1] = lVar7;
          iVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar7 + 0x58));
          if (iVar6 != 1) {
            (**(code **)*plVar8)(plVar8);
            FUN__text__00400fc0(4,plVar8);
            *(undefined8 *)(lVar7 + 0x20) = 0;
          }
        }
      }
LAB__text__00448b54:
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_4);
  }
  FUN__text__0044cf90(plVar9,param_3,&local_44);
  plVar8 = *(long **)(param_2 + 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)FUN__text__00400f80(4,0x80);
    if (plVar8 == (long *)0x0) {
      return;
    }
    FUN__text__0044ad10();
    *(long **)(param_2 + 8) = plVar8;
    plVar8[1] = param_2;
    iVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_2 + 0x58));
    if (iVar6 != 1) {
      (**(code **)*plVar8)(plVar8);
      FUN__text__00400fc0(4,plVar8);
      *(undefined8 *)(param_2 + 8) = 0;
      return;
    }
  }
  *(byte *)((long)plVar8 + 0x7c) = *(byte *)((long)plVar8 + 0x7c) | 1;
  FUN__text__004486c0(plVar8 + 4,plVar9 + 0x18);
  return;
}


