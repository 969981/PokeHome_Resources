/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300724; name: FUN_.text__00300724
 */


void FUN__text__00300724(long param_1,long *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1 + (ulong)param_3 * 0x5fa0 + 0x58;
  lVar6 = lVar2 + (ulong)param_4 * 0x330;
  FUN__text__00306b04(*param_2,lVar6);
  FUN__text__00308998(*param_2);
  uVar1 = *(undefined4 *)(lVar6 + 0x2c8);
  if (param_5 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00300794 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__003007a0 + (ulong)*(byte *)((ulong)param_5 + 0x733b1c) * 4))();
    return;
  }
  lVar6 = *param_2;
  lVar2 = lVar2 + (ulong)param_4 * 0x330;
  uVar3 = *(undefined8 *)(lVar2 + 0x2a0);
  *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar2 + 0x298);
  *(undefined8 *)(lVar6 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(lVar2 + 0x2a8);
  uVar4 = *(undefined8 *)(lVar2 + 0x2b0);
  uVar5 = *(undefined8 *)(lVar2 + 0x2c0);
  *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(lVar2 + 0x2b8);
  *(undefined8 *)(lVar6 + 0x88) = uVar5;
  *(undefined8 *)(lVar6 + 0x70) = uVar3;
  *(undefined8 *)(lVar6 + 0x78) = uVar4;
  uVar4 = *(undefined8 *)(lVar2 + 0x2c8);
  uVar5 = *(undefined8 *)(lVar2 + 0x2d0);
  uVar3 = *(undefined8 *)(lVar2 + 0x2e0);
  *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar2 + 0x2d8);
  *(undefined8 *)(lVar6 + 0xa8) = uVar3;
  *(undefined8 *)(lVar6 + 0x90) = uVar4;
  *(undefined8 *)(lVar6 + 0x98) = uVar5;
  *(undefined4 *)(*param_2 + 0x90) = uVar1;
  *(undefined1 *)(*param_2 + 0xa9) = 1;
  return;
}


