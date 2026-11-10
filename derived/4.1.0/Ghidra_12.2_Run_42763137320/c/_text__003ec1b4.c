/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ec1b4; name: FUN_.text__003ec1b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__003ec1b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                   long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_298;
  undefined1 auStack_290 [512];
  long local_90 [3];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 uStack_41;
  undefined8 *local_28;
  
  local_78 = *(undefined4 *)(param_5 + 0xc);
  local_68 = 0x800000008;
  uStack_60 = 0x100000b01;
  local_58 = 1;
  local_74 = *(undefined4 *)(param_5 + 0x14);
  uStack_70 = *(undefined4 *)(param_5 + 0x18);
  local_90[2] = *(undefined8 *)(param_5 + 0x14);
  local_54 = 0;
  local_50 = 0;
  local_90[1] = 0;
  uStack_6c = local_78;
  FUN__text__00146354(local_90,*(undefined8 *)(param_6 + 8),local_90 + 1);
  FUN__text__0014953c(auStack_290,local_90[0]);
  uVar2 = FUN__text__0059fd48(local_90[0]);
  *param_1 = uVar2;
  uVar2 = FUN__text__005d5504(auStack_290);
  *param_2 = uVar2;
  uVar2 = FUN__text__005d54d0(auStack_290);
  *param_3 = uVar2;
  local_298 = *param_1;
  local_28 = &local_298;
  lVar3 = FUN__text__003eca20(param_6 + 0x5a0,&local_298,_DAT_008a01d8,&local_28,&uStack_41);
  if (*(long *)(lVar3 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar3 + 0x18) + 0x48) + 0x18))();
  }
  lVar1 = local_90[0];
  local_90[0] = 0;
  *(long *)(lVar3 + 0x18) = lVar1;
  FUN__text__0014821c(auStack_290);
  if (local_90[0] != 0) {
    (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
  }
  return 0;
}


