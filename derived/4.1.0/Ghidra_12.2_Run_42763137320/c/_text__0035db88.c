/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035db88; name: FUN_.text__0035db88
 */


undefined1  [16] FUN__text__0035db88(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  char local_24 [4];
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 <= param_4) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_24,1,0);
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    if (((uVar4 & 1) != 0) && (local_24[0] == '\t')) {
      lVar5 = param_2 * 2;
      plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      if (param_3 != 0) {
        plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar5,plVar2[1]);
        if ((uVar4 & 1) != 0) {
          uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,lVar5,0);
          lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
          *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + lVar5;
          if ((uVar4 & 1) != 0) {
            auVar7._8_8_ = param_2;
            auVar7._0_8_ = 1;
            return auVar7;
          }
          goto LAB__text__0035dcf0;
        }
      }
      lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + lVar5;
    }
  }
LAB__text__0035dcf0:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


