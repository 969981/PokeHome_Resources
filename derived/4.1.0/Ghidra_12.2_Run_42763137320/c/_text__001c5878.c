/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c5878; name: FUN_.text__001c5878
 */


void FUN__text__001c5878(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined4 *)(param_1 + 0x4c4) = param_2;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar6 = *(long *)(param_1 + 8) + 0x110;
  uVar2 = FUN__text__0012cb14(lVar6,param_1 + 0x48);
  uVar3 = FUN__text__0012cb14(lVar6,param_1 + 0x1a0);
  uVar4 = FUN__text__0012cb14(lVar6,param_1 + 0x210);
  FUN__text__0012cb14(lVar6,param_1 + 0x288);
  FUN__text__0012cb14(lVar6,param_1 + 0x2f8);
  uVar1 = *(int *)(param_1 + 0x4c4) - 1;
  if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x001c5910 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001c591c + (ulong)*(byte *)((ulong)uVar1 + 0x725e7f) * 4))();
    return;
  }
  FUN__text__003a14c4(uVar2,1);
  lVar6 = *(long *)(param_1 + 8) + 0x110;
  lVar5 = FUN__text__0012cb14(lVar6,param_1 + 0xb8);
  lVar6 = FUN__text__0012cb14(lVar6,param_1 + 0x128);
  FUN__text__003a14e8(lVar5,1);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  FUN__text__003a14e8(lVar6,0);
  *(undefined8 *)(lVar6 + 0x108) = 0;
  *(undefined1 *)(lVar6 + 0x110) = 0;
  FUN__text__001c5dd4(param_1,1);
  FUN__text__003a14c4(uVar3,1);
  FUN__text__003a14c4(uVar4,1);
  return;
}


