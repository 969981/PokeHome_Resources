/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3ed0; name: FUN_.text__004c3ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004c3ed0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint5 *puVar3;
  ulong uVar4;
  uint5 *puVar5;
  uint5 *puVar6;
  uint5 *puVar7;
  uint5 *puVar8;
  uint5 *puVar9;
  
  puVar1 = _DAT_008a45f0;
  puVar3 = *(uint5 **)(param_1 + 0x40);
  puVar7 = (uint5 *)*param_2;
  uVar4 = (ulong)*(uint *)(param_1 + 0x48);
  puVar8 = puVar7;
  puVar5 = puVar3;
  if (*(uint *)(param_1 + 0x48) == 0) {
    uVar4 = 0;
LAB__text__004c40c0:
    puVar6 = puVar7 + *(uint *)(param_2 + 1);
    puVar7 = puVar8;
    if (puVar8 != puVar6) goto LAB__text__004c40e0;
LAB__text__004c4154:
    if (puVar5 == puVar3 + uVar4) goto LAB__text__004c4194;
  }
  else {
    puVar6 = (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8);
    if (puVar7 != puVar6) {
      puVar9 = puVar3;
      do {
        puVar7 = puVar8;
        if ((ulong)*puVar8 < (ulong)*puVar9) {
          do {
            puVar8 = puVar7 + 1;
            iVar2 = FUN__text__004345d0(*puVar1,*(undefined8 *)puVar7,param_1);
            if (iVar2 != 1) {
              return 0;
            }
            puVar6 = (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8);
            if (puVar8 == puVar6) {
              puVar3 = *(uint5 **)(param_1 + 0x40);
              uVar4 = (ulong)*(uint *)(param_1 + 0x48);
              goto LAB__text__004c4024;
            }
            puVar7 = puVar8;
          } while ((ulong)*puVar8 < (ulong)*puVar9);
        }
        puVar3 = *(uint5 **)(param_1 + 0x40);
        uVar4 = (ulong)*(uint *)(param_1 + 0x48);
        if (puVar8 == puVar6) {
LAB__text__004c4024:
          puVar5 = puVar3 + uVar4;
          puVar6 = puVar8;
          puVar7 = puVar9;
          if (puVar9 == puVar5) goto LAB__text__004c3f20;
LAB__text__004c4030:
          puVar5 = puVar7;
          puVar7 = puVar5;
          if ((ulong)*puVar5 < (ulong)*puVar8) {
            do {
              puVar5 = puVar7 + 1;
              FUN__text__00434930(*puVar1,*(undefined8 *)puVar7,param_1);
              puVar3 = *(uint5 **)(param_1 + 0x40);
              uVar4 = (ulong)*(uint *)(param_1 + 0x48);
              if (puVar5 == puVar3 + uVar4) break;
              puVar7 = puVar5;
            } while ((ulong)*puVar5 < (ulong)*puVar8);
          }
        }
        else {
          puVar7 = puVar3 + uVar4;
          do {
            if (puVar9 == puVar7) {
              puVar5 = puVar3 + uVar4;
              puVar6 = puVar8;
              if (puVar7 != puVar5) goto LAB__text__004c4030;
              goto LAB__text__004c3f20;
            }
            if ((ulong)*puVar8 != (ulong)*puVar9) goto LAB__text__004c4024;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          } while (puVar8 != puVar6);
          puVar5 = puVar3 + uVar4;
          puVar8 = puVar6;
          puVar7 = puVar9;
          if (puVar9 != puVar5) goto LAB__text__004c4030;
LAB__text__004c3f20:
          puVar8 = puVar6;
        }
        puVar7 = (uint5 *)*param_2;
        puVar6 = puVar7 + *(uint *)(param_2 + 1);
        puVar9 = puVar5;
      } while (puVar5 != puVar3 + uVar4 && puVar8 != puVar6);
      goto LAB__text__004c40c0;
    }
    if (puVar7 == (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8)) goto LAB__text__004c4154;
LAB__text__004c40e0:
    do {
      iVar2 = FUN__text__004345d0(DAT_00ae9a70,*(undefined8 *)puVar7,param_1);
      if (iVar2 != 1) {
        return 0;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (uint5 *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8));
    puVar3 = *(uint5 **)(param_1 + 0x40);
    if (puVar5 == puVar3 + *(uint *)(param_1 + 0x48)) goto LAB__text__004c4194;
  }
  do {
    puVar8 = puVar5 + 1;
    FUN__text__00434930(DAT_00ae9a70,*(undefined8 *)puVar5,param_1);
    puVar3 = *(uint5 **)(param_1 + 0x40);
    puVar5 = puVar8;
  } while (puVar8 != puVar3 + *(uint *)(param_1 + 0x48));
LAB__text__004c4194:
  if (puVar3 != (uint5 *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(long *)(param_1 + 0x40) = *param_2;
  *(int *)(param_1 + 0x48) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  return 1;
}


