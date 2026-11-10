/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ed768; name: FUN_.text__002ed768
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ed768(long param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  long local_40 [3];
  long local_28;
  
  uVar1 = *_DAT_008a2580;
  FUN__text__005e927c(local_40,_DAT_008a2688);
  uVar1 = FUN__text__002f95a0(uVar1,local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40[0] = param_1 + 0x60;
  local_48 = 0x28b8;
  FUN__text__002ee9b0(uVar1,0x733974,local_40,&local_48);
  local_40[0] = param_1 + 0x2918;
  local_48 = 0x808;
  FUN__text__002ef070(uVar1,0x733978,local_40,&local_48);
  local_40[0] = param_1 + 0x3120;
  local_48 = 200;
  FUN__text__002ef730(uVar1,0x73397c,local_40,&local_48);
  local_40[0] = param_1 + 0x31e8;
  local_48 = 0x14;
  FUN__text__002efdf0(uVar1,0x733980,local_40,&local_48);
  local_40[0] = param_1 + 0x3200;
  local_48 = 0x10;
  FUN__text__002f04b0(uVar1,0x733984,local_40,&local_48);
  return;
}


