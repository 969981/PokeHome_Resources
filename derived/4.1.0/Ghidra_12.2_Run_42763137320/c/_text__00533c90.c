/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00533c90; name: FUN_.text__00533c90
 */


undefined8
FUN__text__00533c90(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4
                   ,undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar1 = FUN__text__0052163c(param_4,param_6);
  uVar4 = FUN__text__00521904(param_4,uVar1);
  uVar6 = param_2;
  uVar7 = param_3;
  local_88 = uVar4;
  uStack_80 = param_2;
  local_78 = param_3;
  uVar2 = FUN__text__0052163c(param_5,param_6);
  uVar5 = FUN__text__00521904(param_5,uVar2);
  local_a0 = uVar5;
  uStack_98 = uVar6;
  local_90 = uVar7;
  uVar3 = FUN__text__00521b44(param_4,uVar1);
  if ((((uVar3 & 1) == 0) ||
      (uVar3 = FUN__text__00521b44(uVar4,param_2,param_3,param_5,uVar2), (uVar3 & 1) == 0)) ||
     (uVar3 = FUN__text__00533100(uVar4,param_2,param_3,uVar5,uVar6,uVar7,
                                  *(undefined8 *)(param_6 + 0xb0),0,param_7), (uVar3 & 1) == 0)) {
    FUN__text__0052b23c(param_7);
  }
  else {
    FUN__text__0052b1ac(param_7,&local_88,&local_a0);
  }
  return 1;
}


