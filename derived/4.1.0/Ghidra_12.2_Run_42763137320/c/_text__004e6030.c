/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6030; name: FUN_.text__004e6030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e6030(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  char *pcVar5;
  bool bVar6;
  float fVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined8 local_70;
  char *local_68;
  
  if ((*(byte *)(param_1 + 0x194) & 1) == 0) {
    FUN__text__004470f0();
    uVar2 = *(uint *)(param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0x18c) = 0;
    puVar4 = _DAT_008a4b68;
    uVar8 = *(uint *)(param_1 + 400);
    uVar1 = 0;
    if (uVar2 <= uVar8) {
      uVar1 = uVar8 - uVar2;
    }
    if (uVar8 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    fVar7 = (float)NEON_ucvtf(*_DAT_008a4b68);
    if ((float)(int)(param_3 - uVar2) / (fVar7 * 0.001) != 0.0) {
      bVar3 = *(byte *)(param_1 + 0x194);
      local_70 = 0;
      local_68 = (char *)0x0;
      FUN__text__004e6f30(param_1 + 0x108,&local_70);
      if (local_68 != (char *)0x0) {
        bVar6 = (bool)(bVar3 >> 1 & 1);
        pcVar5 = local_68;
        do {
          local_68 = *(char **)(pcVar5 + 0x18);
          if (local_68 == (char *)0x0) {
            local_70 = 0;
          }
          uVar8 = *puVar4;
          pcVar5[0x18] = '\0';
          pcVar5[0x19] = '\0';
          pcVar5[0x1a] = '\0';
          pcVar5[0x1b] = '\0';
          pcVar5[0x1c] = '\0';
          pcVar5[0x1d] = '\0';
          pcVar5[0x1e] = '\0';
          pcVar5[0x1f] = '\0';
          dVar9 = (double)NEON_ucvtf((ulong)uVar8);
          dVar9 = (double)*(float *)(pcVar5 + 0xc) * 0.001 * dVar9;
          dVar10 = 0.5;
          if (dVar9 <= 0.0) {
            dVar10 = -0.5;
          }
          uVar8 = (uint)(dVar10 + dVar9);
          if (uVar1 != 0xffffffff) {
            bVar6 = uVar1 <= uVar8;
          }
          if (((*pcVar5 != -0x70) || (pcVar5[5] == '\0')) || (bVar6 == false)) {
            FUN__text__00446f40(param_1,param_2,pcVar5,uVar2 + uVar8,*(undefined4 *)(pcVar5 + 0x10),
                                *(byte *)(param_1 + 0x194) >> 1 & 1,
                                *(byte *)(param_1 + 0x194) >> 2 & 1);
            *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) & 0xfb;
          }
          FUN__text__00400fc0(0,pcVar5);
          pcVar5 = local_68;
        } while (local_68 != (char *)0x0);
      }
    }
    if (uVar1 != 0xffffffff) {
      *(undefined4 *)(param_1 + 400) = 0;
      if ((*(byte *)(param_1 + 0x194) >> 1 & 1) == 0) {
        *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 2;
        FUN__text__00447104(param_1);
      }
    }
    FUN__text__00447104(param_1);
  }
  return;
}


