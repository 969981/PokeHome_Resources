/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019e97c; name: FUN_.text__0019e97c
 */


void FUN__text__0019e97c(long param_1,undefined8 *param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  uVar2 = param_2[1];
  piVar1 = (int *)(param_1 + 0x1c4);
  iVar3 = *(int *)(param_1 + 0x1c4);
  iVar4 = *(int *)(param_1 + 0x1c8);
  *(undefined8 *)piVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x1cc) = uVar2;
  iVar7 = *(int *)(param_1 + 0x1c8);
  if (iVar7 == 0) {
    *(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x1c4) * 8 + 0x1d4) =
         *(undefined8 *)(param_1 + 0x1cc);
    iVar7 = *(int *)(param_1 + 0x1c8);
  }
  if ((((param_4 & 1) != 0) || (*piVar1 != iVar3)) || (iVar7 != iVar4)) {
    if (*(int *)(param_1 + 0x1bc) != 0) {
      if (*(int *)(param_1 + 0x1bc) == 4) {
        plVar5 = *(long **)(param_1 + 0x68);
      }
      else {
        plVar5 = *(long **)(param_1 + 0xa8);
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,1);
    }
    if (*(int *)(param_1 + 0x1c0) != 0) {
      if (*(int *)(param_1 + 0x1c0) == 4) {
        plVar5 = *(long **)(param_1 + 0x88);
      }
      else {
        plVar5 = *(long **)(param_1 + 200);
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,1);
    }
    if (*piVar1 == 0) {
      if (*(int *)(param_1 + 0x1c0) != 0) {
        if (*(int *)(param_1 + 0x1c0) == 4) {
          plVar5 = *(long **)(param_1 + 200);
        }
        else {
          plVar5 = *(long **)(param_1 + 0x88);
        }
        (**(code **)(*plVar5 + 0x28))(plVar5,param_3 & 1);
      }
      if (*(int *)(param_1 + 0x1bc) != 0) {
        if (*(int *)(param_1 + 0x1bc) == 4) {
          (**(code **)(**(long **)(param_1 + 0xa8) + 0x20))
                    (*(long **)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x1c8),param_1 + 0x1cc,
                     param_3 & 1);
          lVar6 = 0x725150;
        }
        else {
          (**(code **)(**(long **)(param_1 + 0x68) + 0x20))
                    (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x1c8),param_1 + 0x1cc,
                     param_3 & 1);
          lVar6 = 0x725030;
        }
        FUN__text__001a36bc(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(lVar6 + (long)iVar7 * 4)
                           );
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x1bc) != 0) {
        if (*(int *)(param_1 + 0x1bc) == 4) {
          plVar5 = *(long **)(param_1 + 0xa8);
        }
        else {
          plVar5 = *(long **)(param_1 + 0x68);
        }
        (**(code **)(*plVar5 + 0x28))(plVar5,param_3 & 1);
      }
      if (*(int *)(param_1 + 0x1c0) != 0) {
        if (*(int *)(param_1 + 0x1c0) == 4) {
          (**(code **)(**(long **)(param_1 + 200) + 0x20))
                    (*(long **)(param_1 + 200),*(undefined4 *)(param_1 + 0x1c8),param_1 + 0x1cc,
                     param_3 & 1);
          lVar6 = 0x725150;
        }
        else {
          (**(code **)(**(long **)(param_1 + 0x88) + 0x20))
                    (*(long **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1c8),param_1 + 0x1cc,
                     param_3 & 1);
          lVar6 = 0x725030;
        }
        FUN__text__001a36bc(*(undefined8 *)(param_1 + 0x28),
                            *(undefined4 *)(lVar6 + (long)iVar7 * 4 + 0x10));
        return;
      }
    }
  }
  return;
}


