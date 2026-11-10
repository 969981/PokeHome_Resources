/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019485c; name: FUN_.text__0019485c
 */


void FUN__text__0019485c(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_28;
  
  lVar3 = FUN__text__00195358(param_1,param_3);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x18) == 0)) {
    FUN__text__00306824(*param_2);
    return;
  }
  uVar1 = *(ulong *)(lVar3 + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar1 & 0xffffffff) * 0x20 +
                                       0x10) + 0x10) + 8);
  if (lVar5 == 0) {
    FUN__text__00306824(lVar3);
  }
  else {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_28 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__00300380(lVar5,&local_28,uVar1 >> 0x20,(int)uVar2 + (int)((ulong)uVar2 >> 0x20) * 6);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


