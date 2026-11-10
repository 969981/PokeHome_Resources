/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b940; name: FUN_.text__0042b940
 */


void FUN__text__0042b940(long param_1)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  short *psVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float local_64;
  
  plVar5 = (long *)(**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) + 0x38))();
  if ((plVar5 != (long *)0x0) && ((int)plVar5[1] != 0)) {
    uVar1 = *(uint *)(param_1 + 0x68);
    psVar9 = (short *)*plVar5;
    if (uVar1 == 0) {
      do {
        sVar3 = *psVar9;
        local_64 = 1.0;
        if ((char)psVar9[1] == '\x03') {
          FUN__text__0042c290();
        }
        else {
          local_64 = 0.0;
          FUN__text__0042c3f0(*(long *)(param_1 + 0x58) + 0x18,param_1,sVar3,&local_64);
        }
        (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                  (*(long **)(param_1 + 0x50),sVar3,&local_64,4);
        psVar9 = psVar9 + 2;
      } while (psVar9 != (short *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 4));
    }
    else {
      do {
        cVar2 = (char)psVar9[1];
        bVar10 = false;
        sVar3 = *psVar9;
        local_64 = 1.0;
        pfVar7 = (float *)(*(long *)(param_1 + 0x60) + 0xc);
        pfVar6 = (float *)(*(long *)(param_1 + 0x60) + 0xc);
        if (cVar2 == '\x03') {
          fVar12 = 1.0;
          fVar11 = 1.0;
          uVar8 = (ulong)uVar1;
          do {
            if (*(short *)(pfVar6 + -1) == sVar3) {
              local_64 = fVar11 * *pfVar6;
              if (pfVar6[-3] == 0.0) {
                fVar12 = *pfVar6;
              }
              bVar10 = (bool)(pfVar6[-3] != 0.0 | bVar10);
              fVar11 = local_64;
            }
            pfVar6 = pfVar6 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        else {
          local_64 = 0.0;
          fVar12 = 0.0;
          fVar11 = 0.0;
          uVar8 = (ulong)uVar1;
          do {
            if (*(short *)(pfVar7 + -1) == sVar3) {
              local_64 = fVar11 + *pfVar7;
              if (pfVar7[-3] == 0.0) {
                fVar12 = *pfVar7;
              }
              bVar10 = (bool)(pfVar7[-3] != 0.0 | bVar10);
              fVar11 = local_64;
            }
            pfVar7 = pfVar7 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (cVar2 == '\x03') {
          FUN__text__0042c290(*(long *)(param_1 + 0x58) + 0x18,param_1,sVar3,&local_64);
        }
        else {
          uVar4 = FUN__text__0042c3f0();
          if ((cVar2 == '\x04') && (bVar10 || (uVar4 & 1) != 0)) {
            local_64 = local_64 - fVar12;
          }
        }
        (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                  (*(long **)(param_1 + 0x50),sVar3,&local_64,4);
        psVar9 = psVar9 + 2;
      } while (psVar9 != (short *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 4));
    }
  }
  return;
}


