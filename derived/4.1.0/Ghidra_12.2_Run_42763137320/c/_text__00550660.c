/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00550660; name: FUN_.text__00550660
 */


ulong FUN__text__00550660(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long alStack_410 [128];
  
  uVar2 = *(uint *)(param_1 + 5);
  uVar3 = (ulong)uVar2;
  plVar5 = (long *)((long)alStack_410 + (0x400 - (uVar3 * 8 + 0xf & 0xffffffff0)));
  if (uVar2 == 0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = uVar2 << 3;
    uVar7 = (ulong)uVar4;
    plVar8 = plVar5;
    do {
      uVar6 = (int)uVar7 + 0xfU & 0xfffffff0;
      uVar7 = (ulong)uVar6;
      *plVar8 = uVar7 + (long)plVar5;
      if (*param_2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x005506fc */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&UNK__text__005506c4 + (ulong)*(byte *)((ulong)*param_2 + 0x73e3b4) * 4))
                          ();
        return uVar3;
      }
      uVar3 = uVar3 - 1;
      plVar8 = plVar8 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  uVar1 = uVar6 + 0x40 + uVar2 * 4;
  *param_1 = (long)(param_1 + 8);
  param_1[1] = (ulong)(uVar6 + 0x40) + (long)param_1;
  uVar2 = uVar2 * 4 + uVar1 + 7;
  param_1[2] = (ulong)uVar1 + (long)param_1;
  param_1[3] = (ulong)(uVar2 & 0xfffffff8) + (long)param_1;
  uVar2 = uVar2 + uVar4 & 0xfffffff8;
  param_1[4] = (ulong)uVar2 + (long)param_1;
  return (ulong)(uVar2 + uVar4);
}


