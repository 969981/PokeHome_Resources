/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce1e8; name: FUN_.text__003ce1e8
 */


void FUN__text__003ce1e8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        long *param_5,ulong param_6)

{
  long lVar1;
  long local_48;
  long local_28;
  
  FUN__text__003ce2a0(&local_28,*(undefined8 *)(param_2 + 0x58));
  lVar1 = local_28;
  if ((param_6 & 1) != 0) {
    *(undefined8 *)(local_28 + 0x70) = *(undefined8 *)(DAT_008e1518 + 0x248);
  }
  local_48 = *param_5;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN__text__003ceac4(lVar1,0,0,param_4,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *param_1 = local_28;
  return;
}


