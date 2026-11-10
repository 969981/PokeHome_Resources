/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a3fe0; name: FUN_.text__001a3fe0
 */


void FUN__text__001a3fe0(long param_1)

{
  long lVar1;
  undefined8 local_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__003c7c60(lVar1,param_1 + 0x30,1);
  local_28 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x128) + 0x34);
  FUN__text__001a4058(param_1,&local_28);
                    /* WARNING: Could not recover jumptable at 0x001a4054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


