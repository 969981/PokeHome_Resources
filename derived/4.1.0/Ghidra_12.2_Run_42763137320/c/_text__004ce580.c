/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce580; name: FUN_.text__004ce580
 */


undefined8 FUN__text__004ce580(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  
  pbVar7 = (byte *)*param_2 + 1;
  bVar3 = *(byte *)*param_2;
  uVar11 = (uint)bVar3;
  *param_2 = (long)pbVar7;
  if (bVar3 == 0) {
    return 1;
  }
  if (param_1[1] == 0) {
    lVar6 = FUN__text__00400f80(2,0x28);
    if (lVar6 == 0) {
      param_1[1] = 0;
      return 0x34;
    }
    FUN__text__004ce514();
    param_1[1] = lVar6;
    pbVar7 = (byte *)*param_2;
  }
  bVar3 = *pbVar7;
  *param_2 = (long)(pbVar7 + 1);
  do {
    pbVar7 = (byte *)*param_2;
    bVar4 = *pbVar7;
    *param_2 = (long)(pbVar7 + 1);
    iVar2 = *(int *)(pbVar7 + 1);
    *param_2 = (long)(pbVar7 + 5);
    bVar5 = pbVar7[5];
    *param_2 = (long)(pbVar7 + 7);
    if (iVar2 != 0) {
      piVar10 = (int *)param_1[1];
      if (3 < bVar4) {
        uVar9 = 0x1f;
        goto joined_r0x004ce710;
      }
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)FUN__text__00400f80(2,0x28);
        if (piVar10 == (int *)0x0) {
          param_1[1] = 0;
          uVar9 = 0x34;
          if (bVar3 == 0) {
            return 0x34;
          }
          goto LAB__text__004ce6ec;
        }
        FUN__text__004ce514();
        param_1[1] = piVar10;
        iVar1 = *piVar10;
      }
      else {
        iVar1 = *piVar10;
      }
      if (iVar1 < 1) {
        *piVar10 = 0;
        lVar6 = param_1[1] + (ulong)bVar4 * 8;
        pcVar8 = (char *)(lVar6 + 9);
        piVar10 = (int *)(lVar6 + 4);
        if (((bool)*pcVar8 != (bVar5 != 0)) || (*piVar10 != iVar2)) {
          *pcVar8 = bVar5 != 0;
          *piVar10 = iVar2;
          (**(code **)(*(long *)*param_1 + 0x18))();
          (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,(ulong)bVar4);
        }
      }
    }
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  piVar10 = (int *)param_1[1];
  uVar9 = 1;
joined_r0x004ce710:
  if (piVar10 == (int *)0x0) {
    if (bVar3 == 0) {
      return uVar9;
    }
LAB__text__004ce6ec:
    piVar10 = (int *)FUN__text__00400f80(2,0x28);
    if (piVar10 == (int *)0x0) {
      param_1[1] = 0;
      return uVar9;
    }
    FUN__text__004ce514();
    param_1[1] = piVar10;
  }
  *(byte *)(piVar10 + 9) = bVar3;
  return uVar9;
}


