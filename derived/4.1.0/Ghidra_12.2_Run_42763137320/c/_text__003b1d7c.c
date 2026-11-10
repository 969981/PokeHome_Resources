/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b1d7c; name: FUN_.text__003b1d7c
 */


undefined8 FUN__text__003b1d7c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  long *local_58;
  long lStack_50;
  long local_40;
  undefined4 local_34;
  long local_18;
  
  if (param_2 == 0) {
    uVar4 = 1;
  }
  else {
    FUN__text__005e927c(&local_58,0x882648);
    FUN__text__003c1e4c(&local_58);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
    lVar2 = *(long *)(param_1 + 0x800);
    iVar1 = FUN__text__003b7414(lVar2,*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x10));
    *(int *)(param_1 + 0x868) = iVar1;
    if (iVar1 != -1) {
      lVar2 = param_1 + 0x788;
      plVar3 = (long *)FUN__text__003b8e30(lVar2,iVar1);
      if (plVar3 != (long *)0x0) {
        lStack_50 = *plVar3;
        local_58 = &local_18;
        local_18 = 0;
        FUN__text__003aa1c0(param_1,&local_58,0);
        local_58 = *(long **)(local_18 + 0x88);
        (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_58,0);
      }
      if (*(int *)(param_1 + 0x868) != -1) {
        plVar3 = (long *)FUN__text__003b8e30(lVar2,0xffffffff);
        if (plVar3 != (long *)0x0) {
          lStack_50 = *plVar3;
          local_58 = &local_18;
          local_18 = 0;
          FUN__text__003aa1c0(param_1,&local_58,0);
          FUN__text__003a14e8(local_18,1);
          if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
            local_58 = (long *)*plVar3;
            local_18 = CONCAT44(local_18._4_4_,*(undefined4 *)(param_1 + 0x868));
            local_34 = (undefined4)plVar3[2];
            (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&local_18,&local_58,&local_34);
          }
        }
        if ((*(int *)(param_1 + 0x868) != -1) &&
           (plVar3 = (long *)FUN__text__003b8e30(lVar2,0xffffffff), plVar3 != (long *)0x0)) {
          lStack_50 = *plVar3;
          local_58 = &local_18;
          local_18 = 0;
          FUN__text__003aa1c0(param_1,&local_58,0);
          if (local_18 != 0) {
            iVar1 = *(int *)(param_1 + 0x8b4);
            iVar5 = *(int *)(param_1 + 0x8b8);
            lVar2 = *(long *)(param_1 + 2000);
            *(undefined8 *)(lVar2 + 0x150) = *(undefined8 *)(local_18 + 0x88);
            *(undefined1 *)(lVar2 + 0x149) = 1;
            *(float *)(lVar2 + 0x160) = (float)iVar1;
            *(float *)(lVar2 + 0x164) = (float)iVar5;
            if ((*(long *)(lVar2 + 0xb8) != -0x340d631b7bddd9bb) && (*(long *)(lVar2 + 0xb8) != 0))
            {
              (**(code **)(**(long **)(lVar2 + 0x98) + 0x78))();
            }
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x85) = 1;
    uVar4 = 0;
  }
  FUN__text__003a1648(param_1,uVar4);
  return 1;
}


