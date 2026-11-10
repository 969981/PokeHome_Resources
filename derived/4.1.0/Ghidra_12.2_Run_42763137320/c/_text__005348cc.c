/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005348cc; name: FUN_.text__005348cc
 */


void FUN__text__005348cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN__text__0050c2e0(param_2,*(undefined8 *)(param_1 + 0x30));
  lVar2 = FUN__text__0050c2e0(param_2,*(undefined8 *)(param_1 + 0x38));
  lVar3 = FUN__text__0050c2a0(param_2,*(undefined8 *)(param_1 + 0x40));
  if (((lVar1 == 0) || (lVar2 == 0)) || (lVar3 == 0)) {
    return;
  }
  FUN__text__00533c90(lVar1,lVar2,lVar3,*(undefined8 *)(param_1 + 0x48));
  FUN__text__0052c540(*(undefined8 *)(param_1 + 0x48),lVar1,lVar2);
  return;
}


