/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f26c; name: FUN_.text__0025f26c
 */


void FUN__text__0025f26c(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar3 = *param_1;
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(lVar3 + 0x640);
  local_40 = *(long *)(lVar3 + 0xfe0);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN__text__0024edf8(&local_38,uVar2,&local_40,(int)param_1[1]);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  FUN__text__003069a8(*(undefined8 *)(lVar3 + 0xfe0),uVar1);
  return;
}


