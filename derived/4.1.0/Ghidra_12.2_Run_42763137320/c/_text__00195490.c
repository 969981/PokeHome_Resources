/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00195490; name: FUN_.text__00195490
 */


void FUN__text__00195490(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN__text__00195358();
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != 0)) {
    local_78 = *(long *)(param_1 + 0x30);
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    if (local_78 == 0) {
      FUN__text__00191408(&local_70,&local_78,param_1,param_2);
    }
    else {
      plVar2 = (long *)(local_78 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__00191408(&local_70,&local_78,param_1,param_2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    *(undefined8 *)(lVar1 + 0x40) = local_50;
    *(undefined8 *)(lVar1 + 0x48) = uStack_48;
    *(undefined8 *)(lVar1 + 0x50) = local_40;
    *(undefined8 *)(lVar1 + 0x58) = uStack_38;
    *(undefined8 *)(lVar1 + 0x20) = local_70;
    *(undefined8 *)(lVar1 + 0x28) = uStack_68;
    *(undefined8 *)(lVar1 + 0x30) = local_60;
    *(undefined8 *)(lVar1 + 0x38) = uStack_58;
  }
  return;
}


