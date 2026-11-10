/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013ef28; name: FUN_.text__0013ef28
 */


void FUN__text__0013ef28(long *param_1)

{
  long lVar1;
  long local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  lVar1 = *param_1;
  if (4 < *(int *)(lVar1 + 0xda0) + 1U) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__0012c300(lVar1 + 0x110,*(undefined8 *)((long)*(int *)(lVar1 + 0xda0) * 8 + 0x869cc8));
  if (*(code **)(lVar1 + 0xc80) != (code *)0x0) {
    local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(lVar1 + 0xda0));
    (**(code **)(lVar1 + 0xc80))(lVar1 + 0xca0,&local_28);
  }
  if (*(code **)(lVar1 + 0xc00) != (code *)0x0) {
    uStack_4 = *(undefined4 *)(lVar1 + 0xda0);
    local_8 = *(undefined4 *)(lVar1 + 0xda4);
    local_28 = lVar1;
    (**(code **)(lVar1 + 0xc00))(lVar1 + 0xc20,&uStack_4,&local_8,&local_28);
  }
  FUN__text__0013d0c4(lVar1);
  if (*(long *)(lVar1 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


