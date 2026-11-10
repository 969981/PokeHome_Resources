/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c798c; name: FUN_.text__001c798c
 */


void FUN__text__001c798c(long param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_48;
  long local_28;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar2 = FUN__text__00323610();
  if ((param_2 & 1) == 0) {
    FUN__text__003c7c60(lVar5,param_1 + 0x58,0);
LAB__text__001c7ab8:
    puVar4 = *(undefined8 **)(param_1 + 0x18);
  }
  else {
    FUN__text__003c7c60(lVar5,param_1 + 0x58,1);
    uVar3 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
    FUN__text__001156d0(&local_28,uVar3,0);
    lVar6 = *(long *)(local_28 + 0x60);
    if (lVar6 == 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      puVar4 = *(undefined8 **)(param_1 + 0x18);
    }
    else {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x18))(), lVar6 == 0))
      goto LAB__text__001c7ab8;
      lVar8 = *(long *)(param_1 + 0x10);
      if (lVar8 == 0) goto LAB__text__001c7b2c;
      plVar7 = (long *)(lVar6 + 0x48);
      local_48 = lVar6;
      (**(code **)(*plVar7 + 0x10))(plVar7);
      local_28 = 0x29c96b49965514ed;
      FUN__text__001abfc4(lVar8,param_1 + 0x68,&local_48,&local_28,0,uVar2);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
      puVar4 = *(undefined8 **)(param_1 + 0x18);
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    if ((uint *)*puVar4 != (uint *)0x0) {
      uVar1 = *(uint *)*puVar4;
      if (uVar1 < 2) {
        FUN__text__001c7b68(param_1);
      }
      else if (uVar1 == 2) {
        FUN__text__001c7d54(param_1);
      }
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    return;
  }
LAB__text__001c7b2c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


