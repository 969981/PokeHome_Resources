/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b78dc; name: FUN_.text__006b78dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b78dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                        float *param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((long *)*param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*(long *)*param_2 + 0x30))();
    plVar3 = (long *)*param_2;
    if ((uVar2 & 1) == 0) {
      if (plVar3 != (long *)0x0) goto LAB__text__006b79ac;
    }
    else {
      if (*(int *)((long)plVar3 + 0xd4) == 0) {
        return;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,param_3);
      FUN__text__006a0f24(*param_2);
      *param_2 = 0;
    }
  }
  plVar3 = (long *)FUN__text__006a0f04(0xd8);
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 2) = 0;
    lVar1 = _DAT_008a68c0;
    plVar3[7] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *plVar3 = lVar1 + 0x10;
    plVar3[1] = -1;
    FUN__text__006f5bcc(plVar3 + 8);
    FUN__text__006f4e0c(plVar3 + 0x11);
    plVar3[0x1a] = -0x100000000;
  }
  *param_2 = (long)plVar3;
LAB__text__006b79ac:
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN__text__006ebe40(&local_90);
  uStack_88 = CONCAT44(param_6,(undefined4)uStack_88);
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  local_80 = CONCAT44((int)*param_5,0xa0);
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)param_5[1]);
  local_90 = CONCAT26(1,(undefined6)local_90);
  FUN__text__006c07c0(*param_2,param_3,param_4,&local_90,param_7);
  return;
}


