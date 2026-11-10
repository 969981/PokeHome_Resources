/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e4f68; name: FUN_.text__002e4f68
 */


uint FUN__text__002e4f68(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte local_28 [4];
  byte local_24 [4];
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_28,1,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(uVar5 + 8) = *(long *)(uVar5 + 8) + 1;
  if (((uVar4 & 1) == 0) || (uVar5 = (ulong)local_28[0], local_28[0] != 8)) {
    return (int)uVar5 << 8;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_24,1,0);
  }
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  uVar7 = (uint)local_24[0];
  if ((uVar1 & 1) == 0) {
    uVar7 = 0;
  }
  return uVar1 & 1 | uVar7 << 8;
}


