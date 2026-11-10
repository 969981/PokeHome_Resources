/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00195668; name: FUN_.text__00195668
 */


undefined4 FUN__text__00195668(long param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long local_40;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 == 0) {
    FUN__text__001916b0(param_1,&local_38,param_3,0);
    uVar2 = FUN__text__00306588(*param_2);
  }
  else {
    plVar5 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__001916b0(param_1,&local_38,param_3,0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    uVar2 = FUN__text__00306588(*param_2);
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__00306a08(*param_2,2);
    if ((uVar2 & 1) != 0) {
      return 3;
    }
    lVar3 = FUN__text__00195358(param_1,param_3);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x18) != 0)) {
      uVar4 = *(undefined4 *)(lVar3 + 0xc);
      iVar1 = *(int *)(lVar3 + 0x10) + *(int *)(lVar3 + 0x14) * 6;
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(param_3 + 4) * 0x20 + 0x10
                            ) + 0xc) == 1) {
        uVar2 = FUN__text__00321ad0(uVar4,iVar1,param_2);
      }
      else {
        local_40 = *param_2;
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
        }
        uVar2 = FUN__text__00320e30(uVar4,iVar1,&local_40);
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        }
      }
      if (uVar2 == 0) {
        uVar2 = FUN__text__00307ba4(*param_2);
        uVar4 = 2;
        if ((uVar2 & 1) == 0) {
          uVar4 = 0;
        }
        return uVar4;
      }
      if (((uint)uVar2 >> 7 & 1) != 0) {
        return 4;
      }
      uVar4 = 0;
      if ((uVar2 & 0xfffffffffffff9ff) != 0 || (uVar2 & 0x600) == 0) {
        uVar4 = 2;
      }
      return uVar4;
    }
  }
  return 1;
}


