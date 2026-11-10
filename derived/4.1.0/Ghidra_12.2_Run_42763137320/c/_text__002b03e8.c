/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b03e8; name: FUN_.text__002b03e8
 */


undefined1  [16] FUN__text__002b03e8(long *param_1,long param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x22;
  undefined1 auVar6 [16];
  char local_38 [4];
  uint local_34;
  
  if (param_2 != 0) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
    if ((uVar4 & 1) == 0) {
      unaff_x22 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_38,1,0);
      unaff_x22 = uVar4 & 0xffffffff;
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    if (((unaff_x22 & 1) != 0) && (local_38[0] == '\x04')) {
      plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1]);
      if ((uVar4 & 1) == 0) {
        unaff_x22 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_34,4,0);
        unaff_x22 = uVar4 & 0xffffffff;
      }
      lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
      if (((unaff_x22 & 1) != 0) && (unaff_x22 = CONCAT44(0,local_34), unaff_x22 <= param_3)) {
        plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,unaff_x22,plVar2[1]);
        if ((uVar4 & 1) == 0) {
          lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          *(ulong *)(lVar5 + 8) = *(long *)(lVar5 + 8) + unaff_x22;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,unaff_x22,0);
          lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
          *(ulong *)(lVar5 + 8) = *(long *)(lVar5 + 8) + unaff_x22;
          if ((uVar4 & 1) != 0) {
            auVar6._8_8_ = unaff_x22;
            auVar6._0_8_ = 1;
            return auVar6;
          }
        }
      }
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_x22;
  return auVar1 << 0x40;
}


