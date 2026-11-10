/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9034; name: FUN_.text__003a9034
 */


void FUN__text__003a9034(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 in_x7;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 extraout_s0;
  float fVar8;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  ulong uVar9;
  undefined8 uVar10;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long *local_60;
  undefined8 uStack_58;
  long **local_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  lVar4 = *(long *)(param_1 + 0x408);
  iVar1 = *(int *)(param_1 + 0x3c8);
  if (*(int *)(lVar4 + 0x1c) == 0) {
    iVar5 = *(int *)(lVar4 + 0xc);
    iVar3 = 0;
    if (iVar5 != 0) {
      iVar3 = iVar1 / iVar5;
    }
    iVar5 = iVar1 - iVar3 * iVar5;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x10);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = iVar1 / iVar3;
    }
    iVar3 = iVar1 - iVar5 * iVar3;
  }
  local_50 = (long **)CONCAT44(iVar3,iVar5);
  (**(code **)(param_1 + 0x230))(param_1 + 0x250,&local_50);
  local_50 = *(long ***)(*(long *)(param_1 + 0x3e0) + 0x88);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_50,1);
  uStack_48 = FUN__text__003b5bc4(*(undefined8 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x3c8))
  ;
  local_50 = &local_60;
  local_60 = (long *)0x0;
  FUN__text__003aa1c0(param_1,&local_50,0);
  plVar2 = local_60;
  local_50 = (long **)local_60[0x11];
  (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),&local_50,0);
  plVar6 = *(long **)(param_1 + 0x98);
  local_60 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x88);
  (**(code **)(*plVar2 + 0x40))(plVar2);
  local_50 = (long **)CONCAT44(extraout_var,extraout_s0);
  uStack_48 = extraout_var_02;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_60,&local_50);
  fVar8 = (float)(**(code **)(*plVar2 + 0x40))(plVar2);
  uVar10 = 0;
  uVar9 = (ulong)(uint)(fVar8 + (float)*(int *)(param_1 + 0x400));
  (**(code **)(*plVar2 + 0x40))(plVar2);
  uVar7 = *(undefined8 *)(param_1 + 8);
  local_50 = (long **)CONCAT44(extraout_var_00 + (float)*(int *)(param_1 + 0x404),(int)uVar9);
  uStack_48 = 0;
  (**(code **)(*plVar2 + 0x40))(plVar2);
  local_68 = 2;
  uStack_64 = 4;
  local_60 = (long *)CONCAT44(extraout_var_01,extraout_s0_00);
  uStack_58 = extraout_var_03;
  local_70 = FUN__text__003aafa8(&uStack_31,uVar7,param_1 + 0x3e0,&local_60,&local_50,&uStack_64,
                                 &local_68,in_x7,uVar9,uVar10);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN__text__003c24d0(*(undefined8 *)(param_1 + 0x3d0),&local_70,0x40);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


