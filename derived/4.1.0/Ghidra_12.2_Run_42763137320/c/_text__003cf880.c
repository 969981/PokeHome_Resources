/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf880; name: FUN_.text__003cf880
 */


void FUN__text__003cf880(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  if (param_4 == 0xb) {
    param_4 = FUN__text__0016ae08(DAT_008e1560);
  }
  local_40 = 0;
  local_38 = 0;
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = 0x70f683;
  local_48 = 0;
  if (param_4 - 2U < 9) {
                    /* WARNING: Could not emulate address calculation at 0x003cf8f8 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__003cf904 + (ulong)*(byte *)((ulong)(param_4 - 2U) + 0x73a934) * 4))();
    return;
  }
  FUN__text__003cfac0(&local_90,0x711094);
  if ((local_48 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = local_70;
  local_70 = 0;
  local_48 = local_78;
  local_58 = local_88;
  local_50 = local_80;
  local_38 = local_68;
  if ((local_78 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = local_90;
  local_90 = 0;
  local_88 = 0xcbf29ce484222645;
  local_80 = 0x70f683;
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  FUN__text__0015beb0(param_1,&local_60,param_3,0x70f683);
  if ((local_48 != 0) && (local_60 != 0)) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  local_58 = 0xcbf29ce484222645;
  local_50 = 0x70f683;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


