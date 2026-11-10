/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035e6dc; name: FUN_.text__0035e6dc
 */


uint FUN__text__0035e6dc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  char local_28 [4];
  ushort local_24 [2];
  
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
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar2 = 0;
  *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  if (((uVar5 & 1) != 0) && (local_28[0] == '\t')) {
    plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
    uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,2,plVar3[1]);
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,local_24,2,0);
    }
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar2 = (uint)local_24[0] << 0x10;
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 2;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    uVar2 = uVar2 | uVar1 & 1;
  }
  return uVar2;
}


