/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414e80; name: FUN_.text__00414e80
 */


void FUN__text__00414e80(void)

{
  undefined8 *__src;
  uint uVar1;
  undefined8 *__dest;
  ulong uVar2;
  undefined8 uVar3;
  
  __dest = DAT_00aea230;
  uVar2 = (ulong)DAT_00aea238;
  if (DAT_00aea238 != 0) {
    __src = DAT_00aea230 + 1;
    do {
      uVar3 = *__dest;
      uVar1 = (int)uVar2 - 1;
      if (__dest < DAT_00aea230 + uVar1) {
        memmove(__dest,__src,(ulong)(uint)((int)(DAT_00aea230 + uVar1) - (int)__dest) & 0xfffffff8);
        uVar1 = DAT_00aea238 - 1;
      }
      DAT_00aea238 = uVar1;
      FUN__text__004061f0(uVar3,0);
      uVar2 = (ulong)DAT_00aea238;
    } while (__dest != DAT_00aea230 + uVar2);
  }
  FUN__text__00414f20();
  FUN__text__00473890();
  return;
}


