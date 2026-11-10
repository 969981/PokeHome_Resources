/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aea70; name: FUN_.text__004aea70
 */


undefined8
FUN__text__004aea70(undefined8 *param_1,long param_2,uint param_3,uint *param_4,int param_5)

{
  void *__src;
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int local_44;
  
  if (param_5 != -1) {
    (**(code **)(*(long *)param_1[8] + 0x70))();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN__text__004ae5a0(param_1,param_5);
  }
  uVar11 = 0;
  uVar10 = 0;
  if (param_3 != 0) {
    uVar12 = param_3;
    do {
      uVar3 = *(uint *)(param_1 + 4);
      uVar6 = (ulong)uVar3;
      uVar8 = *(uint *)((long)param_1 + uVar6 * 4 + 0x18);
      uVar10 = (uint)uVar11;
      if (uVar8 == 0) {
        if ((long *)param_1[8] == (long *)0x0) break;
        uVar9 = (ulong)(uVar3 == 0);
        if (*(int *)((long)param_1 + uVar9 * 4 + 0x18) != 0) {
          iVar4 = (**(code **)(*(long *)param_1[8] + 0x70))();
          if (iVar4 != 4) {
            uVar7 = param_1[uVar9];
            uVar8 = (uint)(uVar3 == 0);
            *(uint *)(param_1 + 4) = uVar8;
            param_1[2] = uVar7;
            uVar6 = (ulong)uVar8;
            goto LAB__text__004aeb98;
          }
LAB__text__004aecb4:
          uVar7 = 0x38;
          goto LAB__text__004aec94;
        }
LAB__text__004aeb98:
        local_44 = 0;
        if (uVar12 < *(uint *)((long)param_1 + 0x24)) {
          uVar8 = *(uint *)(param_1 + 6);
          uVar6 = (ulong)((int)uVar6 == 0);
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = *(uint *)((long)param_1 + 0x24) / uVar8;
          }
          iVar4 = (**(code **)(*(long *)param_1[8] + 0x38))
                            ((float)(uVar3 * uVar8) / *(float *)(param_1 + 9),(long *)param_1[8],
                             param_1[uVar6],uVar3 * uVar8,0,*(undefined1 *)((long)param_1 + 0x4c),
                             &local_44);
          if (iVar4 != 1) goto LAB__text__004aecb4;
          if (local_44 != 0) {
            *(int *)((long)param_1 + uVar6 * 4 + 0x18) = local_44;
            goto LAB__text__004aeb40;
          }
        }
        else if (*(int *)((long)param_1 + uVar6 * 4 + 0x18) == 0) {
          uVar8 = *(uint *)(param_1 + 6);
          uVar3 = 0;
          if (uVar8 != 0) {
            uVar3 = uVar12 / uVar8;
          }
          iVar4 = (**(code **)(*(long *)param_1[8] + 0x38))
                            ((float)(uVar3 * uVar8) / *(float *)(param_1 + 9),(long *)param_1[8],
                             param_2 + uVar11,uVar3 * uVar8,1,*(undefined1 *)((long)param_1 + 0x4c),
                             &local_44);
          if ((iVar4 != 1) || (iVar4 = (**(code **)(*(long *)param_1[8] + 0x68))(), iVar4 != 1))
          goto LAB__text__004aecb4;
          uVar11 = (ulong)(local_44 + uVar10);
          uVar12 = uVar12 - local_44;
          if (local_44 != 0) goto LAB__text__004aeb40;
        }
        uVar10 = (uint)uVar11;
        if (*(int *)((long)param_1 + (ulong)*(uint *)(param_1 + 4) * 4 + 0x18) == 0) break;
      }
      else {
        __src = (void *)param_1[2];
        if ((void *)param_1[10] != (void *)0x0) {
          __src = (void *)param_1[10];
        }
        if (uVar12 <= uVar8) {
          uVar8 = uVar12;
        }
        memcpy((void *)(param_2 + uVar11),__src,(ulong)uVar8);
        lVar5 = param_1[10];
        uVar11 = (ulong)(uVar8 + uVar10);
        uVar12 = uVar12 - uVar8;
        lVar1 = param_1[2];
        if (lVar5 != 0) {
          lVar1 = lVar5;
        }
        lVar2 = 0x10;
        if (lVar5 != 0) {
          lVar2 = 0x50;
        }
        *(ulong *)((long)param_1 + lVar2) = lVar1 + (ulong)uVar8;
        *(uint *)((long)param_1 + (ulong)*(uint *)(param_1 + 4) * 4 + 0x18) =
             *(int *)((long)param_1 + (ulong)*(uint *)(param_1 + 4) * 4 + 0x18) - uVar8;
      }
LAB__text__004aeb40:
      uVar10 = (uint)uVar11;
    } while (uVar10 < param_3);
  }
  uVar7 = 1;
LAB__text__004aec94:
  *param_4 = uVar10;
  return uVar7;
}


