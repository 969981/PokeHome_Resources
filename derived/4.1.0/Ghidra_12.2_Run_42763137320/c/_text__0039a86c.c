/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039a86c; name: FUN_.text__0039a86c
 */


byte FUN__text__0039a86c(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  char local_34 [4];
  undefined1 local_18 [4];
  char local_14 [4];
  
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
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  if (((uVar4 & 1) == 0) || (local_34[0] != '\x05')) {
    return 0;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_18,4,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_14,1,0);
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  return bVar1 & local_14[0] == '\x11';
}


