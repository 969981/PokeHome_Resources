/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067a654; name: FUN_.text__0067a654
 */


void FUN__text__0067a654(long param_1)

{
  void *__s;
  long lVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)(param_1 + 0x1ac);
  __s = (void *)(param_1 + 0x1a0);
  lVar1 = param_1 + 0x890;
  if (bVar2 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0067a688 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0067a694 + (ulong)*(byte *)((ulong)bVar2 + 0x7618a0) * 4))();
    return;
  }
  uVar3 = (uint)bVar2;
  if ((*(byte *)(param_1 + (ulong)(bVar2 >> 3) + 0x9ad) >> (ulong)(uVar3 & 7) & 1) == 0) {
    if (uVar3 == 0xc) {
      if ((*(byte *)(param_1 + 0x9a4) >> 1 & 1) != 0) {
        FUN__text__00683f60(__s,lVar1);
      }
    }
    else if ((uVar3 == 10) && ((*(byte *)(param_1 + 0x9a4) & 1) != 0)) {
      FUN__text__00683f44(__s,lVar1);
    }
  }
  else {
    FUN__text__00683f40(__s);
  }
  memset(__s,0,0x60);
  *(undefined4 *)(param_1 + 0x280) = 2;
  FUN__text__00683298(param_1 + 0x208,param_1 + 0x284,9);
  *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 9;
  FUN__text__00683254(param_1 + 0x230,lVar1);
  FUN__text__00683298(param_1 + 0x230,0,0);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  return;
}


