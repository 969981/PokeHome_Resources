/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001951d4; name: FUN_.text__001951d4
 */


void FUN__text__001951d4(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = FUN__text__00195358(param_1,param_3);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != 0)) {
    uVar5 = *(ulong *)(lVar1 + 8);
    lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar5 & 0xffffffff) * 0x20 +
                                         0x10) + 0x10) + 8);
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      local_58 = *param_2;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN__text__00301f08(lVar2,&local_58,uVar5 >> 0x20,(int)uVar4 + (int)((ulong)uVar4 >> 0x20) * 6
                          ,param_4 & 1);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
    local_a0 = *(long *)(param_1 + 0x30);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (local_a0 == 0) {
      FUN__text__00191408(&local_98,&local_a0,param_1,param_3);
    }
    else {
      plVar3 = (long *)(local_a0 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN__text__00191408(&local_98,&local_a0,param_1,param_3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    *(undefined8 *)(lVar1 + 0x40) = local_78;
    *(undefined8 *)(lVar1 + 0x48) = uStack_70;
    *(undefined8 *)(lVar1 + 0x50) = local_68;
    *(undefined8 *)(lVar1 + 0x58) = uStack_60;
    *(undefined8 *)(lVar1 + 0x20) = local_98;
    *(undefined8 *)(lVar1 + 0x28) = uStack_90;
    *(undefined8 *)(lVar1 + 0x30) = local_88;
    *(undefined8 *)(lVar1 + 0x38) = uStack_80;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  return;
}


