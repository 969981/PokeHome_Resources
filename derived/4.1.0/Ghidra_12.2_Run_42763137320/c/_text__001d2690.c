/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d2690; name: FUN_.text__001d2690
 */


void FUN__text__001d2690(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__003c7c60(lVar1,param_1 + 0x40f8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x44b8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4878,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4c38,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4ff8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x53b8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x41b8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4578,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4938,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4cf8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x50b8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5478,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4278,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4638,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x49f8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4db8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5178,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5538,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4338,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x46f8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4ab8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4e78,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5238,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x55f8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x43f8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x47b8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4b78,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4f38,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x52f8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x56b8,0);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001d292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


