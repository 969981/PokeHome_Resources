/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a8e60; name: FUN_.text__003a8e60
 */


bool FUN__text__003a8e60(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 local_50 [16];
  long *local_28;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x3d0) + 0x60);
  if (iVar1 == 0) {
    if (*(code **)(param_1 + 0x1b0) != (code *)0x0) {
      local_50._0_4_ = *(undefined4 *)(param_1 + 0x3c8);
      local_28 = (long *)CONCAT44(local_28._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x408) + 8));
      (**(code **)(param_1 + 0x1b0))(param_1 + 0x1d0,local_50,&local_28);
    }
    local_50._8_8_ = FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408),param_2);
    local_28 = (long *)0x0;
    local_50._0_8_ = &local_28;
    FUN__text__003aa1c0(param_1,local_50,0);
    plVar2 = local_28;
    local_50._8_8_ = FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408),param_3);
    local_28 = (long *)0x0;
    local_50._0_8_ = &local_28;
    FUN__text__003aa1c0(param_1,local_50,0);
    plVar3 = local_28;
    local_50._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x3e0) + 0x88);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),local_50,0);
    local_28 = (long *)plVar2[0x11];
    plVar5 = *(long **)(param_1 + 0x98);
    local_50 = (**(code **)(*plVar2 + 0x40))(plVar2);
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_28,local_50);
    local_50._0_8_ = plVar2[0x11];
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),local_50,1);
    local_50._0_8_ = plVar3[0x11];
    (**(code **)(**(long **)(param_1 + 0x98) + 0x28))
              (*(long **)(param_1 + 0x98),local_50,param_1 + 0x3f0);
    local_50._0_8_ = plVar3[0x11];
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),local_50,1);
    lVar4 = *(long *)(param_1 + 0x3b8);
    *(undefined8 *)(lVar4 + 0x150) = 0;
    *(undefined1 *)(lVar4 + 0x149) = 1;
    if ((*(long *)(lVar4 + 0xb0) != -0x340d631b7bddd9bb) && (*(long *)(lVar4 + 0xb0) != 0)) {
      (**(code **)(**(long **)(lVar4 + 0x98) + 0x78))();
    }
  }
  return iVar1 == 0;
}


