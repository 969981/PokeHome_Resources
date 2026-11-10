/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300380; name: FUN_.text__00300380
 */


void FUN__text__00300380(long param_1,long *param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((299 < param_3) || (0x1d < param_4)) {
    return;
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = param_1 + (ulong)param_3 * 0x5fa0 + (ulong)param_4 * 0x330;
  FUN__text__00306b04(lVar4,lVar5 + 0x58);
  uVar1 = *(undefined8 *)(lVar5 + 0x2f8);
  *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar5 + 0x2f0);
  *(undefined8 *)(lVar4 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(lVar5 + 0x300);
  uVar2 = *(undefined8 *)(lVar5 + 0x308);
  uVar3 = *(undefined8 *)(lVar5 + 0x318);
  *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar5 + 0x310);
  *(undefined8 *)(lVar4 + 0x88) = uVar3;
  *(undefined8 *)(lVar4 + 0x70) = uVar1;
  *(undefined8 *)(lVar4 + 0x78) = uVar2;
  uVar1 = *(undefined8 *)(lVar5 + 800);
  uVar2 = *(undefined8 *)(lVar5 + 0x328);
  uVar3 = *(undefined8 *)(lVar5 + 0x338);
  *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(lVar5 + 0x330);
  *(undefined8 *)(lVar4 + 0xa8) = uVar3;
  *(undefined8 *)(lVar4 + 0x90) = uVar1;
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00300434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


