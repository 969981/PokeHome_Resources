/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c5f64; name: FUN_.text__001c5f64
 */


void FUN__text__001c5f64(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN__text__001c6088();
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  plVar2 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__003c7c60(lVar3,param_1 + 0x198,0);
  FUN__text__003c7c60(lVar3,param_1 + 0x280,0);
  FUN__text__003c7c60(lVar3,param_1 + 0x368,1);
  lVar3 = FUN__text__0012cb14(lVar1,param_1 + 0x370);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0x20000000000000;
  }
  lVar3 = FUN__text__0012cb14(lVar1,param_1 + 0x3e0);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0x800000000;
  }
  lVar3 = FUN__text__0012cb14(lVar1,param_1 + 0x450);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0x400000000;
  }
                    /* WARNING: Could not recover jumptable at 0x001c603c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


