/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e5328; name: FUN_.text__002e5328
 */


undefined8 FUN__text__002e5328(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char local_38 [4];
  undefined4 local_34;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_38,1,0);
    uVar3 = uVar3 & 0xffffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  if (((uVar3 & 1) == 0) || (local_38[0] != '\x05')) {
    return 0;
  }
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_34,4,0);
    uVar3 = uVar3 & 0xffffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN__text__002e54cc(param_1,local_34,param_2,param_3);
  return uVar5;
}


