/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00293560; name: FUN_.text__00293560
 */


void FUN__text__00293560(long *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  undefined4 local_4;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)*param_2 < 0) {
    local_4 = *(undefined4 *)((long)param_1 + (ulong)uVar1 * 4 + 0xc);
  }
  else {
    local_4 = *(undefined4 *)(*(long *)((ulong)uVar1 * 8 + 0x8aac48) + (ulong)*param_2 * 4);
  }
  local_40 = CONCAT44(local_40._4_4_,uVar1);
  (**(code **)(lVar2 + 0x1560))(lVar2 + 0x1580,&local_40,&local_4);
  local_40 = 0xad268b19e4645f59;
  uStack_38 = 0x71ced0;
  local_30 = 0x16;
  local_28 = 0;
  lVar2 = FUN__text__00137c10(*(undefined8 *)(lVar2 + 0x60),&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  if (lVar2 != 0) {
    FUN__text__00139a60(lVar2);
  }
  return;
}


