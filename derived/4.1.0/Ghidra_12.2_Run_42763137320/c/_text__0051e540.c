/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051e540; name: FUN_.text__0051e540
 */


uint * FUN__text__0051e540(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  float fVar8;
  
  uVar7 = *param_2;
  uVar3 = *(uint *)(param_1 + 0x50);
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar7 / uVar3;
    }
    for (puVar4 = *(uint **)(*(long *)(param_1 + 0x48) + (ulong)(uVar7 - uVar2 * uVar3) * 8);
        puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 0xe)) {
      if (*puVar4 == uVar7) {
        return puVar4 + 2;
      }
    }
  }
  puVar4 = (uint *)FUN__text__00400f80(10,0x40);
  if (puVar4 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar4[0] = 0;
  puVar4[1] = 0;
  puVar5 = puVar4 + 2;
  puVar5[0] = 0;
  puVar5[1] = 0;
  puVar6 = puVar4 + 8;
  puVar6[0] = 0;
  puVar6[1] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *puVar4 = uVar7;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  uVar3 = *(uint *)(param_1 + 0x50);
  if ((uVar3 == 0) ||
     (fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x58)), 0.9 < fVar8 / (float)uVar3)) {
    FUN__text__0051f9c0((long *)(param_1 + 0x48));
    uVar3 = *(uint *)(param_1 + 0x50);
    if (uVar3 == 0) {
      FUN__text__0051d5d0(puVar5);
      FUN__text__0051cae0(puVar6);
      FUN__text__0051cae0(puVar5);
      FUN__text__00400fc0(10,puVar4);
      return (uint *)0x0;
    }
    uVar7 = *puVar4;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar7 / uVar3;
  }
  lVar1 = (ulong)(uVar7 - uVar2 * uVar3) * 8;
  *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar1);
  *(uint **)(*(long *)(param_1 + 0x48) + lVar1) = puVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return puVar5;
}


