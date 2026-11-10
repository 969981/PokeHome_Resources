/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c7f44; name: FUN_.text__001c7f44
 */


void FUN__text__001c7f44(long param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_68;
  long local_48;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar8 = *(long *)(lVar7 + 0x158);
  if (lVar8 != 0) {
    lVar6 = *(long *)(lVar7 + 0x10);
    plVar5 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if ((lVar6 != 0) && (lVar4 = FUN__text__00196220(lVar6), lVar4 != 0)) {
      uVar1 = FUN__text__00192d60();
      *param_3 = uVar1;
      uVar2 = FUN__text__00192c00(lVar4);
      local_48 = lVar8;
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar5);
      uVar1 = FUN__text__00195c10(lVar6,&local_48,lVar4);
      *param_2 = uVar1;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      local_68 = lVar8;
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar5);
      uVar3 = FUN__text__00196090(lVar6,&local_68,lVar4);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (uVar3 <= uVar2) {
        *param_4 = uVar2 - uVar3;
      }
      if (**(int **)(lVar7 + 0x38) == 0) {
        *param_3 = *(undefined4 *)(*(long *)(lVar4 + 0x150) + 0x14);
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


