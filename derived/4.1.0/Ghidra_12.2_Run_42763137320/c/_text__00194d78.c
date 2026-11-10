/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00194d78; name: FUN_.text__00194d78
 */


void FUN__text__00194d78(long param_1,long *param_2,uint *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long local_48;
  
  lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (ulong)*param_3 * 0x20 + 0x10) +
                             0x10) + 8);
  if (lVar3 == 0) {
    FUN__text__00306824(*param_2);
    return;
  }
  plVar2 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  local_48 = *param_2;
  iVar1 = param_3[2] + param_3[3] * 6;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  if (param_4 - 1U < 0xc) {
    FUN__text__00300670(lVar3,&local_48,param_3[1],iVar1,
                        *(undefined4 *)((long)(int)(param_4 - 1U) * 4 + 0x725998));
  }
  else {
    FUN__text__00300670(lVar3,&local_48,param_3[1],iVar1,1);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


