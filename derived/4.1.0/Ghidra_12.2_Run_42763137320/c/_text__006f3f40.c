/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f3f40; name: FUN_.text__006f3f40
 */


undefined8 FUN__text__006f3f40(long param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0xd8);
  if (lVar3 == 0) {
    uVar2 = FUN__text__006ec160(*(undefined8 *)(param_1 + 0xd0),param_2,(ulong)param_3,param_4);
    return uVar2;
  }
  lVar4 = *(long *)(lVar3 + 0x110);
  uVar1 = *(uint *)(*(long *)(lVar3 + 0x188) + 4);
  FUN__text__006f2360(param_2);
  if (param_3 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x006f3f9c */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__006f3fac + (ulong)*(byte *)((ulong)param_3 + 0x77f9a8) * 4))
                      (lVar4 + (ulong)uVar1);
    return uVar2;
  }
  return 0xffffffff;
}


