/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00194730; name: FUN_.text__00194730
 */


uint FUN__text__00194730(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_28;
  
  lVar4 = FUN__text__00195358(param_1,param_3);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(lVar4 + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar1 & 0xffffffff) * 0x20 +
                                       0x10) + 0x10) + 8);
  uVar3 = 0;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_28 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar3 = FUN__text__00301310(lVar6,uVar1 >> 0x20,(int)uVar2 + (int)((ulong)uVar2 >> 0x20) * 6,
                                &local_28,1);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar3 & 1;
}


