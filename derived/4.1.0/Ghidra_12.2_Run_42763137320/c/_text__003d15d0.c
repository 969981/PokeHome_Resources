/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d15d0; name: FUN_.text__003d15d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d15d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,
                        undefined4 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long local_28;
  
  FUN__text__003d16cc();
  *(undefined1 *)(param_1 + 0x24) = 1;
  FUN__text__00113bb0(&local_28,*_DAT_0089f550,0,param_2,0,*param_1,0);
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
  }
  param_1[0x27] = local_28;
  if (local_28 != 0) {
    plVar2 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (param_1[0x28] != 0 || param_1[0x38] != 0) {
      FUN__text__005d9010(local_28,param_1 + 0x26,1);
    }
    FUN__text__005d8de0(local_28);
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(plVar2);
  }
  if (param_3[3] != 0) {
    param_3 = param_3 + 1;
  }
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x4a) = param_4;
  param_1[1] = uVar1;
  FUN__text__003d1d84(param_1);
  return;
}


