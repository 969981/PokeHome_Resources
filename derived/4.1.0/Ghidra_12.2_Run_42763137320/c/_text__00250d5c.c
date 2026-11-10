/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00250d5c; name: FUN_.text__00250d5c
 */


void FUN__text__00250d5c(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_18;
  
  local_50 = 0x94f0ab6b70e7ac3f;
  uStack_48 = 0x719f5d;
  local_40 = 0x1c;
  local_38 = 0;
  FUN__text__00115650(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_50,0xb);
  lVar2 = *(long *)(local_18 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    if (local_18 == 0) goto LAB__text__00250de8;
  }
  (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  local_18 = 0;
LAB__text__00250de8:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar1 = *(int *)(param_1 + (ulong)param_2 * 4 + 0x648) - 1;
  if (uVar1 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00250e1c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00250e2c + (ulong)*(byte *)((ulong)uVar1 + 0x72be4f) * 4))();
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


