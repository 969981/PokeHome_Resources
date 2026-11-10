/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00399218; name: FUN_.text__00399218
 */


undefined1  [16] FUN__text__00399218(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  char local_28 [4];
  uint local_24;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1]);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,local_28,1,0);
    uVar5 = uVar5 & 0xffffffff;
  }
  auVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(auVar6._0_8_ + 8) = *(long *)(auVar6._0_8_ + 8) + 1;
  if (((uVar5 & 1) == 0) || (local_28[0] != '\x04')) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar6._8_8_;
    return auVar1 << 0x40;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,4,plVar3[1]);
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_24,4,0);
    uVar5 = uVar5 & 0xffffffff;
  }
  auVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(auVar6._0_8_ + 8) = *(long *)(auVar6._0_8_ + 8) + 4;
  if ((uVar5 & 1) == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar6._8_8_;
    return auVar2 << 0x40;
  }
  auVar6._8_8_ = (ulong)local_24 + 5;
  auVar6._0_8_ = 1;
  return auVar6;
}


