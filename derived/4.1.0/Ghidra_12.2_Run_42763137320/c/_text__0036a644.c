/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036a644; name: FUN_.text__0036a644
 */


undefined1  [16] FUN__text__0036a644(long *param_1)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  char local_34 [4];
  undefined8 local_18;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_34,1,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  auVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(auVar6._0_8_ + 8) = *(long *)(auVar6._0_8_ + 8) + 1;
  if (((uVar4 & 1) == 0) || (local_34[0] != '\v')) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar6._8_8_;
    return auVar1 << 0x40;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,8,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_18,8,0);
    uVar4 = uVar4 & 1;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 8;
  auVar6._8_8_ = local_18;
  auVar6._0_8_ = uVar4;
  return auVar6;
}


