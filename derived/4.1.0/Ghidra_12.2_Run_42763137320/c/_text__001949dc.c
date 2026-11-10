/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001949dc; name: FUN_.text__001949dc
 */


uint FUN__text__001949dc(undefined8 param_1,long *param_2,uint *param_3,undefined8 param_4,
                        uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long local_68;
  uint local_5c;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = *param_2;
  if ((local_68 == 0) || (param_3 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  plVar6 = (long *)(local_68 + 0x48);
  local_5c = 0;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar2 = FUN__text__00194330(param_1,&local_68,&local_5c,param_4,param_5 & 1);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  if ((uVar2 & 1) == 0) goto LAB__text__00194b44;
  lVar3 = FUN__text__00325bc0();
  if (*(int *)(lVar3 + 0x2c) == 0) {
    if (local_5c < 0xd) {
      uVar5 = *(undefined1 *)((long)(int)local_5c + 0x72595c);
    }
    else {
      uVar5 = 0;
    }
    FUN__text__00306b34(*param_2,uVar5);
  }
  else {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = 3;
    if (local_5c != 0) {
      uVar1 = local_5c;
    }
    lVar4 = FUN__text__00195358(param_1,param_4);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 0)) {
      FUN__text__00306824(lVar3);
      if (lVar3 != 0) goto LAB__text__00194b00;
    }
    else {
      local_50 = *(undefined8 *)(lVar4 + 8);
      uStack_48 = *(undefined8 *)(lVar4 + 0x10);
      local_58 = lVar3;
      if (lVar3 == 0) {
        FUN__text__00194d78(param_1,&local_58,&local_50,uVar1);
      }
      else {
        plVar6 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN__text__00194d78(param_1,&local_58,&local_50,uVar1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
LAB__text__00194b00:
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
    }
  }
  *param_3 = local_5c;
LAB__text__00194b44:
  return uVar2 & 1;
}


