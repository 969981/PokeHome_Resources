/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001be704; name: FUN_.text__001be704
 */


void FUN__text__001be704(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__003c7c60(lVar1,param_1 + 0x42d8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x46c0,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4aa8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4e90,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5278,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5660,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x43a0,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4788,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4b70,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4f58,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5340,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5728,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4468,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4850,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4c38,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5020,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5408,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x57f0,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4530,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4918,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4d00,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x50e8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x54d0,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x58b8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x45f8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x49e0,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x4dc8,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x51b0,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5598,0);
  FUN__text__003c7c60(lVar1,param_1 + 0x5980,0);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001be9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


