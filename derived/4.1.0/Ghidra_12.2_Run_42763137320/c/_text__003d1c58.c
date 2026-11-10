/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d1c58; name: FUN_.text__003d1c58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d1c58(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long local_28;
  
  FUN__text__003d16cc();
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN__text__0010ba10(&local_28,*_DAT_0089f550,1,param_2,0,*param_1,0);
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
  }
  param_1[3] = local_28;
  if (local_28 != 0) {
    plVar3 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (param_1[4] != 0 || param_1[0x14] != 0) {
      FUN__text__005d9010(local_28,param_1 + 2,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (param_2[3] != 0) {
    param_2 = param_2 + 1;
  }
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x4a) = param_3;
  param_1[1] = uVar1;
  if (*(char *)(param_1 + 0x24) == '\0') {
    lVar2 = param_1[3];
  }
  else {
    lVar2 = param_1[0x27];
  }
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x170) == '\0')) || (param_1[0x50] != -1)) {
    return;
  }
  FUN__text__003d1d84(param_1);
  return;
}


