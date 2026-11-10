/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ddbc4; name: FUN_.text__001ddbc4
 */


void FUN__text__001ddbc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__001ae604(*(undefined8 *)(param_1 + 0x30));
  FUN__text__003c7c60(lVar1,param_1 + 0x8a40,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x8a58,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x8a70,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x8a88,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x8aa0,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x8ab8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x8ac0,0);
                    /* WARNING: Could not recover jumptable at 0x001ddc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


