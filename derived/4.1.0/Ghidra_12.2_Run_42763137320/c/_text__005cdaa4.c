/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cdaa4; name: FUN_.text__005cdaa4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cdaa4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  plVar1 = _DAT_008a0228;
  *(undefined4 *)(param_1 + 0x118) = param_3;
  uVar4 = _DAT_008a0448;
  uVar5 = *(undefined8 *)(*plVar1 + 0x10);
  uVar3 = FUN__text__006ee2ac(_DAT_008a0448);
  uVar4 = FUN__text__006ee384(uVar4,param_2);
  FUN__text__005a5684(&local_60,uVar5,0,uVar3,uVar4);
  *(undefined8 *)(param_1 + 0x90) = local_60;
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
  }
  lVar2 = local_58;
  local_60 = 0;
  local_58 = 0;
  *(long *)(param_1 + 0x98) = lVar2;
  *(undefined8 *)(param_1 + 0xa0) = local_50;
  *(undefined8 *)(param_1 + 0xa8) = local_48;
  local_50 = 0xffffffffffffffff;
  local_48 = 0;
  FUN__text__005b509c(&local_60);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  uVar4 = FUN__text__005b50f0((undefined8 *)(param_1 + 0x90));
  FUN__text__006ee434(param_1 + 0x50,_DAT_008a0448,param_2,uVar4,*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8));
  return;
}


