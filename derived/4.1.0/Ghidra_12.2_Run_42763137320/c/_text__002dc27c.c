/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dc27c; name: FUN_.text__002dc27c
 */


undefined8 FUN__text__002dc27c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_34;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) + (*(ulong *)(param_1 + 0x80) / 0x19) * 8);
  uVar7 = *(ulong *)(param_1 + 0x80) % 0x19;
  plVar5 = (long *)(lVar6 + uVar7 * 0xa0);
  if (*plVar5 != 0x1612e1b1014aab70) {
    uVar2 = FUN__text__002f0b64();
    uVar3 = FUN__text__002fa0a4(uVar2,plVar5);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN__text__002fa114(uVar2,plVar5);
    FUN__text__002fa184(uVar2,plVar5);
    *(undefined4 *)(param_1 + 8) = 0;
    lVar6 = lVar6 + uVar7 * 0xa0;
    pcVar4 = *(code **)(lVar6 + 0x20);
    if (pcVar4 != (code *)0x0) {
      local_34 = uVar1;
      (*pcVar4)(lVar6 + 0x40,&local_34);
    }
    FUN__text__002de070(param_1 + 0x10);
  }
  return 1;
}


