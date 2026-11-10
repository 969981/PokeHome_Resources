/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00502104; name: FUN_.text__00502104
 */


ulong FUN__text__00502104(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  char local_24 [4];
  
  uVar2 = FUN__text__004f5e5c();
  if ((int)uVar2 != 1) {
    return uVar2;
  }
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3,*(undefined4 *)(param_1[0x12] + 0x20));
  }
  if (param_2 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x58);
  }
  uVar2 = FUN__text__004ff440(param_1 + 0x13,param_1[0x12],*(undefined4 *)(param_1[0xc] + 0x2c),
                              uVar6,uVar4);
  if ((int)uVar2 == 1) {
    lVar5 = FUN__text__00502238(param_1,local_24);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x18) == 0) {
        return 2;
      }
      if (local_24[0] == '\0') {
        local_3c = 0;
      }
      else {
        local_3c = FUN__text__004f47e8(*(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x78));
        local_3c = -local_3c;
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_3c,&local_2c,auStack_28,0,0);
      uVar7 = 1;
      if (iVar1 == 0) {
        uVar7 = 2;
      }
      param_1[0xd] = (long)local_2c;
      return (ulong)uVar7;
    }
    uVar2 = 2;
  }
  return uVar2;
}


