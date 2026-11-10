/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035e398; name: FUN_.text__0035e398
 */


undefined1  [16] FUN__text__0035e398(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  char local_34 [4];
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 <= param_4) {
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
    if (((uVar4 & 1) != 0) && (local_34[0] == '\b')) {
      plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      if (param_3 != 0) {
        plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2,plVar2[1]);
        if ((uVar4 & 1) != 0) {
          uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_2,0);
          lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          *(ulong *)(lVar5 + 8) = *(long *)(lVar5 + 8) + param_2;
          if ((uVar4 & 1) != 0) {
            auVar6._8_8_ = param_2;
            auVar6._0_8_ = 1;
            return auVar6;
          }
          goto LAB__text__0035e4fc;
        }
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(ulong *)(lVar5 + 8) = *(long *)(lVar5 + 8) + param_2;
    }
  }
LAB__text__0035e4fc:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


