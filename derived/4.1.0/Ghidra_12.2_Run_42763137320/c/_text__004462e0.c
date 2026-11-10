/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004462e0; name: FUN_.text__004462e0
 */


void FUN__text__004462e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  plVar5 = *(long **)(lVar2 + 0x48);
  if (plVar5 != (long *)0x0) {
    do {
      plVar3 = (long *)plVar5[2];
      iVar4 = *(int *)(param_1 + 0x34);
      if (plVar3[0x12] == 0) {
        *(int *)(plVar3 + 0x13) = iVar4;
        uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
        if ((uVar1 & 1) != 0) goto LAB__text__00446320;
LAB__text__00446398:
        if ((int)plVar5[1] == 2) {
          (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_1 + 0x20));
        }
        else if ((int)plVar5[1] == 3) goto LAB__text__00446328;
      }
      else {
        FUN__text__004587a0(plVar3[0x12],iVar4);
        uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
        if ((uVar1 & 1) == 0) goto LAB__text__00446398;
LAB__text__00446320:
        *(undefined4 *)(plVar5 + 1) = 3;
        iVar4 = -1;
LAB__text__00446328:
        *(int *)(plVar3 + 0x70) = iVar4;
        local_38 = 0x400000000;
        FUN__text__00474488(plVar3,&local_38,iVar4 == -1);
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  for (plVar5 = *(long **)(lVar2 + 0x70); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    FUN__text__004b6220(DAT_00ae9a40,plVar5[2],*(undefined8 *)(param_1 + 0x20),
                        *(undefined4 *)(plVar5 + 1));
  }
  return;
}


