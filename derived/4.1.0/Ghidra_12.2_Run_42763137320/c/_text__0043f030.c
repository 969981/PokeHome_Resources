/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043f030; name: FUN_.text__0043f030
 */


long FUN__text__0043f030(long param_1,ulong *param_2,long *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar7 = *param_2;
  if ((((uVar7 == 0 && (int)param_2[1] == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1))
     && (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
    if (param_4 != 0) {
      *(bool *)param_4 = *(int *)(param_1 + 0x20) != 0;
    }
    lVar6 = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      lVar6 = param_1 + 8;
    }
    return lVar6;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
    *param_3 = param_1 + 8;
    uVar7 = *param_2;
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (uVar8 != 0) {
    lVar6 = *(long *)(param_1 + 0x18);
    iVar9 = 0;
    do {
      iVar1 = iVar9 + (uVar8 >> 1);
      uVar11 = *(ulong *)(lVar6 + (long)iVar1 * 0x28);
      if (uVar11 == uVar7) {
        uVar8 = (uint)param_2[1];
        if ((((uVar8 == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
           (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
          if (param_4 != 0) {
            *(bool *)param_4 = *(int *)(lVar6 + (long)iVar1 * 0x28 + 0x20) != 0;
          }
          lVar6 = lVar6 + (long)iVar1 * 0x28;
          lVar3 = 0;
          if (*(char *)(lVar6 + 0x10) != '\0') {
            lVar3 = lVar6 + 8;
          }
          return lVar3;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar6 + (long)iVar1 * 0x28 + 0x10) != '\0')) {
          *param_3 = lVar6 + (long)iVar1 * 0x28 + 8;
          uVar8 = (uint)param_2[1];
        }
        uVar10 = *(uint *)(lVar6 + (long)iVar1 * 0x28 + 0x20);
        if (uVar10 == 0) {
          return 0;
        }
        iVar9 = 0;
        do {
          iVar2 = iVar9 + (uVar10 >> 1);
          puVar5 = (uint *)(*(long *)(lVar6 + (long)iVar1 * 0x28 + 0x18) + (long)iVar2 * 0x28);
          uVar4 = *puVar5;
          if (uVar4 == uVar8) {
            lVar6 = FUN__text__00443a90(puVar5,param_2 + 2);
            return lVar6;
          }
          if (uVar4 < uVar8) {
            iVar9 = iVar2 + 1;
          }
          uVar4 = uVar10 - (uVar4 < uVar8);
          uVar10 = uVar4 >> 1;
        } while (1 < uVar4);
        return 0;
      }
      if (uVar11 < uVar7) {
        iVar9 = iVar1 + 1;
      }
      uVar10 = uVar8 - (uVar11 < uVar7);
      uVar8 = uVar10 >> 1;
    } while (1 < uVar10);
  }
  return 0;
}


