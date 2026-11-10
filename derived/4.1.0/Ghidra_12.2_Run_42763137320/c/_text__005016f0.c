/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005016f0; name: FUN_.text__005016f0
 */


undefined8 FUN__text__005016f0(long param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined2 local_6c [2];
  undefined1 local_68 [4];
  int local_64;
  ushort local_48 [2];
  undefined1 auStack_44 [4];
  
  uVar9 = 2;
  uVar3 = (**(code **)*param_2)(param_2,local_48,2,auStack_44);
  if ((uVar3 & 1) != 0) {
    if (local_48[0] != 0) {
      uVar10 = 0;
      do {
        uVar3 = (**(code **)*param_2)(param_2,&local_64,4,auStack_44);
        if ((uVar3 & 1) == 0) {
          return 2;
        }
        uVar3 = (**(code **)*param_2)(param_2,local_68,1,auStack_44);
        if ((uVar3 & 1) == 0) {
          return 2;
        }
        uVar3 = (**(code **)*param_2)(param_2,local_6c,2,auStack_44);
        if ((uVar3 & 1) == 0) {
          return 2;
        }
        plVar4 = (long *)FUN__text__004ff328(local_68[0],local_6c[0],0);
        iVar2 = local_64;
        uVar1 = local_6c[0];
        if (plVar4 == (long *)0x0) {
          return 2;
        }
        piVar5 = *(int **)(param_1 + 0x38);
        uVar11 = *(uint *)(param_1 + 0x40);
        piVar7 = piVar5;
        if (uVar11 == 0) {
LAB__text__00501810:
          if (piVar7 == piVar5 + (ulong)uVar11 * 6) goto LAB__text__00501830;
          plVar6 = (long *)(piVar7 + 2);
        }
        else {
          lVar8 = (ulong)uVar11 * 0x18;
          do {
            if (*piVar7 == local_64) goto LAB__text__00501810;
            piVar7 = piVar7 + 6;
            lVar8 = lVar8 + -0x18;
          } while (lVar8 != 0);
LAB__text__00501830:
          if (*(uint *)(param_1 + 0x44) <= uVar11) {
            uVar3 = FUN__text__00501bb0(param_1 + 0x38);
            if ((uVar3 & 1) == 0) {
              return 2;
            }
            if (*(uint *)(param_1 + 0x44) <= uVar11) {
              return 2;
            }
            uVar11 = *(uint *)(param_1 + 0x40);
            piVar5 = *(int **)(param_1 + 0x38);
          }
          *(uint *)(param_1 + 0x40) = uVar11 + 1;
          if (piVar5 == (int *)0x0) {
            return 2;
          }
          piVar5 = piVar5 + (ulong)uVar11 * 6;
          *(undefined2 *)(piVar5 + 4) = 0;
          *piVar5 = iVar2;
          plVar6 = (long *)(piVar5 + 2);
          *plVar6 = 0;
        }
        *plVar6 = (long)plVar4;
        *(undefined2 *)(plVar6 + 1) = uVar1;
        iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2,local_6c[0]);
        if (iVar2 != 1) {
          return 2;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_48[0]);
    }
    uVar9 = 1;
  }
  return uVar9;
}


