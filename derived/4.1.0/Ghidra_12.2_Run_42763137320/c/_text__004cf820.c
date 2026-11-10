/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cf820; name: FUN_.text__004cf820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__004cf820(long *param_1,long param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ushort *puVar5;
  float *pfVar6;
  uint uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  long local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if ((param_3 != 0) &&
     (((*(long *)(param_3 + 0x58) != 0 && ((*(byte *)(*(long *)(param_3 + 0x58) + 4) >> 1 & 1) != 0)
       ) || (uVar2 = (**(code **)(*(long *)(param_3 + 0x28) + 0x20))((long *)(param_3 + 0x28),0x21),
            (uVar2 & 1) != 0)))) {
    local_38 = 0;
    local_48 = 0xff;
    local_40 = 0xff;
    plVar8 = (long *)(param_3 + 0x28);
    local_58 = 0;
    local_50 = 0;
    local_60 = param_2;
    uVar2 = (**(code **)(*plVar8 + 0x20))(plVar8,0x21);
    fVar10 = 0.0;
    if (((((uVar2 & 1) != 0) && (*(char *)(param_3 + 0x30) != '\0')) &&
        (uVar2 = (**(code **)(*plVar8 + 0x28))(plVar8,0x21), (uVar2 & 1) != 0)) &&
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x80))(plVar8), plVar8 != (long *)0x0)) {
      for (lVar3 = *plVar8; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
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
            if (*puVar5 == 0x21) {
              fVar10 = *pfVar6 + fVar10;
              break;
            }
            pfVar6 = pfVar6 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
      }
    }
    if ((*(long *)(param_3 + 0x58) != 0) &&
       ((*(byte *)(*(long *)(param_3 + 0x58) + 4) >> 1 & 1) != 0)) {
      fVar9 = (float)FUN__text__00419e90(*_DAT_008a45f0,param_3 + 0x48,0x21,&local_60);
      fVar10 = fVar9 + fVar10;
    }
    return (int)fVar10;
  }
  plVar8 = (long *)param_1[2];
  if (plVar8 != (long *)0x0) {
    plVar4 = (long *)*plVar8;
    uVar7 = *(uint *)(plVar8 + 1);
    plVar8 = plVar4;
    if (uVar7 == 0) {
LAB__text__004cf9d0:
      if (plVar8 != plVar4 + (ulong)uVar7 * 2) {
        uVar7 = (uint)*(byte *)(plVar8[1] + 0x20);
        goto LAB__text__004cfa08;
      }
    }
    else {
      lVar3 = (ulong)uVar7 << 4;
      do {
        if (*plVar8 == param_2) goto LAB__text__004cf9d0;
        plVar8 = plVar8 + 2;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
  }
  if (param_1[1] == 0) {
    if (*(long *)(*param_1 + 8) == 0) {
      return 0;
    }
    uVar7 = (uint)*(byte *)(*(long *)(*param_1 + 8) + 0x24);
  }
  else {
    uVar7 = (uint)*(byte *)(param_1[1] + 0x20);
  }
LAB__text__004cfa08:
  return uVar7 >> 4 & 1;
}


