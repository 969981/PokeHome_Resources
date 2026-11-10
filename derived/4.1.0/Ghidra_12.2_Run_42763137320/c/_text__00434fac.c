/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00434fac; name: FUN_.text__00434fac
 */


undefined8 * FUN__text__00434fac(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  
  puVar4 = (undefined8 *)0x0;
  if ((((param_2 & 0xff00000000) != 0x800000000) && ((param_2 & 0xffffffff) != 0)) &&
     (puVar4 = (undefined8 *)FUN__text__00400f80(0x10,0x90), puVar4 != (undefined8 *)0x0)) {
    FUN__text__004368e0(puVar4,param_2);
    uVar6 = param_2 >> 0x20 & 0xff;
    plVar5 = (long *)(param_1 + uVar6 * 0x18);
    uVar3 = *(uint *)(plVar5 + 1);
    if ((uVar3 == 0) ||
       (fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + uVar6 * 0x18 + 0x10)),
       0.9 < fVar7 / (float)uVar3)) {
      FUN__text__00435c80(plVar5);
      uVar3 = *(uint *)(plVar5 + 1);
      if (uVar3 == 0) {
        FUN__text__00436920(puVar4);
        FUN__text__00400fc0(0x10,puVar4);
        return (undefined8 *)0x0;
      }
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = *(uint *)(puVar4 + 1) / uVar3;
    }
    lVar1 = (ulong)(*(uint *)(puVar4 + 1) - uVar2 * uVar3) * 8;
    *puVar4 = *(undefined8 *)(*plVar5 + lVar1);
    *(undefined8 **)(*plVar5 + lVar1) = puVar4;
    param_1 = param_1 + uVar6 * 0x18;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return puVar4;
}


