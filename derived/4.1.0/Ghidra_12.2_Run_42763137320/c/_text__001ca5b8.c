/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ca5b8; name: FUN_.text__001ca5b8
 */


void FUN__text__001ca5b8(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(lVar2 + 0x2d0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = FUN__text__0012cb14(lVar2 + 0x110,param_1 + 0x1b0);
  *(undefined1 *)(lVar2 + 0x110) = 0;
  uVar1 = 0x200000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(lVar2 + 0x108) = uVar1;
  FUN__text__003c7c60(lVar3,param_1 + 0x1e8,param_2 & 1);
  FUN__text__003c7c60(lVar3,param_1 + 0x1e0,(param_2 ^ 0xffffffff) & 1);
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ca650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


