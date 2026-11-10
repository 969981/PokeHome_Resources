/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00112f48; name: FUN_.text__00112f48
 */


void FUN__text__00112f48(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long local_18;
  
  FUN__text__005f32c4(*(undefined8 *)(param_2 + 0x70));
  local_18 = *(long *)(param_2 + 0x78);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN__text__00157094(&local_18,*(undefined8 *)(param_2 + 0x70),param_4,0xb);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  lVar1 = *(long *)(param_2 + 0x78);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  return;
}


