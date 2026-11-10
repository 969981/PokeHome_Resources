/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00259238; name: FUN_.text__00259238
 */


void FUN__text__00259238(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xfe0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = FUN__text__00306a08(lVar4,2);
  uVar3 = FUN__text__00306a08(lVar4,1);
  if ((uVar3 & 1) == 0) {
    FUN__text__003083f0(lVar4);
  }
  if (param_2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x002592c0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__002592cc + (ulong)*(byte *)((ulong)param_2 + 0x72bf90) * 4))();
    return;
  }
  uVar2 = FUN__text__003279b0(*(undefined4 *)(param_1 + 0x1000));
  uVar1 = ((uVar1 | uVar2) ^ 0xffffffff) & 1;
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x728),uVar1);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x740),uVar1);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x758),uVar1);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x770),uVar1);
                    /* WARNING: Could not recover jumptable at 0x0025942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


