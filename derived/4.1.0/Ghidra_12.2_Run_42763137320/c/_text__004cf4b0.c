/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cf4b0; name: FUN_.text__004cf4b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__004cf4b0(long *param_1,uint param_2,long param_3,long param_4)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ushort *puVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  long local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if (((param_4 != 0) && (*(long *)(*param_1 + 8) != 0)) &&
     (*(int *)(*(long *)(*param_1 + 8) + (ulong)param_2 * 8 + 4) != 0)) {
    uVar8 = (ulong)(param_2 + 0x1d);
    if (((*(ulong **)(param_4 + 0x58) != (ulong *)0x0) &&
        ((**(ulong **)(param_4 + 0x58) >> (uVar8 & 0x3f) & 1) != 0)) ||
       (uVar2 = (**(code **)(*(long *)(param_4 + 0x28) + 0x20))((long *)(param_4 + 0x28),uVar8),
       (uVar2 & 1) != 0)) {
      local_48 = 0;
      local_58 = 0xff;
      local_50 = 0xff;
      plVar9 = (long *)(param_4 + 0x28);
      local_68 = 0;
      local_60 = 0;
      local_70 = param_3;
      uVar2 = (**(code **)(*plVar9 + 0x20))(plVar9,uVar8);
      fVar11 = 0.0;
      if ((((uVar2 & 1) != 0) && (*(char *)(param_4 + 0x30) != '\0')) &&
         ((uVar2 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar8), (uVar2 & 1) != 0 &&
          ((plVar9 = (long *)(**(code **)(*plVar9 + 0x80))(plVar9), plVar9 != (long *)0x0 &&
           (lVar3 = *plVar9, lVar3 != 0)))))) {
        do {
          puVar5 = *(ushort **)(lVar3 + 0x20);
          if (puVar5 != (ushort *)0x0) {
            uVar1 = *puVar5;
            uVar7 = (uint)uVar1;
            if (uVar1 < 2) {
              uVar7 = 1;
            }
            uVar2 = (ulong)uVar7;
            pfVar6 = (float *)((long)puVar5 + ((ulong)((uint)uVar1 * 2 + 9) & 0x3fff8));
            do {
              puVar5 = puVar5 + 1;
              if ((uint)*puVar5 == (param_2 + 0x1d & 0xffff)) {
                fVar11 = *pfVar6 + fVar11;
                break;
              }
              pfVar6 = pfVar6 + 4;
              uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
          }
          lVar3 = *(long *)(lVar3 + 0x10);
        } while (lVar3 != 0);
      }
      if ((*(ulong **)(param_4 + 0x58) != (ulong *)0x0) &&
         ((**(ulong **)(param_4 + 0x58) >> (uVar8 & 0x3f) & 1) != 0)) {
        fVar10 = (float)FUN__text__00419e90(*_DAT_008a45f0,param_4 + 0x48,uVar8,&local_70);
        fVar11 = fVar10 + fVar11;
      }
      return (int)fVar11;
    }
  }
  plVar9 = (long *)param_1[2];
  if (plVar9 != (long *)0x0) {
    plVar4 = (long *)*plVar9;
    uVar7 = *(uint *)(plVar9 + 1);
    plVar9 = plVar4;
    if (uVar7 == 0) {
LAB__text__004cf5e4:
      if (plVar9 != plVar4 + (ulong)uVar7 * 2) {
        uVar7 = (uint)*(byte *)(plVar9[1] + 0x20);
        goto LAB__text__004cf61c;
      }
    }
    else {
      lVar3 = (ulong)uVar7 << 4;
      do {
        if (*plVar9 == param_3) goto LAB__text__004cf5e4;
        plVar9 = plVar9 + 2;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
  }
  if (param_1[1] == 0) {
    uVar7 = 0;
    if (*(long *)(*param_1 + 8) != 0) {
      uVar7 = (uint)*(byte *)(*(long *)(*param_1 + 8) + 0x24);
    }
  }
  else {
    uVar7 = (uint)*(byte *)(param_1[1] + 0x20);
  }
LAB__text__004cf61c:
  return uVar7 >> (ulong)(param_2 & 0x1f) & 1;
}


