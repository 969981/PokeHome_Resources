/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c7d54; name: FUN_.text__001c7d54
 */


void FUN__text__001c7d54(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long local_60;
  long local_58;
  undefined8 local_48;
  
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_3 + 8));
  FUN__text__001156d0(&local_48,uVar1,0);
  lVar6 = *(long *)(local_48 + 0x60);
  if (lVar6 == 0) {
    plVar4 = (long *)(local_48 + 0x48);
    lVar6 = *plVar4;
LAB__text__001c7f1c:
    (**(code **)(lVar6 + 0x18))(plVar4);
    return;
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  if ((local_48 != 0) && ((**(code **)(*(long *)(local_48 + 0x48) + 0x18))(), lVar6 == 0)) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_3 + 8) + 0x2d0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    uVar7 = FUN__text__003c7a20(lVar3,param_3 + 0x50);
    FUN__text__003c7a20(lVar3,param_3 + 0x40);
    local_48 = CONCAT44(param_2,uVar7);
    FUN__text__003c7960(lVar3,param_3 + 0x40,&local_48);
  }
  lVar5 = *(long *)(param_3 + 0x10);
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar6 + 0x48);
    local_58 = lVar6;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_48 = 0xbfe9757fb6fe868;
    lVar2 = FUN__text__00321ac0();
    FUN__text__001abea8(lVar5,param_3 + 0x40,&local_58,&local_48,0,
                        *(undefined2 *)(&DAT__text__0019376e + lVar2));
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar5 = *(long *)(param_3 + 0x10);
    if (lVar5 != 0) {
      local_60 = lVar6;
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(plVar4);
      local_48 = 0xbfe9a57fb6fed81;
      lVar6 = FUN__text__00321ac0();
      FUN__text__001abea8(lVar5,param_3 + 0x50,&local_60,&local_48,0,
                          *(undefined2 *)(&DAT__text__0019376c + lVar6));
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      lVar6 = *plVar4;
      goto LAB__text__001c7f1c;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


